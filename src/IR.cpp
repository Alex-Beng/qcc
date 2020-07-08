#include "IRListener.h"
#include "IR.h"

std::string IR::gen_temp(std::string &curFunc, int lc, int cls, SymbolTable& st) {
    assert(cls == CLS_INT || cls == CLS_CHAR);
    auto name = OP::TEMP_VAR_HEAD + std::to_string(++temp_var_cnt);
    st.addSym(curFunc, name, cls, TYPE_VAR, 0, lc);
	return name;
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

IRCode IR::popIMR() {
	auto back_ir = this->ir_codes[ir_codes.size()-1];
	this->ir_codes.pop_back();
	
	return back_ir;
}

void IR::printIMC(std::ofstream&o) {
	for(auto iter = ir_codes.begin(); iter!= ir_codes.end(); iter++) {
		o << std::right;
		o << std::setw(14) << iter->rst << "  " << std::setw(10) << iter->op << "  "
			<< std::setw(14) << iter->num1 << "  " << std::setw(14) << iter->num2 << std::endl;
	}

}

