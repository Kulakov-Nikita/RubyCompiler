#include <iostream>
#include "lex.yy.h"
#include "parser.tab.h"
#include <stdio.h>
#include "semantic.h"
#include "print_tree.h"
#include "generate.h"
#include "dot.h"

extern struct program_struct* root;

int main(int argc, char** argv) {
    yyin = fopen(argv[1], "r");
    std::cout<<argv[1]<<std::endl;

    FILE* tree = fopen("tree.dot", "w");

    yyparse();
    std::cout<<"Hello"<<std::endl;
    transformTree(root);
    std::cout<<"transform"<<std::endl;
    fillTable(root);
    std::cout<<"fill"<<std::endl;
    PrintProgram(root, tree);
    std::cout<<"print"<<std::endl;
    run_dot("../dot/dot.exe", "../Compiler/tree.dot");

    generate_java(root, clazzesList);
    std::cout<<"generate"<<std::endl;
    return 0;
}