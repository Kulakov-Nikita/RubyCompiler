#pragma once

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include "tree_nodes.h"
#include "semantic.h"
#include "Constant.h"
#include "Commands.h"

void generate_java(program_struct* program, const std::map<std::string, Clazz *> & clazzList);
void generate_java(Constant constant);
void generate_java(Method* method);
std::vector<char> generateConstructor(Method * m);
std::vector<char> generate_java(expr_struct * expr);
std::vector<char> generate_java(stmt_list_struct* list);
std::vector<char> generate_java(while_stmt_struct* while_s);
std::vector<char> generate_java(if_stmt_struct* if_s);
std::vector<char> generate_java(until_stmt_struct* until_s);

std::vector <char> intToBytes(int value);

std::vector<char> flToBytes(float value);

bool cmp(std::pair<Constant, int>& a, std::pair<Constant, int>& b);