win_flex.exe RubyLexer.l
win_bison.exe -d parser.y --verbose
g++ main.c generate.cpp semantic.cpp create_tree.c print_tree.c lex.yy.c parser.tab.c dot.c -o RubyCompiler
