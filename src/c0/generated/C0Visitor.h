
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

    virtual antlrcpp::Any visitDecl(C0Parser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVar_decl(C0Parser::Var_declContext *context) = 0;

    virtual antlrcpp::Any visitType_spec(C0Parser::Type_specContext *context) = 0;

    virtual antlrcpp::Any visitFun_decl(C0Parser::Fun_declContext *context) = 0;

    virtual antlrcpp::Any visitParams(C0Parser::ParamsContext *context) = 0;

    virtual antlrcpp::Any visitParam(C0Parser::ParamContext *context) = 0;

    virtual antlrcpp::Any visitStmt(C0Parser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitExpr_stmt(C0Parser::Expr_stmtContext *context) = 0;

    virtual antlrcpp::Any visitWhile_stmt(C0Parser::While_stmtContext *context) = 0;

    virtual antlrcpp::Any visitCompound_stmt(C0Parser::Compound_stmtContext *context) = 0;

    virtual antlrcpp::Any visitLocal_decl(C0Parser::Local_declContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(C0Parser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(C0Parser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitBreak_stmt(C0Parser::Break_stmtContext *context) = 0;

    virtual antlrcpp::Any visitContinue_stmt(C0Parser::Continue_stmtContext *context) = 0;

    virtual antlrcpp::Any visitExpr(C0Parser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitArgs(C0Parser::ArgsContext *context) = 0;


};

