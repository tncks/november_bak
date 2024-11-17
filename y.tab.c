/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "cminus.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedNumber;
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yylex(void);
void mydebug(struct treeNode*);


#line 89 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ELSE = 258,                    /* ELSE  */
    IF = 259,                      /* IF  */
    INT = 260,                     /* INT  */
    RETURN = 261,                  /* RETURN  */
    VOID = 262,                    /* VOID  */
    WHILE = 263,                   /* WHILE  */
    ID = 264,                      /* ID  */
    NUM = 265,                     /* NUM  */
    PLUS = 266,                    /* PLUS  */
    MINUS = 267,                   /* MINUS  */
    TIMES = 268,                   /* TIMES  */
    OVER = 269,                    /* OVER  */
    LT = 270,                      /* LT  */
    LE = 271,                      /* LE  */
    GT = 272,                      /* GT  */
    GE = 273,                      /* GE  */
    EQ = 274,                      /* EQ  */
    NE = 275,                      /* NE  */
    ASSIGN = 276,                  /* ASSIGN  */
    SEMI = 277,                    /* SEMI  */
    COMMA = 278,                   /* COMMA  */
    LPAREN = 279,                  /* LPAREN  */
    RPAREN = 280,                  /* RPAREN  */
    LCURLY = 281,                  /* LCURLY  */
    RCURLY = 282,                  /* RCURLY  */
    LBRACE = 283,                  /* LBRACE  */
    RBRACE = 284,                  /* RBRACE  */
    ERROR = 285,                   /* ERROR  */
    XIF = 286                      /* XIF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ELSE = 3,                       /* ELSE  */
  YYSYMBOL_IF = 4,                         /* IF  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_RETURN = 6,                     /* RETURN  */
  YYSYMBOL_VOID = 7,                       /* VOID  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_ID = 9,                         /* ID  */
  YYSYMBOL_NUM = 10,                       /* NUM  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_TIMES = 13,                     /* TIMES  */
  YYSYMBOL_OVER = 14,                      /* OVER  */
  YYSYMBOL_LT = 15,                        /* LT  */
  YYSYMBOL_LE = 16,                        /* LE  */
  YYSYMBOL_GT = 17,                        /* GT  */
  YYSYMBOL_GE = 18,                        /* GE  */
  YYSYMBOL_EQ = 19,                        /* EQ  */
  YYSYMBOL_NE = 20,                        /* NE  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_SEMI = 22,                      /* SEMI  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_LPAREN = 24,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 25,                    /* RPAREN  */
  YYSYMBOL_LCURLY = 26,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 27,                    /* RCURLY  */
  YYSYMBOL_LBRACE = 28,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 29,                    /* RBRACE  */
  YYSYMBOL_ERROR = 30,                     /* ERROR  */
  YYSYMBOL_XIF = 31,                       /* XIF  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_decl_list = 34,                 /* decl_list  */
  YYSYMBOL_decl = 35,                      /* decl  */
  YYSYMBOL_saveName = 36,                  /* saveName  */
  YYSYMBOL_saveNumber = 37,                /* saveNumber  */
  YYSYMBOL_var_decl = 38,                  /* var_decl  */
  YYSYMBOL_type_spec = 39,                 /* type_spec  */
  YYSYMBOL_fun_decl = 40,                  /* fun_decl  */
  YYSYMBOL_41_1 = 41,                      /* @1  */
  YYSYMBOL_params = 42,                    /* params  */
  YYSYMBOL_param_list = 43,                /* param_list  */
  YYSYMBOL_param = 44,                     /* param  */
  YYSYMBOL_comp_stmt = 45,                 /* comp_stmt  */
  YYSYMBOL_local_decls = 46,               /* local_decls  */
  YYSYMBOL_stmt_list = 47,                 /* stmt_list  */
  YYSYMBOL_stmt = 48,                      /* stmt  */
  YYSYMBOL_exp_stmt = 49,                  /* exp_stmt  */
  YYSYMBOL_sel_stmt = 50,                  /* sel_stmt  */
  YYSYMBOL_iter_stmt = 51,                 /* iter_stmt  */
  YYSYMBOL_ret_stmt = 52,                  /* ret_stmt  */
  YYSYMBOL_exp = 53,                       /* exp  */
  YYSYMBOL_var = 54,                       /* var  */
  YYSYMBOL_simple_exp = 55,                /* simple_exp  */
  YYSYMBOL_add_exp = 56,                   /* add_exp  */
  YYSYMBOL_term = 57,                      /* term  */
  YYSYMBOL_factor = 58,                    /* factor  */
  YYSYMBOL_call = 59,                      /* call  */
  YYSYMBOL_60_2 = 60,                      /* @2  */
  YYSYMBOL_args = 61,                      /* args  */
  YYSYMBOL_arg_list = 62                   /* arg_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   114

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    45,    54,    56,    57,    59,    64,    69,
      76,    85,    88,    92,    92,   106,   107,   114,   123,   124,
     130,   138,   144,   153,   155,   164,   166,   167,   168,   169,
     170,   172,   173,   175,   181,   188,   194,   198,   203,   208,
     210,   214,   220,   226,   232,   238,   244,   250,   256,   258,
     264,   270,   272,   278,   284,   286,   287,   288,   289,   294,
     294,   303,   304,   306,   315
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ELSE", "IF", "INT",
  "RETURN", "VOID", "WHILE", "ID", "NUM", "PLUS", "MINUS", "TIMES", "OVER",
  "LT", "LE", "GT", "GE", "EQ", "NE", "ASSIGN", "SEMI", "COMMA", "LPAREN",
  "RPAREN", "LCURLY", "RCURLY", "LBRACE", "RBRACE", "ERROR", "XIF",
  "$accept", "program", "decl_list", "decl", "saveName", "saveNumber",
  "var_decl", "type_spec", "fun_decl", "@1", "params", "param_list",
  "param", "comp_stmt", "local_decls", "stmt_list", "stmt", "exp_stmt",
  "sel_stmt", "iter_stmt", "ret_stmt", "exp", "var", "simple_exp",
  "add_exp", "term", "factor", "call", "@2", "args", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      41,   -82,   -82,     3,    41,   -82,   -82,    -1,   -82,   -82,
     -82,   -82,   -17,   -82,    12,    11,   -82,    26,    46,    57,
      38,    -1,    55,    67,   -82,   -82,    61,    65,    41,    63,
     -82,   -82,   -82,   -82,    41,   -82,    -1,    23,   -17,    69,
      -3,    70,   -82,   -82,     0,   -82,    13,   -82,   -82,   -82,
     -82,   -82,   -82,    73,    75,   -82,    66,    29,   -82,   -82,
       0,   -82,    76,     0,    72,     0,    77,   -82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
     -82,    78,   -82,    71,     0,   -82,   -82,    29,    29,     2,
       2,     2,     2,     2,     2,   -82,   -82,    30,    30,   -82,
     -82,    79,    82,    99,   -82,   -82,     0,    30,   -82,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,    12,     0,     2,     4,     5,     0,     6,     1,
       3,     7,    13,     9,     0,     0,     8,     0,     0,     0,
      12,     0,     0,    15,    18,    10,    19,     0,     0,     0,
      23,    14,    17,    20,    25,    22,     0,     0,     0,     0,
       0,     0,    58,    32,     0,    21,    40,    27,    24,    26,
      28,    29,    30,     0,    56,    39,    48,    51,    54,    57,
       0,    36,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,    55,     0,    62,    38,    56,    49,    50,    43,
      42,    44,    45,    46,    47,    52,    53,     0,     0,    41,
      64,     0,    61,    33,    35,    60,     0,     0,    63,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,   -82,   102,    -6,   -82,    80,   -16,   -82,   -82,
     -82,   -82,    81,    83,   -82,   -82,   -81,   -82,   -82,   -82,
     -82,   -40,    -2,   -82,   -14,    -5,    10,   -82,   -82,   -82,
     -82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    46,    17,     6,     7,     8,    15,
      22,    23,    24,    47,    34,    37,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    66,   101,
     102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      62,    12,    21,     9,    64,    13,    11,    42,    11,    11,
      42,    14,    21,    69,    70,    26,   103,   104,    36,    61,
      79,    44,    16,    81,    44,    83,   109,    39,    85,    40,
      38,    41,    11,    42,    39,    18,    40,   -59,    41,    11,
      42,    65,    77,    78,   100,    43,     1,    44,     2,    30,
      45,     1,    43,    20,    44,    19,    30,    89,    90,    91,
      92,    93,    94,   -16,    87,    88,   108,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    69,    70,    25,
      27,    71,    72,    73,    74,    75,    76,    95,    96,    29,
      28,    30,    33,    60,    63,    67,    68,    82,    80,    97,
      99,    84,   107,    98,   105,   106,    10,     0,     0,    32,
      31,     0,     0,     0,    35
};

static const yytype_int8 yycheck[] =
{
      40,     7,    18,     0,    44,    22,     9,    10,     9,     9,
      10,    28,    28,    11,    12,    21,    97,    98,    34,    22,
      60,    24,    10,    63,    24,    65,   107,     4,    68,     6,
      36,     8,     9,    10,     4,    24,     6,    24,     8,     9,
      10,    28,    13,    14,    84,    22,     5,    24,     7,    26,
      27,     5,    22,     7,    24,    29,    26,    71,    72,    73,
      74,    75,    76,    25,    69,    70,   106,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    11,    12,    22,
      25,    15,    16,    17,    18,    19,    20,    77,    78,    28,
      23,    26,    29,    24,    24,    22,    21,    25,    22,    25,
      29,    24,     3,    25,    25,    23,     4,    -1,    -1,    28,
      27,    -1,    -1,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     7,    33,    34,    35,    38,    39,    40,     0,
      35,     9,    36,    22,    28,    41,    10,    37,    24,    29,
       7,    39,    42,    43,    44,    22,    36,    25,    23,    28,
      26,    45,    44,    29,    46,    38,    39,    47,    36,     4,
       6,     8,    10,    22,    24,    27,    36,    45,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      24,    22,    53,    24,    53,    28,    60,    22,    21,    11,
      12,    15,    16,    17,    18,    19,    20,    13,    14,    53,
      22,    53,    25,    53,    24,    53,    54,    57,    57,    56,
      56,    56,    56,    56,    56,    58,    58,    25,    25,    29,
      53,    61,    62,    48,    48,    25,    23,     3,    53,    48
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    38,
      38,    39,    39,    41,    40,    42,    42,    43,    43,    44,
      44,    45,    46,    46,    47,    47,    48,    48,    48,    48,
      48,    49,    49,    50,    50,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    56,    57,    57,    57,    58,    58,    58,    58,    60,
      59,    61,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       6,     1,     1,     0,     7,     1,     1,     3,     1,     2,
       4,     4,     2,     0,     2,     0,     1,     1,     1,     1,
       1,     2,     1,     5,     7,     5,     2,     3,     3,     1,
       1,     4,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     1,     1,     0,
       5,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: decl_list  */
#line 43 "cminus.y"
                 { savedTree = yyvsp[0];}
#line 1408 "y.tab.c"
    break;

  case 3: /* decl_list: decl_list decl  */
#line 46 "cminus.y"
                 { YYSTYPE t = yyvsp[-1];
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-1]; }
                     else yyval = yyvsp[0];
                 }
#line 1421 "y.tab.c"
    break;

  case 4: /* decl_list: decl  */
#line 54 "cminus.y"
                    { yyval = yyvsp[0]; }
#line 1427 "y.tab.c"
    break;

  case 5: /* decl: var_decl  */
#line 56 "cminus.y"
                        { yyval = yyvsp[0]; }
#line 1433 "y.tab.c"
    break;

  case 6: /* decl: fun_decl  */
#line 57 "cminus.y"
                        { yyval = yyvsp[0]; }
#line 1439 "y.tab.c"
    break;

  case 7: /* saveName: ID  */
#line 60 "cminus.y"
                 { savedName = copyString(tokenString);
                   savedLineNo = lineno;
                 }
#line 1447 "y.tab.c"
    break;

  case 8: /* saveNumber: NUM  */
#line 65 "cminus.y"
                 { savedNumber = atoi(tokenString);
                   savedLineNo = lineno;
                 }
#line 1455 "y.tab.c"
    break;

  case 9: /* var_decl: type_spec saveName SEMI  */
#line 70 "cminus.y"
                 { yyval = newDeclNode(VarK);
                   mydebug(yyvsp[-2]);
                   yyval->attr.type = yyvsp[-2]->attr.type;
                   yyval->lineno = lineno;
                   yyval->attr.name = savedName;
                 }
#line 1466 "y.tab.c"
    break;

  case 10: /* var_decl: type_spec saveName LBRACE saveNumber RBRACE SEMI  */
#line 77 "cminus.y"
                 { yyval = newDeclNode(ArrVarK);
                   mydebug(yyvsp[-5]);
                   yyval->attr.type = yyvsp[-5]->attr.type;
                   yyval->lineno = lineno;
                   yyval->attr.arr.name = savedName;
                   yyval->attr.arr.size = savedNumber;
                 }
#line 1478 "y.tab.c"
    break;

  case 11: /* type_spec: INT  */
#line 86 "cminus.y"
                 { yyval = newTypeNode(TypeNameK, INT);
                 }
#line 1485 "y.tab.c"
    break;

  case 12: /* type_spec: VOID  */
#line 89 "cminus.y"
                 { yyval = newTypeNode(TypeNameK, VOID);
                 }
#line 1492 "y.tab.c"
    break;

  case 13: /* @1: %empty  */
#line 92 "cminus.y"
                                 {
                   yyval = newDeclNode(FunK);
                   yyval->lineno = lineno;
                   yyval->attr.name = savedName;
                 }
#line 1502 "y.tab.c"
    break;

  case 14: /* fun_decl: type_spec saveName @1 LPAREN params RPAREN comp_stmt  */
#line 98 "cminus.y"
                 {
                   yyval = yyvsp[-4];
                   mydebug(yyvsp[-6]); //added
                   yyval->attr.type = yyvsp[-6]->attr.type; //added
                   yyval->child[0] = yyvsp[-2];    /* parameters */
                   yyval->child[1] = yyvsp[0];    /* body */
                 }
#line 1514 "y.tab.c"
    break;

  case 15: /* params: param_list  */
#line 106 "cminus.y"
                          { yyval = yyvsp[0]; }
#line 1520 "y.tab.c"
    break;

  case 16: /* params: VOID  */
#line 108 "cminus.y"
                 { yyval = newParamNode(NonArrParamK);
                   yyval->attr.type = VOID;
		   yyval->lineno = 0;
		   yyval->attr.name = "";
                   //$$ = newTypeNode(TypeNameK,VOID);
                 }
#line 1531 "y.tab.c"
    break;

  case 17: /* param_list: param_list COMMA param  */
#line 115 "cminus.y"
                 { YYSTYPE t = yyvsp[-2];
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-2]; }
                     else yyval = yyvsp[0]; 
                 }
#line 1544 "y.tab.c"
    break;

  case 18: /* param_list: param  */
#line 123 "cminus.y"
                    { yyval = yyvsp[0]; }
#line 1550 "y.tab.c"
    break;

  case 19: /* param: type_spec saveName  */
#line 125 "cminus.y"
                 { yyval = newParamNode(NonArrParamK);
                   mydebug(yyvsp[-1]); //added
                   yyval->attr.type = yyvsp[-1]->attr.type; //added
                   yyval->attr.name = savedName;
                 }
#line 1560 "y.tab.c"
    break;

  case 20: /* param: type_spec saveName LBRACE RBRACE  */
#line 132 "cminus.y"
                 { yyval = newParamNode(ArrParamK);
                   mydebug(yyvsp[-3]); //added
                   yyval->attr.type = yyvsp[-3]->attr.type; //added
                   yyval->attr.name = savedName;
                 }
#line 1570 "y.tab.c"
    break;

  case 21: /* comp_stmt: LCURLY local_decls stmt_list RCURLY  */
#line 139 "cminus.y"
                 { yyval = newStmtNode(CompK);
                   yyval->child[0] = yyvsp[-2]; /* local variable declarations */
                   yyval->child[1] = yyvsp[-1]; /* statements */
                 }
#line 1579 "y.tab.c"
    break;

  case 22: /* local_decls: local_decls var_decl  */
#line 145 "cminus.y"
                 { YYSTYPE t = yyvsp[-1];
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-1]; }
                     else yyval = yyvsp[0];
                 }
#line 1592 "y.tab.c"
    break;

  case 23: /* local_decls: %empty  */
#line 153 "cminus.y"
                          { yyval = NULL; }
#line 1598 "y.tab.c"
    break;

  case 24: /* stmt_list: stmt_list stmt  */
#line 156 "cminus.y"
                 { YYSTYPE t = yyvsp[-1];
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-1]; }
                     else yyval = yyvsp[0];
                 }
#line 1611 "y.tab.c"
    break;

  case 25: /* stmt_list: %empty  */
#line 164 "cminus.y"
                          { yyval = NULL; }
#line 1617 "y.tab.c"
    break;

  case 26: /* stmt: exp_stmt  */
#line 166 "cminus.y"
                       { yyval = yyvsp[0]; }
#line 1623 "y.tab.c"
    break;

  case 27: /* stmt: comp_stmt  */
#line 167 "cminus.y"
                        { yyval = yyvsp[0]; }
#line 1629 "y.tab.c"
    break;

  case 28: /* stmt: sel_stmt  */
#line 168 "cminus.y"
                       { yyval = yyvsp[0]; }
#line 1635 "y.tab.c"
    break;

  case 29: /* stmt: iter_stmt  */
#line 169 "cminus.y"
                        { yyval = yyvsp[0]; }
#line 1641 "y.tab.c"
    break;

  case 30: /* stmt: ret_stmt  */
#line 170 "cminus.y"
                       { yyval = yyvsp[0]; }
#line 1647 "y.tab.c"
    break;

  case 31: /* exp_stmt: exp SEMI  */
#line 172 "cminus.y"
                       { yyval = yyvsp[-1]; }
#line 1653 "y.tab.c"
    break;

  case 32: /* exp_stmt: SEMI  */
#line 173 "cminus.y"
                   { yyval = NULL; }
#line 1659 "y.tab.c"
    break;

  case 33: /* sel_stmt: IF LPAREN exp RPAREN stmt  */
#line 176 "cminus.y"
                 { yyval = newStmtNode(IfK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->child[2] = NULL;
                 }
#line 1669 "y.tab.c"
    break;

  case 34: /* sel_stmt: IF LPAREN exp RPAREN stmt ELSE stmt  */
#line 182 "cminus.y"
                 { yyval = newStmtNode(IfK);
                   yyval->child[0] = yyvsp[-4];
                   yyval->child[1] = yyvsp[-2];
                   yyval->child[2] = yyvsp[0];
                 }
#line 1679 "y.tab.c"
    break;

  case 35: /* iter_stmt: WHILE LPAREN exp RPAREN stmt  */
#line 189 "cminus.y"
                 { yyval = newStmtNode(IterK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                 }
#line 1688 "y.tab.c"
    break;

  case 36: /* ret_stmt: RETURN SEMI  */
#line 195 "cminus.y"
                 { yyval = newStmtNode(ReturnK);
                   yyval->child[0] = NULL;
                 }
#line 1696 "y.tab.c"
    break;

  case 37: /* ret_stmt: RETURN exp SEMI  */
#line 199 "cminus.y"
                 { yyval = newStmtNode(ReturnK);
                   yyval->child[0] = yyvsp[-1];
                 }
#line 1704 "y.tab.c"
    break;

  case 38: /* exp: var ASSIGN exp  */
#line 204 "cminus.y"
                 { yyval = newExpNode(AssignK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                 }
#line 1713 "y.tab.c"
    break;

  case 39: /* exp: simple_exp  */
#line 208 "cminus.y"
                         { yyval = yyvsp[0]; }
#line 1719 "y.tab.c"
    break;

  case 40: /* var: saveName  */
#line 211 "cminus.y"
                 { yyval = newExpNode(IdK);
                   yyval->attr.name = savedName;
                 }
#line 1727 "y.tab.c"
    break;

  case 41: /* var: saveName LBRACE exp RBRACE  */
#line 215 "cminus.y"
                 { yyval = newExpNode(ArrIdK);
                   yyval->attr.name = savedName;
                   yyval->child[0] = yyvsp[-1];
                 }
#line 1736 "y.tab.c"
    break;

  case 42: /* simple_exp: add_exp LE add_exp  */
#line 221 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = LE;
                 }
#line 1746 "y.tab.c"
    break;

  case 43: /* simple_exp: add_exp LT add_exp  */
#line 227 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = LT;
                 }
#line 1756 "y.tab.c"
    break;

  case 44: /* simple_exp: add_exp GT add_exp  */
#line 233 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = GT;
                 }
#line 1766 "y.tab.c"
    break;

  case 45: /* simple_exp: add_exp GE add_exp  */
#line 239 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = GE;
                 }
#line 1776 "y.tab.c"
    break;

  case 46: /* simple_exp: add_exp EQ add_exp  */
#line 245 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = EQ;
                 }
#line 1786 "y.tab.c"
    break;

  case 47: /* simple_exp: add_exp NE add_exp  */
#line 251 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = NE;
                 }
#line 1796 "y.tab.c"
    break;

  case 48: /* simple_exp: add_exp  */
#line 256 "cminus.y"
                      { yyval = yyvsp[0]; }
#line 1802 "y.tab.c"
    break;

  case 49: /* add_exp: add_exp PLUS term  */
#line 259 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = PLUS;
                 }
#line 1812 "y.tab.c"
    break;

  case 50: /* add_exp: add_exp MINUS term  */
#line 265 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = MINUS;
                 }
#line 1822 "y.tab.c"
    break;

  case 51: /* add_exp: term  */
#line 270 "cminus.y"
                   { yyval = yyvsp[0]; }
#line 1828 "y.tab.c"
    break;

  case 52: /* term: term TIMES factor  */
#line 273 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = TIMES;
                 }
#line 1838 "y.tab.c"
    break;

  case 53: /* term: term OVER factor  */
#line 279 "cminus.y"
                 { yyval = newExpNode(OpK);
                   yyval->child[0] = yyvsp[-2];
                   yyval->child[1] = yyvsp[0];
                   yyval->attr.op = OVER;
                 }
#line 1848 "y.tab.c"
    break;

  case 54: /* term: factor  */
#line 284 "cminus.y"
                     { yyval = yyvsp[0]; }
#line 1854 "y.tab.c"
    break;

  case 55: /* factor: LPAREN exp RPAREN  */
#line 286 "cminus.y"
                                { yyval = yyvsp[-1]; }
#line 1860 "y.tab.c"
    break;

  case 56: /* factor: var  */
#line 287 "cminus.y"
                  { yyval = yyvsp[0]; }
#line 1866 "y.tab.c"
    break;

  case 57: /* factor: call  */
#line 288 "cminus.y"
                   { yyval = yyvsp[0]; }
#line 1872 "y.tab.c"
    break;

  case 58: /* factor: NUM  */
#line 290 "cminus.y"
                 { yyval = newExpNode(ConstK);
                   yyval->attr.val = atoi(tokenString);
                 }
#line 1880 "y.tab.c"
    break;

  case 59: /* @2: %empty  */
#line 294 "cminus.y"
                       {
                 yyval = newExpNode(CallK);
                 yyval->attr.name = savedName;
              }
#line 1889 "y.tab.c"
    break;

  case 60: /* call: saveName @2 LPAREN args RPAREN  */
#line 299 "cminus.y"
                 { yyval = yyvsp[-3];
                   yyval->child[0] = yyvsp[-1];
                 }
#line 1897 "y.tab.c"
    break;

  case 61: /* args: arg_list  */
#line 303 "cminus.y"
                       { yyval = yyvsp[0]; }
#line 1903 "y.tab.c"
    break;

  case 62: /* args: %empty  */
#line 304 "cminus.y"
                          { yyval = NULL; }
#line 1909 "y.tab.c"
    break;

  case 63: /* arg_list: arg_list COMMA exp  */
#line 307 "cminus.y"
                 { YYSTYPE t = yyvsp[-2];
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-2]; }
                     else yyval = yyvsp[0];
                 }
#line 1922 "y.tab.c"
    break;

  case 64: /* arg_list: exp  */
#line 315 "cminus.y"
                  { yyval = yyvsp[0]; }
#line 1928 "y.tab.c"
    break;


#line 1932 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 318 "cminus.y"


int yyerror(const char * message){
  Error = TRUE;
  printf("Error: %s\n", message);
  return 0;
}

void mydebug(struct treeNode * target) {
  int flagOn = 1;
  char* dummy = target->attr.type==INT? "INT":"VOID";
  if(flagOn == 1) return;
  dummy = NULL;
  printf("[mydebug] "/* target address is [%p]\n", target*/);
  printf("[mydebug] "/* target($->attr.type) is [%s], actual value of target->attr.type = [%d]\n", target->attr.type==INT? "INT":"VOID", target->attr.type*/);
}

static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}
