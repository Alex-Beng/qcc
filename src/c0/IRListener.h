#ifndef IRLISTENER_H
#define IRLISTENER_H

#include "common_headers.h"

#include "generated/C0BaseListener.h"

#include "SymTable.h"
#include "IR.h"


class IRListener : public C0BaseListener {
	SymbolTable sym_table;
	// 当前所在的func, ""为global
	std::string curr_func;
	
public:
	IRListener() {
		curr_func = "";
	}

    void enterFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/);
    void exitFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/);

  	void enterParameter(C0Parser::ParameterContext * /*ctx*/);
  	void exitParameter(C0Parser::ParameterContext * /*ctx*/);
};


#endif