#include "IRListener.h"
#include "IR.h"

std::string IR::gen_temp(std::string &curFunc, int &lc, int cls, SymbolTable& st) {
    assert(cls == cls_int || cls == cls_char);
    auto name = OP::TEMP_VAR_HEAD + std::to_string(++temp_var_cnt);
    st.addSym(currFunc, name, cls, type_var, 0, lc);
}


std::string IR::gen_label() {
    return OP::LABEL_HEAD + std::to_string(++label_cnt);
}

void IR::addIMC(std::string rst, const std::string &op, std::string op1, std::string op2) {
    IRCode t;
    t.num1 = op1;
	t.num1 = op1;
	t.num2 = op2;
	t.op = op;
	t.rst = rst;
    this->ir_codes.push_back(t);
}

void printIMC(std::ofstream&o) {
	for(auto iter = ir_codes.begin(); iter!= ir_codes.end(); iter++) {
		o << std::right;
		o << std::setw(14) << iter->rst << "  " << std::setw(10) << iter->op << "  "
			<< std::setw(14) << iter->num1 << "  " << std::setw(14) << iter->num2 << std::endl;
	}

}
