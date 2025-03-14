#pragma once

#include "tree_nodes.h"
#include "Constant.h"
#include <algorithm>
#include <string>
#include <vector>
#include <map>

struct stmt_list_struct* create_stmt_list(struct stmt_struct* val);
struct stmt_list_struct* add_to_stmt_list(struct stmt_list_struct* list, struct stmt_struct* val);

std::string method_descriptor(int size);
std::string method_descriptor(int size, std::string);

struct Field {
	bool isStatic;
	std::string name;
	int number;
	int nameNumber;
	int descriptorNumber;
};

struct Method {
	bool isStatic;
	std::string name;
	std::vector<std::string> local_variables;
	std::map<std::string, std::string> local_variables_types;
	stmt_list_struct* body;
	int number;
	int nameNumber;
	int descriptorNumber;
	int self_method_ref;
	int nill_class_id;
	int nill_constructor_mr;
};

class Clazz {
public:
	int number;
	int parend_number;
	Clazz * parent;

	std::string name;

	std::map<Constant, int> constants;
	std::map<std::string, Method *> methods;
	std::map<std::string, Field *> fields;

	int pushConstant(const Constant& c) {
		// TODO: ���� ��������� ����, �� ������� ��.
		auto iter = constants.find(c);
		if (iter == constants.end()) {
			++_ID;
			constants[c] = _ID;
			return _ID;
		}
		return iter->second;
	}

	int addField(const std::string& fieldName, const std::string& type) {
		int id = pushOrFindFieldRef(fieldName, type);
		if (fields.find(fieldName) == fields.end()) {
			Field* f = new Field();
			f->name = fieldName;
			f->number = id;
			f->nameNumber = pushConstant(Constant::Utf8(fieldName));
			f->descriptorNumber = pushConstant(Constant::Utf8(type));
			fields[fieldName] = f;
		}
		return id;
	}

	int pushOrFindFieldRef(const std::string& fieldName, const std::string& type) {
		int name_id = pushConstant(Constant::Utf8(fieldName));
		int type_id = pushConstant(Constant::Utf8(type));
		int name_and_type_id = pushConstant(Constant::NameAndType(name_id, type_id));
		int class_id = pushConstant(Constant::Class(pushConstant(Constant::Utf8(this->name))));
		int fileldref_id = pushConstant(Constant::FieldRef(class_id, name_and_type_id));	
		return fileldref_id;
	}

	int pushOrFindFieldRef(const std::string& className, const std::string& fieldName, const std::string& type) {
		int name_id = pushConstant(Constant::Utf8(fieldName));
		int type_id = pushConstant(Constant::Utf8(type));
		int name_and_type_id = pushConstant(Constant::NameAndType(name_id, type_id));
		int class_id = pushConstant(Constant::Class(pushConstant(Constant::Utf8(className)))); 
		return pushConstant(Constant::FieldRef(class_id, name_and_type_id));
	}

	int pushOrFindMethodRef(const std::string& methodName, const std::string& descriptor) {
		return pushOrFindMethodRef(this->name, methodName, descriptor);
	}

	int pushOrFindMethodRef(const std::string & className, const std::string& methodName, const std::string& descriptor) {
		int name_id = pushConstant(Constant::Utf8(methodName));
		int descriptor_id = pushConstant(Constant::Utf8(descriptor));

		int name_and_type_id = pushConstant(Constant::NameAndType(name_id, descriptor_id));
		int class_name_id = pushConstant(Constant::Utf8(className));
		int class_id = pushConstant(Constant::Class(class_name_id));
		return pushConstant(Constant::MethodRef(class_id, name_and_type_id));
	}

	int pushOrFindInterfaceMethodRef(const std::string& methodName, const std::string& descriptor) {
		return pushOrFindInterfaceMethodRef(this->name, methodName, descriptor);
	}

	int pushOrFindInterfaceMethodRef(const std::string & className, const std::string& methodName, const std::string& descriptor) {
		int name_id = pushConstant(Constant::Utf8(methodName));
		int descriptor_id = pushConstant(Constant::Utf8(descriptor));

		int name_and_type_id = pushConstant(Constant::NameAndType(name_id, descriptor_id));
		int class_name_id = pushConstant(Constant::Utf8(className));
		int class_id = pushConstant(Constant::Class(class_name_id));
		int sosat = pushConstant(Constant::InterfaceMethodRef(class_id, name_and_type_id));
		return sosat;
	}

private:
	long long _ID = 0;
};

inline std::map<std::string, Clazz*> clazzesList;

std::string method_descriptor(int size);
bool existsId(Clazz* clazz, Method* method, expr_struct* expr);
bool existsIds(Clazz* clazz, Method* method, expr_list_struct* exprList);
bool existsMethod(const std::string& methodName);

void fillTable(program_struct* program);
void fillTable(Clazz* clazz, def_method_stmt_struct * method);
void fillTable(Clazz* clazz, Method * method, stmt_list_struct* body);
void fillTable(Clazz* clazz, Method* method, stmt_struct* stmt);
void fillTable(Clazz* clazz, Method* method, expr_struct* expr);
void fillTable(Clazz* clazz, Method* method, if_part_stmt_struct * if_branch_stmt);
void fillTable(class_declaration_struct* class_decl);

void transformTree(program_struct* program);
void transform(expr_struct* expr);
void transform(stmt_struct* stmt);
void transform(stmt_list_struct* stmt_list);
void transform(if_stmt_struct* stmt);
void transform(program_item_struct* item);
void transform(def_method_stmt_struct* def_method);
void transform(class_declaration_struct* cls);

template <typename Container, typename T>
bool contains(const Container& c, T const& value)
{
	return std::find(c.begin(), c.end(), value) != c.end();
}

int count_exprs(expr_list_struct* params);