
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
    virtual antlrcpp::Any visitCompilationUnit(C0Parser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDefinition(C0Parser::FunctionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitDefVar(C0Parser::DefVarContext *context) = 0;

    virtual antlrcpp::Any visitDefConst(C0Parser::DefConstContext *context) = 0;

    virtual antlrcpp::Any visitDefArray(C0Parser::DefArrayContext *context) = 0;

    virtual antlrcpp::Any visitParameter(C0Parser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeType(C0Parser::TypeTypeContext *context) = 0;

    virtual antlrcpp::Any visitBlock(C0Parser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitBlockStmt(C0Parser::BlockStmtContext *context) = 0;

    virtual antlrcpp::Any visitVarDefStmt(C0Parser::VarDefStmtContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(C0Parser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitForStmt(C0Parser::ForStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(C0Parser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(C0Parser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitBreakStmt(C0Parser::BreakStmtContext *context) = 0;

    virtual antlrcpp::Any visitContinueStmt(C0Parser::ContinueStmtContext *context) = 0;

    virtual antlrcpp::Any visitExprStmt(C0Parser::ExprStmtContext *context) = 0;

    virtual antlrcpp::Any visitBlankStmt(C0Parser::BlankStmtContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(C0Parser::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitLogicalOrExpr(C0Parser::LogicalOrExprContext *context) = 0;

    virtual antlrcpp::Any visitPrefixExpr(C0Parser::PrefixExprContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpr(C0Parser::PrimaryExprContext *context) = 0;

    virtual antlrcpp::Any visitLogicalAndExpr(C0Parser::LogicalAndExprContext *context) = 0;

    virtual antlrcpp::Any visitFuncallExpr(C0Parser::FuncallExprContext *context) = 0;

    virtual antlrcpp::Any visitArefExpr(C0Parser::ArefExprContext *context) = 0;

    virtual antlrcpp::Any visitSuffixExpr(C0Parser::SuffixExprContext *context) = 0;

    virtual antlrcpp::Any visitBinaryExpr(C0Parser::BinaryExprContext *context) = 0;

    virtual antlrcpp::Any visitAssignExpr(C0Parser::AssignExprContext *context) = 0;

    virtual antlrcpp::Any visitSubExpr(C0Parser::SubExprContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(C0Parser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitLiteralExpr(C0Parser::LiteralExprContext *context) = 0;

    virtual antlrcpp::Any visitDecIntegerConst(C0Parser::DecIntegerConstContext *context) = 0;

    virtual antlrcpp::Any visitCharConst(C0Parser::CharConstContext *context) = 0;

    virtual antlrcpp::Any visitStringConst(C0Parser::StringConstContext *context) = 0;


};

