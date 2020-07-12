#ifndef SYMTABLE_H
#define SYMTABLE_H

#include "headers.h"

enum {CLS_INT, CLS_CHAR, CLS_VOID, CLS_STR};
enum {TYPE_CONST, TYPE_VAR, TYPE_ARRAY, TYPE_FUNC, TYPE_PARAM};

// 变量信息
struct VarInfo {
	int cls;		// class: int char void
	int type;		// type: const var array fun param
	int length;		// const->value []->length, func->num_of_params
	int def_line;	// Line No.
	int addr = -1;		// addr （用于RAM分配空间
	std::string name;
};

//　符号表 
class SymbolTable {
public:
    std::map<std::string, VarInfo> global_symbols;
	std::map<std::string, std::map<std::string, VarInfo>> func_symbols;
	std::map<std::string, int> str_symbols;
	int str_sym_counter;
public: 
	SymbolTable() {
		str_sym_counter = 0;
	}
    VarInfo* lookup(const std::string &curr_func, const std::string &name, bool local);
	std::map<std::string, VarInfo> lookup_func(const std::string &func_name);
	VarInfo* lookup_para(std::map<std::string, VarInfo> &func_symtab, int place);

	void addSym(std::string curFunc, std::string namae, int _class, int type, int length, int line);
	int addStr(std::string &s);

	void printSym(std::ofstream&o);
};



#endif