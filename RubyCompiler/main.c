#include "lex.yy.h"
#include "parser.tab.h"
#include <stdio.h>
#include "semantic.h"
#include "print_tree.h"
#include "dot.h"
#include "generate.h"
#include <iostream>

extern struct program_struct* root;

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");

    FILE* tree = fopen("tree.dot", "w");

    yyparse();
    transformTree(root);
    fillTable(root);
    PrintProgram(root, tree);
    //puts("Hello");
    run_dot("../dot/dot.exe", "../Compiler/tree.dot");
    generate_java(root, clazzesList);
    return 0;
}