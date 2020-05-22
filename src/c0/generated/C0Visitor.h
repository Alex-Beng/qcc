
// Generated from C0.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "C0Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by C0Parser.
 */
class  C0Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by C0Parser.
   */
    virtual antlrcpp::Any visitProgram(C0Parser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(C0Parser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVar_declaration(C0Parser::Var_declarationContext *context) = 0;

    virtual antlrcpp::Any visitTypeID(C0Parser::TypeIDContext *context) = 0;

    virtual antlrcpp::Any visitFun_declaration(C0Parser::Fun_declarationContext *context) = 0;

    virtual antlrcpp::Any visitParams(C0Parser::ParamsContext *context) = 0;

    virtual antlrcpp::Any visitParam(C0Parser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitStatement(C0Parser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitExpression_statement(C0Parser::Expression_statementContext *context) = 0;

    virtual antlrcpp::Any visitScanf_statement(C0Parser::Scanf_statementContext *context) = 0;

    virtual antlrcpp::Any visitPrintf_statement(C0Parser::Printf_statementContext *context) = 0;

    virtual antlrcpp::Any visitCompound_statement(C0Parser::Compound_statementContext *context) = 0;

    virtual antlrcpp::Any visitLocal_declaration(C0Parser::Local_declarationContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(C0Parser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(C0Parser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitFor_statement(C0Parser::For_statementContext *context) = 0;

    virtual antlrcpp::Any visitReturn_statement(C0Parser::Return_statementContext *context) = 0;

    virtual antlrcpp::Any visitBreak_statement(C0Parser::Break_statementContext *context) = 0;

    virtual antlrcpp::Any visitContinue_statement(C0Parser::Continue_statementContext *context) = 0;

    virtual antlrcpp::Any visitExpression(C0Parser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgs(C0Parser::ArgsContext *context) = 0;


};

