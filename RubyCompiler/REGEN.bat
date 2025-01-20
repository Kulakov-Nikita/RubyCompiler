del lex.yy.c
del parser.tab.h
del parser.tab.c
del tree.dot
del tree.dot.svg
del res.exe
win_flex.exe RubyLexer.l
win_bison.exe -d parser.y --verbose
g++ main.c generate.cpp semantic.cpp create_tree.c print_tree.c lex.yy.c parser.tab.c dot.c -o res7
res7.exe test3.txt
