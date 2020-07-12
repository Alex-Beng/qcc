#ifndef IRLISTENER_H
#define IRLISTENER_H

#include "headers.h"

#include "generated/C0BaseListener.h"

#include "SymTable.h"
#include "IR.h"
#include "OC.h"


class IRListener : public C0BaseListener {
public:
	SymbolTable sym_table;
	IR ir;

	// 当前所在的func, ""为global
	// 在函数定义中
	std::string curr_func;
	bool in_func;
	
	// 每一节点临时变量类型和名字
	antlr4::tree::ParseTreeProperty<int> temp_cls;
	antlr4::tree::ParseTreeProperty<std::string> temp_var;

	// 临时变量为array时的idx
	antlr4::tree::ParseTreeProperty<std::string> temp_idx;

	// if语句用到的label
	antlr4::tree::ParseTreeProperty<std::vector<std::string>> if_labels;

	// while语句用到的label
	antlr4::tree::ParseTreeProperty<std::vector<std::string>> while_labels;

	// for语句用到的label
	antlr4::tree::ParseTreeProperty<std::vector<std::string>> for_labels;

	// for语句step的赋值语句
	antlr4::tree::ParseTreeProperty<IRCode> for_step_ass;

public:
	IRListener() {
		curr_func = "";
		in_func = false;

		sym_table.addSym("", "true", CLS_INT, TYPE_CONST, 1, 0);
		sym_table.addSym("", "false", CLS_INT, TYPE_CONST, 0, 0);

		head_addr = MIPS::data_origin;
	}
	
    void enterFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/);
    void exitFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/);
	
	void enterDefConst(C0Parser::DefConstContext * /*ctx*/);

	void enterDefVar(C0Parser::DefVarContext * /*ctx*/);
	
	void enterDefArray(C0Parser::DefArrayContext * /*ctx*/);


	void exitPrimaryExpr(C0Parser::PrimaryExprContext * /*ctx*/);

  	void exitSubExpr(C0Parser::SubExprContext * /*ctx*/);

  	void exitVariableExpr(C0Parser::VariableExprContext * /*ctx*/);

	void exitLiteralExpr(C0Parser::LiteralExprContext * /*ctx*/);

	void exitArefExpr(C0Parser::ArefExprContext * /*ctx*/);

	void exitPrefixExpr(C0Parser::PrefixExprContext * /*ctx*/);
	  
	void exitBinaryExpr(C0Parser::BinaryExprContext * /*ctx*/);

  	void exitAssignExpr(C0Parser::AssignExprContext * /*ctx*/);

	void enterIfStmt(C0Parser::IfStmtContext * /*ctx*/);
  	void exitIfStmt(C0Parser::IfStmtContext * /*ctx*/);

  	void exitIfCondition(C0Parser::IfConditionContext * /*ctx*/);

	void enterElseStatement(C0Parser::ElseStatementContext * /*ctx*/);

  	void enterWhileStmt(C0Parser::WhileStmtContext * /*ctx*/);
  	void exitWhileStmt(C0Parser::WhileStmtContext * /*ctx*/);

	void exitWhileCondition(C0Parser::WhileConditionContext * /*ctx*/);

  	void enterForCondition(C0Parser::ForConditionContext * /*ctx*/);
   	void exitForCondition(C0Parser::ForConditionContext * /*ctx*/);

	void enterForStmt(C0Parser::ForStmtContext * /*ctx*/);
	void exitForStmt(C0Parser::ForStmtContext * /*ctx*/);

	void exitForStep(C0Parser::ForStepContext * /*ctx*/);

	void enterFuncallExpr(C0Parser::FuncallExprContext * /*ctx*/);
	void exitFuncallExpr(C0Parser::FuncallExprContext * /*ctx*/);

	void exitPrintfExpr(C0Parser::PrintfExprContext * /*ctx*/);

	void enterScanfExpr(C0Parser::ScanfExprContext * /*ctx*/);

	void exitReturnStmt(C0Parser::ReturnStmtContext * /*ctx*/);

	void enterBreakStmt(C0Parser::BreakStmtContext * /*ctx*/);
  	
	void enterContinueStmt(C0Parser::ContinueStmtContext * /*ctx*/);


	// ↓↓↓目标代码生成↓↓↓
public:
	// 生成的目标代码
	std::vector<std::string> mips_codes;

	// 起始地址
	int head_addr;

	// func frame size
	std::map<std::string, int> func_frame_size;

	// run info
	RegRuntime run_info;

	// func call 用到的栈
	struct ParaInfo { 
		int offset; 
		std::string func_name; 
	};
	std::stack<ParaInfo> ParaInfoStack;


public:
	// 直接gen
	void MipsGen(std::string out_file);

	void MipsFuncBegin(IRCode&);
	void MipsLabel(IRCode&);
	void MipsExit(IRCode&);
	void MipsGoto(IRCode&);
	void MipsPush(IRCode&, std::vector<IRCode>::iterator&);
	void MipsCall(IRCode&);
	void MipsReturn(IRCode&);
	void MipsCmp(IRCode&, std::vector<IRCode>::iterator&);
	void MipsCalc(IRCode&, std::vector<IRCode>::iterator&);
	void MipsSaveArr(IRCode&, std::vector<IRCode>::iterator&);
	void MipsReadArr(IRCode&, std::vector<IRCode>::iterator&);
	void MipsScanf(IRCode&);
	void MipsPrintf(IRCode&, std::vector<IRCode>::iterator&);

	std::string mips_appointReg(std::string &var) {
		// 1. 找从未用过的reg
		// 2. 未使用的reg
		// 3. 最长时间不用的reg

		// 1.
		auto stop_pos = run_info.clk_ptr;
		do {
			auto i = run_info.clk_ptr;
			if (run_info.reg_content[i] == "") {
				run_info.modifyReg(var, i);
				return idx2reg(i);
			}
		} while (run_info.clk_ptr != stop_pos);

		// 2. 
		std::set<int> unuse_reg;
		stop_pos = run_info.clk_ptr;
		do {
			auto i = run_info.clk_ptr;
			if (run_info.reg_used[i] == false) {
				auto s = run_info.reg_content[i];
				
				// 临时变量
				if (s[0] == '#') {
					run_info.modifyReg(var, i);
					return idx2reg(i);
				}
				unuse_reg.insert(i);
			}
		} while(run_info.clk_ptr != stop_pos);
		if (!unuse_reg.empty()) {
			auto i = *unuse_reg.begin();
			run_info.modifyReg(var, i);
			return idx2reg(i);
		}

		// 3.
		while (run_info.clk_used[run_info.clk_ptr] != false) {
			if (run_info.clk_used[run_info.clk_ptr]) {
				run_info.clk_used[run_info.clk_ptr] = false;
			}
			run_info.clk_ptr = run_info.nextIdx(run_info.clk_ptr);
		}
		auto i = run_info.clk_ptr;
		auto t_con = run_info.reg_content[i];
		auto reg = idx2reg(i);
		std::stringstream ss;
		if (run_info.sym_tab.count(t_con) > 0) {
			// stack var
			VarInfo t = run_info.sym_tab[t_con];
			auto addr = t.addr;
			if (t.cls == CLS_CHAR) {
				ss<<MIPS::SB;
			}
			else {
				ss<<MIPS::SW;
			}
			ss<<" "<<reg<<" -"<<addr<<" ("<<MIPS::SP<<")";
		}
		else {
			assert(sym_table.global_symbols.count(t_con) > 0);
			VarInfo t = sym_table.global_symbols[t_con];
			auto addr = t.addr;
			if (t.cls == CLS_CHAR) {
				ss<<MIPS::SB;
			}
			else {
				ss<<MIPS::SW;
			}
			ss<<" "<<reg<<" "<<mark2gvar(t_con);
		}
		mips_codes.push_back(ss.str());

		run_info.modifyReg(var, i);
		return reg;
	}

	// 获得curr_func的栈帧大小
	int mips_getFrameSize() {
		if (curr_func == "main") {
			return func_frame_size[curr_func];
		}
		else {
			return func_frame_size[curr_func] + 4*(17 + 1);
		}
	}

	bool mips_isLiteral(std::string opr, int& value) {
		if (opr[0] == '\'') {
			value = opr[1];
			return true;
		}
		int t = 0;
		try {
			t = std::stoi(opr);
		}
		catch (const std::exception&) {
			return false;
		}
		value = t;
		return true;
	}

	std::string mips_seekReg(std::string value, bool fetch_to_reg) {
		auto t_reg = mark2reg(value);
		if (t_reg != "0") {
			run_info.reg_used[reg2idx(t_reg)] = true;
			return t_reg;
		}

		auto use_reg = mips_appointReg(value);

		if (!fetch_to_reg) {
			return use_reg;
		}

		std::stringstream ss;
		if (run_info.sym_tab.count(value) > 0) {
			// in stack
			VarInfo t = run_info.sym_tab[value];
			if (t.cls == CLS_CHAR) {
				ss<<MIPS::LBU;
			}
			else {
				ss<<MIPS::LW;
			}
			ss<<" "<<use_reg<<" -"<<t.addr<<" ("<<MIPS::SP<<")";
		}
		else {
			assert(sym_table.global_symbols.count(value)>0);
			VarInfo t = sym_table.global_symbols[value];
			if (t.cls == CLS_CHAR) {
				ss<<MIPS::LBU;
			}
			else {
				ss<<MIPS::LW;
			}
			ss<<" "<<use_reg<<" "<<mark2gvar(value);
		}
		mips_codes.push_back(ss.str());

		return use_reg;
	}

	void mips_checkRegUse(std::string opr, std::string reg, std::vector<IRCode>::iterator o) {
		if (opr[0] != '#') {
			auto idx = reg2idx(reg);
			run_info.reg_used[idx] = false;
			run_info.reg_content[idx] = "";
			return ;
		}
		auto i = o+1;
		for (; i!=ir.ir_codes.end(); i++) {
			if (i->op == OP::EXIT || i->op == OP::FUNC_END || i->rst == opr) {
				auto idx = reg2idx(reg);
				run_info.reg_used[idx] = false;
				run_info.reg_content[idx] = "";
				return ;
			}
			if (i->num1 == opr || i->num2 == opr
			|| i->op == OP::SCAN && i->num1 == opr) {
				return ;
			}
		}
		if (i == ir.ir_codes.end()) {
			auto idx = reg2idx(reg);
			run_info.reg_used[idx] = false;
		}
	}

	void mips_writeRam(std::string var, std::string reg) {
		if (var[0] != '#') {
			std::stringstream ss;
			if (run_info.sym_tab.count(var) > 0) {
				VarInfo t = run_info.sym_tab[var];
				ss << (t.cls==CLS_CHAR? MIPS::SB : MIPS::SW) << " " << reg << " -"<<t.addr<< " (" <<MIPS::SP<<")";
			}
			else {
				assert(sym_table.global_symbols.count(var) > 0);
				VarInfo t = sym_table.global_symbols[var];
				ss << (t.cls == CLS_CHAR? MIPS::SB : MIPS::SW) << " " << reg << " " << mark2gvar(var);
			}
			mips_codes.push_back(ss.str());
			run_info.reg_content[reg2idx(reg)] = "";
			run_info.reg_used[reg2idx(reg)] = false;
		}
	}

	// 2 funcs
	std::string idx2reg(int i) {
		std::string ret;
		if (i<8) {
			ret = "$t"+std::to_string(i);
		}
		else {
			ret = "$s"+std::to_string(i-8);
		}
		if (ret == "$s8") {
			ret = "$fp";
		}
		return ret;
	}

	int reg2idx(std::string reg) {
		assert(reg.length() >= 3 && *(reg.begin())=='$');
		if (reg[1] == 't')
			return reg[2] - '0';
		else if (reg[1] == 's')
			return reg[2] - '0' + 8;
		else if (reg == "$fp")
			return 17 - 1;

		return -1;
	}

	std::string mark2func(std::string& s) {
		return "func_"+s;
	}

	std::string mark2label(std::string& s) {
		assert(!s.find("%"));
		return "label"+s.erase(0, 1);
	}

	std::string mark2gvar(std::string& s) {
		assert(sym_table.lookup("", s, false) != NULL);
		return "_"+s;
	}

	std::string mark2string(std::string& s) {
		assert(!s.find("~"));
		return "string_" + s.erase(0, 1);
	}

	std::string mark2reg(std::string& s) {
		for (auto i=0; i<17; i++) {
			if(run_info.reg_content[i] == s) {
				return idx2reg(i);
			}
		}
		return "0";
	}

};


#endif