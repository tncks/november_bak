# Makefile for C-Minus
#
# ./lex/tiny.l        --> ./cminus.l (from Project 1)
# ./yacc/tiny.y       --> ./cminus.y
# ./yacc/globals.h    --> ./globals.h

CC = gcc

CFLAGS = -g -W -Wall

OBJS = main.o util.o lex.yy.o y.tab.o symtab.o analyze.o code.o cgen.o

.PHONY: all clean
all: cminus_semantic

clean:
	rm -vf cminus_semantic *.o lex.yy.c y.tab.c y.output

cminus_semantic: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ -lfl

main.o: main.c globals.h util.h scan.h parse.h analyze.h cgen.h code.h
	$(CC) $(CFLAGS) -c main.c

util.o: util.c util.h globals.h
	$(CC) $(CFLAGS) -c util.c

scan.o: scan.c scan.h util.h globals.h
	$(CC) $(CFLAGS) -c scan.c

lex.yy.o: lex.yy.c scan.h util.h globals.h
	$(CC) $(CFLAGS) -c lex.yy.c


y.tab.o: y.tab.c y.tab.h parse.h util.h globals.h
	$(CC) $(CFLAGS) -c y.tab.c

lex.yy.c: cminus.l
	flex cminus.l
y.tab.c y.tab.h: cminus.y
	bison -d -v -o y.tab.c cminus.y

cgen.o: cgen.c cgen.h code.h
	$(CC) $(CFLAGS) -c cgen.c

code.o: code.c code.h
	$(CC) $(CFLAGS) -c code.c

symtab.o: symtab.c symtab.h
	$(CC) $(CFLAGS) -c symtab.c

analyze.o: analyze.c analyze.h globals.h symtab.h util.h
	$(CC) $(CFLAGS) -c analyze.c
