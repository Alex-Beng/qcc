
// Generated from Calculator.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalculatorParser.
 */
class  CalculatorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalculatorParser.
   */
    virtual antlrcpp::Any visitToSetVar(CalculatorParser::ToSetVarContext *context) = 0;

    virtual antlrcpp::Any visitCalculate(CalculatorParser::CalculateContext *context) = 0;

    virtual antlrcpp::Any visitSetVariable(CalculatorParser::SetVariableContext *context) = 0;

    virtual antlrcpp::Any visitToMultOrDiv(CalculatorParser::ToMultOrDivContext *context) = 0;

    virtual antlrcpp::Any visitPlus(CalculatorParser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitMinus(CalculatorParser::MinusContext *context) = 0;

    virtual antlrcpp::Any visitMultiplication(CalculatorParser::MultiplicationContext *context) = 0;

    virtual antlrcpp::Any visitDivision(CalculatorParser::DivisionContext *context) = 0;

    virtual antlrcpp::Any visitToPow(CalculatorParser::ToPowContext *context) = 0;

    virtual antlrcpp::Any visitPower(CalculatorParser::PowerContext *context) = 0;

    virtual antlrcpp::Any visitChangeSign(CalculatorParser::ChangeSignContext *context) = 0;

    virtual antlrcpp::Any visitToAtom(CalculatorParser::ToAtomContext *context) = 0;

    virtual antlrcpp::Any visitConstantPI(CalculatorParser::ConstantPIContext *context) = 0;

    virtual antlrcpp::Any visitConstantE(CalculatorParser::ConstantEContext *context) = 0;

    virtual antlrcpp::Any visitDouble(CalculatorParser::DoubleContext *context) = 0;

    virtual antlrcpp::Any visitInt(CalculatorParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitVariable(CalculatorParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitBraces(CalculatorParser::BracesContext *context) = 0;


};

}  // namespace antlrcpptest
