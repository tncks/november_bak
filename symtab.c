/****************************************************/
/* File: symtab.c                                   */
/* Symbol table implementation for the TINY compiler*/
/* (allows only one symbol table)                   */
/* Symbol table is implemented as a chained         */
/* hash table                                       */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "globals.h"
#include "symtab.h"


/* SHIFT is the power of two used as multiplier
   in hash function  */
#define SHIFT 4

#define MAX_SCOPE 1000
Scope globalScope;

/* the hash function */
static int hash ( const char * key )
{ int temp = 0;
  int i = 0;
  while (key[i] != '\0')
  { temp = ((temp << SHIFT) + key[i]) % SIZE;
    ++i;
  }
  return temp;
}

static Scope scopes[MAX_SCOPE];
static int nScope = 0;
static Scope scopeStack[MAX_SCOPE];
static int nScopeStack = 0;
static int location[MAX_SCOPE];

Scope sc_top( void )
{ return scopeStack[nScopeStack - 1];
}

void sc_pop( void )
{
  //printf("pop %s\n", sc_top()->funcName);
  --nScopeStack;
}

int addLocation( void )
{
  return location[nScopeStack - 1]++;
}

void sc_push( Scope scope )
{ scopeStack[nScopeStack] = scope;
  location[nScopeStack++] = 0;
  //printf("push %s\n", scope->funcName);
}

Scope sc_create(char *funcName)
{ Scope newScope;

  newScope = (Scope) malloc(sizeof(struct ScopeRec));
  newScope->funcName = funcName;
  newScope->nestedLevel = nScopeStack;
  newScope->parent = sc_top();

  scopes[nScope++] = newScope;

  return newScope;
}

BucketList st_bucket( const char * name )
{ int h = hash(name);
  Scope sc = sc_top();
  while(sc) {
    BucketList l = sc->hashTable[h];
    while ((l != NULL) && (strcmp(name,l->name) != 0))
      l = l->next;
    if (l != NULL) return l;
    sc = sc->parent;
  }
  return NULL;
}


/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert( char * name, int lineno, int loc, TreeNode * treeNode )
{ int h = hash(name);
	int notdebug = 1;
	if(notdebug == 0) fprintf(listing, "[st_insert] char * name = %s, \tAddress of treeNode = [%p]\n", name==NULL ? "null" : name, treeNode);
  Scope top = sc_top();
  BucketList l =  top->hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l == NULL) /* variable not yet in table */
  { l = (BucketList) malloc(sizeof(struct BucketListRec));
    l->name = name;
    l->treeNode = treeNode;
    l->lines = (LineList) malloc(sizeof(struct LineListRec));
    l->lines->lineno = lineno;
    l->memloc = loc;
    l->lines->next = NULL;
    l->next = top->hashTable[h];
    top->hashTable[h] = l; }
  else /* found in table, so just add line number */
  { // ERROR!
  }
} /* st_insert */

/* Function st_lookup returns the memory
 * location of a variable or -1 if not found
 */
int st_lookup ( char * name )
{ BucketList l = st_bucket(name);
  if (l != NULL) return l->memloc;
  return -1;
}

int st_lookup_top (char * name)
{ int h = hash(name);
  Scope sc = sc_top();
  while(sc) {
    BucketList l = sc->hashTable[h];
    while ((l != NULL) && (strcmp(name,l->name) != 0))
      l = l->next;
    if (l != NULL) return l->memloc;
    break;
  }
  return -1;
}

int st_add_lineno(char * name, int lineno)
{ BucketList l = st_bucket(name);
  LineList ll = l->lines;
  while (ll->next != NULL) ll = ll->next;
  ll->next = (LineList) malloc(sizeof(struct LineListRec));
  ll->next->lineno = lineno;
  ll->next->next = NULL;
}
/* Variable indentno is used by printTree to
 * store current number of spaces to indent
 */
static int indentno_ = 0;

/* macros to increase/decrease indentation */
#define MAXCHILDREN_ 3
#define INDENT_ indentno_+=1
#define UNINDENT_ indentno_-=1

/* printSpaces indents by printing spaces */
static void printSpaces_(FILE *listing)
{
 int i;
  for (i=0;i<indentno_;i++)
    fprintf(listing," ");
}
void subcall(TreeNode *tree, FILE *listing) {
  

  int i;
  INDENT_;
  while (tree != NULL) {
    printSpaces_(listing); 
    switch (tree->nodekind) {
      case DeclK:
        switch (tree->kind.decl) {
          	case FunK:
            		fprintf(listing, "%s\t %s\t", tree->attr.name, (tree->attr.type == 260 || tree->attr.type == INT) ? "int" : "void");
            		break;
          	default:
            		break;
        }
        break;
      case ParamK:
        switch(tree->kind.param) {
          	case ArrParamK:
            		fprintf(listing, "\n\t\t%s\t %s[]\t", tree->attr.name, (tree->attr.type == 260 || tree->attr.type == INT) ? "int" : "void");
            		break;
          	case NonArrParamK:
            		if((tree->attr.type == VOID)) {
              		fprintf(listing, "void\t");
              		break;
            		}
            		fprintf(listing, "\n\t\t%s\t %s\t", tree->attr.name, (tree->attr.type == 260 || tree->attr.type == INT) ? "int" : "void");
            		break;
          	default:
            		break;
        }
        break;
      default:
        break;      
    }

    for(i=0; i<MAXCHILDREN_; i++)
      subcall(tree->child[i], listing);
    tree = tree->sibling;
  }  
  UNINDENT_;

}
void printSymTabRows(BucketList *hashTable, FILE *listing) {
  int j;

  for (j=0;j<SIZE;++j)
  { if (hashTable[j] != NULL)
    { BucketList l = hashTable[j];
      TreeNode *node = l->treeNode;

      while (l != NULL)
      { LineList t = l->lines;

        fprintf(listing,"%-14s ",l->name);

        switch (node->nodekind) {
        case DeclK:
          switch (node->kind.decl) {
          case FunK:
            fprintf(listing, "Function  ");
            break;
          case VarK:
            fprintf(listing, "Variable  ");
            break;
          case ArrVarK:
            fprintf(listing, "Array Var \t\t");
            break;
          default:
            break;
          }
          break;
        case ParamK:
          switch (node->kind.param) {
          case NonArrParamK:
            fprintf(listing, "Variable  ");
            break;
          case ArrParamK:
            fprintf(listing, "Array Var \t\t");
            break;
          default:
            break;
          }
          break;
        default:
          break;
        }

        switch (node->type) {
        case Void:
          fprintf(listing, "Void         ");
          break;
        case Integer:
          fprintf(listing, "Integer      ");
          break;
        case Boolean:
          fprintf(listing, "Boolean      ");
          break;
        default:
          break;
        }

        while (t != NULL)
        { fprintf(listing,"%4d ",t->lineno);
          t = t->next;
        }

        fprintf(listing,"\n");
        l = l->next;
      }
    }
  }
}


// under test version. i'm cleaning..
void printHierarchyFunDetail(BucketList *hashTable, FILE *listing) {
    // Start by printing an empty line to separate sections
    fprintf(listing, "\n\n");
    int cMarkerValueForFunction = 1;
    

    // Print the header for the function details
    fprintf(listing, "Function Name  Return Type  Parameter Name  Parameter Type\n");
    fprintf(listing, "-------------  -----------  --------------  --------------\n");

    // Iterate over all the hash table entries
    for (int j = 0; j < SIZE; ++j) {
        
        if (hashTable[j] != NULL) {
            
            BucketList l = hashTable[j];
            TreeNode *node = l->treeNode;  

            
            while (l != NULL) {
                LineList t = l->lines;  // List of line numbers associated with this symbol

                // do filter and mark only Func
                switch (node->nodekind) {
                  case DeclK:
                    switch (node->kind.decl) {
                    case FunK:
                      cMarkerValueForFunction = 1;
                      break;
                    default:
                      cMarkerValueForFunction = 0;
                      break;
                    }
                    break;
                  
                  default:
                    cMarkerValueForFunction = 0;
                    break;
                }
                // Print function details only for nodes of kind FunK (function declarations): template logic for example
                // switch (node->nodekind) {
                //     case DeclK:  // Case for declarations
                //         switch (node->kind.decl) {
                //             case FunK:  // Case for function declarations
                //                 // Print the function type (Function)
                //                 fprintf(listing, "Function  ");
                //                 /******** Add more detailed printing logic for the function here  ********/
                //                 break;

                //             default:
                //                 // Not a function declaration, skip further processing
                //                 break;
                //         }
                //         break;

                //     default:
                //         // Not a declaration, skip further processing
                //         break;
                // }

                // Print function details only for nodes of kind FunK (function declarations):  core logic for actual usage
                switch (cMarkerValueForFunction) {
                    case 1:
                        subcall(node, listing); // new sub func call
                        
                        fprintf(listing, "\n");
                        break;

                    default:
                        // do nothing, just default break
                        break;
                }

                
                l = l->next;  
            }
        }
    }

   
    // Print a blank line at the end of the output
    fprintf(listing, "\n\n");
}


// template form
/*void printSomeDetailExample(BucketList *hashTable, File *listing) {
	fprintf(listing, "\n\n");

	// start from here.. 

	fprintf(listing, "\n\n");
}*/


/* Procedure printSymTab prints a formatted
 * listing of the symbol table contents
 * to the listing file
 */
void printSymTab(FILE * listing)
{ int i;

  for (i = 0; i < nScope; ++i) {
    Scope scope = scopes[i];
    BucketList * hashTable = scope->hashTable;

    if (i == 0) {     // global scope
      fprintf(listing, "<global scope> ");
    } else {
      fprintf(listing, "function name: %s ", scope->funcName);
    }

    fprintf(
        listing,
        "(nested level: %d)\n",
        scope->nestedLevel);

    fprintf(listing,"Symbol Name    Sym.Type  Data Type    Line Numbers\n");
    fprintf(listing,"-------------  --------  -----------  ------------\n");

    printSymTabRows(hashTable, listing);
    
    printHierarchyFunDetail(hashTable, listing); //added
    

    fputc('\n', listing);
  }
} /* printSymTab */


















// dirty version, unorganized  
void printHierarchyFunDetail_(BucketList *hashTable, FILE *listing) {
    // fprintf(listing, "\n\n");

    // // start from here.. 
    // fprintf(listing,"Function Name  Return Type  Parameter Name  Parameter Type\n");
    // fprintf(listing,"-------------  -----------  --------------  --------------\n");
    
    // int j;

    // for (j = 0; j < SIZE; ++j)
    // { if (hashTable[j] != NULL)
    //   { BucketList l = hashTable[j];
    //     TreeNode *node = l->treeNode;

    //     while (l != NULL)
    //     { LineList t = l->lines;

    //       //fprintf(listing,"%-14s ",l->name);

    //       switch (node->nodekind) {
    //       case DeclK:
    //         switch (node->kind.decl) {
    //         case FunK:
    //           fprintf(listing, "Function  ");
    //           break;
    // switch(cMarkerValueForFunction) {
    //   case 1:
    //     // do print some  print row // while 
    //     break;
    //   default:
    //     return;
    // }

    // fprintf(listing, "\n\n");
}
