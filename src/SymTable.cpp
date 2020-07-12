#include "SymTable.h"

#define SYM_CLS(x)	((x.cls == CLS_INT ? "int" : x.cls == CLS_CHAR ? "char" : "void"))
#define SYM_TYP(x)	((x.type == TYPE_CONST ? "const" : \
						x.type == TYPE_VAR ? "var" : \
						x.type == TYPE_ARRAY ? "array" : \
						x.type == TYPE_FUNC ? "func" : "para"))


VarInfo* SymbolTable::lookup(const std::string &curr_func, const std::string &name, bool only_local) {
    // local first
    if (curr_func != "") {
        assert(this->func_symbols.count(curr_func) > 0);
        if (this->func_symbols[curr_func].count(name) > 0) {
            return &this->func_symbols[curr_func][name];
        }
        if (only_local) {// 
            if (curr_func == name) {
                return &global_symbols[name];
            }
            else {
                return nullptr;
            }
        }
    }
    // global
    if (this->global_symbols.count(name) > 0) {
        return &global_symbols[name];
    }
    else {
        return nullptr;
    }
}

std::map<std::string, VarInfo> SymbolTable::lookup_func(const std::string &func_name) {
	assert(this->func_symbols.count(func_name) == 1);
	return this->func_symbols[func_name];
}

VarInfo* SymbolTable::lookup_para(std::map<std::string, VarInfo> &t_func_sym, int place) {
    for (auto iter=t_func_sym.begin(); iter!=t_func_sym.end(); iter++) {
        if (iter->second.length==place && iter->second.type==TYPE_PARAM) {
            return &(iter->second);
        }
    }
    return nullptr;
}

void SymbolTable::addSym(std::string curr_func, std::string name, int cls, int type, int length, int line) {
    VarInfo temp;
    temp.name = name;
    temp.cls = cls;
    temp.type = type;
    temp.length = length;
    temp.def_line = line;
    if (curr_func == "") {
        assert(this->global_symbols.count(name) == 0);
        this->global_symbols.insert(std::pair<std::string, VarInfo>(name, temp));
        if (type == TYPE_FUNC) {
            std::map<std::string, VarInfo> t_m;
            func_symbols.insert(std::pair<std::string, std::map<std::string, VarInfo>>(name, t_m));
        }
    }
    else {
        assert(this->func_symbols.count(curr_func) > 0);
        assert(this->func_symbols[curr_func].count(name) == 0);
        assert(curr_func != name);
        this->func_symbols[curr_func].insert(std::pair<std::string, VarInfo>(name, temp));
    }
}

int SymbolTable::addStr(std::string &s) {
	if (str_symbols.count(s) == 0) {
		str_symbols.insert(std::pair<std::string, int>(s, ++str_sym_counter));
		return str_sym_counter;
	}
	return str_symbols[s];
}

void SymbolTable::printSym(std::ofstream&o) {
	for (auto iter = str_symbols.begin(); iter != str_symbols.end(); iter++) {
		o << "string_" << std::to_string(iter->second)
			<< " : .asciiz " << iter->first << '"' << std::endl;
	}
	o << std::right;
	o << "global:" << std::endl;
	o << std::setw(14) << "name" << '|' <<
		std::setw(5) << "class" << '|' <<
		std::setw(6) << "type" << '|' <<
		std::setw(5) << "len" << '|' <<
		std::setw(5) << "def" << '|' <<
		std::setw(11) << "addr" << std::endl;
	for (auto iter = global_symbols.begin(); iter != global_symbols.end(); iter++) {
		o << std::dec << std::setw(14) << iter->first << '|' <<
			std::setw(5) << SYM_CLS(iter->second) << '|' <<
			std::setw(6) << SYM_TYP(iter->second) << '|' <<
			std::dec << std::setw(5) << iter->second.length << '|' <<
			std::dec << std::setw(5) << iter->second.def_line << '|'
			 << std::setw(11) << std::hex << iter->second.addr << '|'  << std::endl;
	}
	o << std::endl;
	for (auto iter = func_symbols.begin(); iter != func_symbols.end(); iter++) {
		if (iter->first != "main")
		{
			o << iter->first << ':' << std::endl;
			o << std::dec << std::setw(14) << "name" << '|' <<
				std::setw(5) << "class" << '|' <<
				std::setw(6) << "type" << '|' <<
				std::setw(5) << "len" << '|' <<
				std::setw(5) << "def" << '|' <<
				std::setw(11) << "addr" << std::endl;
			for (auto it2 = iter->second.begin(); it2 != iter->second.end(); it2++)
				o << std::setw(14) << it2->first << '|' <<
				std::setw(5) << SYM_CLS(it2->second) << '|' <<
				std::setw(6) << SYM_TYP(it2->second) << '|' <<
				std::dec << std::setw(5) << it2->second.length << '|' <<
				std::dec << std::setw(5) << it2->second.def_line << '|'
				  << std::setw(11) << std::hex << it2->second.addr << '|'  << std::endl;

		}
	}
	o << std::endl << "main:" << std::endl;
	o << std::dec << std::setw(14) << "name" << '|' <<
		std::setw(5) << "class" << '|' <<
		std::setw(6) << "type" << '|' <<
		std::setw(5) << "len" << '|' <<
		std::setw(5) << "def" << '|' <<
		std::setw(11) << "addr" << std::endl;
	for (auto it2 = func_symbols["main"].begin(); it2 != func_symbols["main"].end(); it2++)
		o << std::setw(14) << it2->first << '|' <<
		std::setw(5) << SYM_CLS(it2->second) << '|' <<
		std::setw(6) << SYM_TYP(it2->second) << '|' <<
		std::dec << std::setw(5) << it2->second.length << '|' <<
		std::dec << std::setw(5) << it2->second.def_line << '|'
		  << std::setw(11) << std::hex << it2->second.addr << '|' << std::endl;
}

