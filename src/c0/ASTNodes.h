#pragma once

#include <antlr4-runtime/antlr4-runtime.h>

#include "generated/C0Lexer.h"
#include "generated/C0Parser.h"


// 对c0生成的tree 每类结点一个类
/*
AST

Node
    ExprNode
        AssignNode
        BinaryOpNode
            LogicalAndNode
            LogicalOrNode
        FuncallNode
        LiteralNode
            IntegerLiteralNode
            StringLiteralNode
            CharLiteralNode
        LHSNode
            ArefNode
            VariableNode
        UnaryOpNode
            PrefixOpNode
            SuffixOpNode
    StmtNode
        BlockNode
        BreakNode
        ContinueNode
        ExprStmtNode
        ForNode
        IfNode
        ReturnNode
        WhileNode
        DefinitionNode
            FunctionDefNode
            VariableDefNode

*/

// as name
class Location {
    int line;
    int column;
public:
    Location(int l, int c) {
        line = l;
        column = c;
    }
    Location(antlr4::Token* token) {
        line = token->getLine();
        column = token.getCharPositionInLine();
    }
    Location(antlr4::ParserRuleContext* ctx) {
        Location(ctx->start);
    }
    Location(antlr4::tree::TerminalNode* node) {
        Location(node->getSymbol());
    }
    int line() {
        return line;
    }
    int column() {
        return column;
    }
    std::string toString() {
        return "line " + std::to_string(line) + ":" + std::to_string(column) + " ";
    }
};


class Node {
    Node() {
        isOutputIrrelevant = false;// 为了output-irrelevant优化
    }
protected:
    bool isOutputIrrelevant;
    bool outputIrrelevant() {
        return isOutputIrrelevant;
    }
    void setOutputIrrelevant(bool outputIrrelevant) {
        isOutputIrrelevant = outputIrrelevant;
    }
    virtual Location location();
};

class ExprNode : public Node {
    bool isAssignable;
public:
    ExprNode() {
        isAssignable = false;
    }

};