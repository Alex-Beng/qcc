
// Generated from Calculator.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CalculatorParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalculatorParser.
 */
class  CalculatorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalculatorParser.
   */
    virtual antlrcpp::Any visitProg(CalculatorParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitPrintExpr(CalculatorParser::PrintExprContext *context) = 0;

    virtual antlrcpp::Any visitAssign(CalculatorParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitBlank(CalculatorParser::BlankContext *context) = 0;

    virtual antlrcpp::Any visitParens(CalculatorParser::ParensContext *context) = 0;

    virtual antlrcpp::Any visitMulDiv(CalculatorParser::MulDivContext *context) = 0;

    virtual antlrcpp::Any visitAddSub(CalculatorParser::AddSubContext *context) = 0;

    virtual antlrcpp::Any visitId(CalculatorParser::IdContext *context) = 0;

    virtual antlrcpp::Any visitInt(CalculatorParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitPower(CalculatorParser::PowerContext *context) = 0;


};

