#pragma once 

#include <antlr4-runtime/antlr4-runtime.h>

#include "generated/C0Lexer.h"
#include "generated/C0Parser.h"

#include "AST.h"

class ASTBuilder : public C0BaseListener {
    antlr4::tree::ParseTreeProperty<antlrcpp::Any> map;
    AST ast;
    
public:
    AST getAST();
    // 只重写出结点
  void exitCompilationUnit(C0Parser::CompilationUnitContext * /*ctx*/) { }

  void exitFunctionDefinition(C0Parser::FunctionDefinitionContext * /*ctx*/) { }
  
  void exitVariableDefinition(C0Parser::VariableDefinitionContext * /*ctx*/)  { }
  
  void exitParameter(C0Parser::ParameterContext * /*ctx*/)  { }
  
  void exitTypeType(C0Parser::TypeTypeContext * /*ctx*/)  { }

  void exitBlock(C0Parser::BlockContext * /*ctx*/)  { }

  void exitBlockStmt(C0Parser::BlockStmtContext * /*ctx*/)  { }

  void exitVarDefStmt(C0Parser::VarDefStmtContext * /*ctx*/)  { }

  void exitIfStmt(C0Parser::IfStmtContext * /*ctx*/)  { }

  void exitForStmt(C0Parser::ForStmtContext * /*ctx*/)  { }

  void exitWhileStmt(C0Parser::WhileStmtContext * /*ctx*/)  { }

  void exitReturnStmt(C0Parser::ReturnStmtContext * /*ctx*/)  { }

  void exitBreakStmt(C0Parser::BreakStmtContext * /*ctx*/)  { }

  void exitContinueStmt(C0Parser::ContinueStmtContext * /*ctx*/)  { }

  void exitExprStmt(C0Parser::ExprStmtContext * /*ctx*/)  { }

  void exitBlankStmt(C0Parser::BlankStmtContext * /*ctx*/)  { }

  void exitExpressionList(C0Parser::ExpressionListContext * /*ctx*/)  { }

  void exitLogicalOrExpr(C0Parser::LogicalOrExprContext * /*ctx*/)  { }

  void exitPrefixExpr(C0Parser::PrefixExprContext * /*ctx*/)  { }

  void exitPrimaryExpr(C0Parser::PrimaryExprContext * /*ctx*/)  { }

  void exitLogicalAndExpr(C0Parser::LogicalAndExprContext * /*ctx*/)  { }

  void exitFuncallExpr(C0Parser::FuncallExprContext * /*ctx*/)  { }

  void exitArefExpr(C0Parser::ArefExprContext * /*ctx*/)  { }

  void exitSuffixExpr(C0Parser::SuffixExprContext * /*ctx*/)  { }

  void exitBinaryExpr(C0Parser::BinaryExprContext * /*ctx*/)  { }

  void exitAssignExpr(C0Parser::AssignExprContext * /*ctx*/)  { }

  void exitSubExpr(C0Parser::SubExprContext * /*ctx*/)  { }

  void exitVariableExpr(C0Parser::VariableExprContext * /*ctx*/)  { }

  void exitLiteralExpr(C0Parser::LiteralExprContext * /*ctx*/)  { }

  void exitDecIntegerConst(C0Parser::DecIntegerConstContext * /*ctx*/)  { }

  void exitCharConst(C0Parser::CharConstContext * /*ctx*/)  { }

  void exitStringConst(C0Parser::StringConstContext * /*ctx*/)  { }

  void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/)  { }
private:
    StmtNode getStmt(C0Parser::StatementContext ctx) {
        if (ctx == null)
            return null;
        else
            return (StmtNode)map.get(ctx);
    }

    ExprNode getExpr(C0Parser::ExpressionContext ctx) {
        if (ctx == null)
            return null;
        else
            return (ExprNode)map.get(ctx);
    }
};