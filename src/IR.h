/**
 * 创建IR
*/
#ifndef IR_H
#define IR_H

#include "headers.h"


struct IRCode{
	std::string rst;
	std::string op;
	std::string num1;
	std::string num2;
};

// IR ops
namespace OP {
	constexpr auto ADD = "+";	//x + a  b
	constexpr auto SUB = "-";
	constexpr auto MUL = "*";	// mfhi, mflo
	constexpr auto DIV = "/";	// if *2 /2 use << >>

	constexpr auto EQU = "==";	// stl...
	constexpr auto NEQ = "!=";
	constexpr auto GRT = ">";
	constexpr auto GREQ = ">=";
	constexpr auto LES = "<";
	constexpr auto LESEQ = "<=";

	constexpr auto SAVE_ARR = "[]=";	
	constexpr auto READ_ARR = "=[]";	
	
	constexpr auto SCAN = "scanf";		
	constexpr auto PRINT = "print";		

	constexpr auto PUSH_PARA = "push";	
	constexpr auto CALL = "call";		
	constexpr auto RET = "ret";			
	constexpr auto FUNC_END = "func_end";	
	
	constexpr auto GOTO = "goto";	
	constexpr auto FUNC_BEGIN = "func_begin";	
	constexpr auto LABEL = "label";	
	constexpr auto EXIT = "exit";	

    /* temporary var head, #1, #2, ... */
	constexpr auto TEMP_VAR_HEAD = "#";
	/* string head, ~xxx, ~sakura, ~19260817 */
	constexpr auto STR_HEAD = "~";
	/* label head, %1, %2, ... */
	constexpr auto LABEL_HEAD = "%";

	constexpr auto RETURN_REG = "RET_v0";
}

class IR {
public:
    std::vector<IRCode> ir_codes;

    int temp_var_cnt;
    int label_cnt;
    int str_cnt;
public:
    IR() {
        temp_var_cnt = 0;
        label_cnt = 0;
        str_cnt = 0;
    }

    std::string gen_temp(std::string &curr_func, int lc, int cls, SymbolTable& st);
	std::string gen_label();

	void addIMC(std::string rst, const std::string &op, std::string op1, std::string op2);
	IRCode popIMR();
	void printIMC(std::ofstream&o);
};

#endif