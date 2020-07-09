#include "SymTable.h"


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

bool SymbolTable::is_global_iden(const std::string& cuff_func, std::string& s) {
    if (s[0] == '#') {
        return false;
    }
    VarInfo* t = lookup(cuff_func, s, true);
    if (t == nullptr) {
        return true;
    }
    else {
        return false;
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
