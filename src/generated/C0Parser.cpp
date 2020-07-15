
// Generated from C0.g4 by ANTLR 4.8


#include "C0Listener.h"
#include "C0Visitor.h"

#include "C0Parser.h"


using namespace antlrcpp;
using namespace antlr4;

C0Parser::C0Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

C0Parser::~C0Parser() {
  delete _interpreter;
}

std::string C0Parser::getGrammarFileName() const {
  return "C0.g4";
}

const std::vector<std::string>& C0Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& C0Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

C0Parser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::CompilationUnitContext::EOF() {
  return getToken(C0Parser::EOF, 0);
}

std::vector<C0Parser::VariableDefinitionContext *> C0Parser::CompilationUnitContext::variableDefinition() {
  return getRuleContexts<C0Parser::VariableDefinitionContext>();
}

C0Parser::VariableDefinitionContext* C0Parser::CompilationUnitContext::variableDefinition(size_t i) {
  return getRuleContext<C0Parser::VariableDefinitionContext>(i);
}

std::vector<C0Parser::FunctionDefinitionContext *> C0Parser::CompilationUnitContext::functionDefinition() {
  return getRuleContexts<C0Parser::FunctionDefinitionContext>();
}

C0Parser::FunctionDefinitionContext* C0Parser::CompilationUnitContext::functionDefinition(size_t i) {
  return getRuleContext<C0Parser::FunctionDefinitionContext>(i);
}


size_t C0Parser::CompilationUnitContext::getRuleIndex() const {
  return C0Parser::RuleCompilationUnit;
}

void C0Parser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void C0Parser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any C0Parser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::CompilationUnitContext* C0Parser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, C0Parser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << C0Parser::T__7)
      | (1ULL << C0Parser::T__8)
      | (1ULL << C0Parser::T__9)
      | (1ULL << C0Parser::T__10)
      | (1ULL << C0Parser::T__11))) != 0)) {
      setState(36);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(34);
        variableDefinition();
        break;
      }

      case 2: {
        setState(35);
        functionDefinition();
        break;
      }

      }
      setState(40);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(41);
    match(C0Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

C0Parser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::BlockContext* C0Parser::FunctionDefinitionContext::block() {
  return getRuleContext<C0Parser::BlockContext>(0);
}

C0Parser::TypeTypeContext* C0Parser::FunctionDefinitionContext::typeType() {
  return getRuleContext<C0Parser::TypeTypeContext>(0);
}

tree::TerminalNode* C0Parser::FunctionDefinitionContext::Identifier() {
  return getToken(C0Parser::Identifier, 0);
}

std::vector<C0Parser::ParameterContext *> C0Parser::FunctionDefinitionContext::parameter() {
  return getRuleContexts<C0Parser::ParameterContext>();
}

C0Parser::ParameterContext* C0Parser::FunctionDefinitionContext::parameter(size_t i) {
  return getRuleContext<C0Parser::ParameterContext>(i);
}


size_t C0Parser::FunctionDefinitionContext::getRuleIndex() const {
  return C0Parser::RuleFunctionDefinition;
}

void C0Parser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void C0Parser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any C0Parser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::FunctionDefinitionContext* C0Parser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 2, C0Parser::RuleFunctionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    dynamic_cast<FunctionDefinitionContext *>(_localctx)->ret = typeType();
    setState(44);
    dynamic_cast<FunctionDefinitionContext *>(_localctx)->name = match(C0Parser::Identifier);
    setState(45);
    match(C0Parser::T__0);
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << C0Parser::T__7)
      | (1ULL << C0Parser::T__8)
      | (1ULL << C0Parser::T__9)
      | (1ULL << C0Parser::T__10)
      | (1ULL << C0Parser::T__11))) != 0)) {
      setState(46);
      parameter();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == C0Parser::T__1) {
        setState(47);
        match(C0Parser::T__1);
        setState(48);
        parameter();
        setState(53);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(56);
    match(C0Parser::T__2);
    setState(57);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDefinitionContext ------------------------------------------------------------------

C0Parser::VariableDefinitionContext::VariableDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C0Parser::VariableDefinitionContext::getRuleIndex() const {
  return C0Parser::RuleVariableDefinition;
}

void C0Parser::VariableDefinitionContext::copyFrom(VariableDefinitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefVarContext ------------------------------------------------------------------

C0Parser::TypeTypeContext* C0Parser::DefVarContext::typeType() {
  return getRuleContext<C0Parser::TypeTypeContext>(0);
}

std::vector<tree::TerminalNode *> C0Parser::DefVarContext::Identifier() {
  return getTokens(C0Parser::Identifier);
}

tree::TerminalNode* C0Parser::DefVarContext::Identifier(size_t i) {
  return getToken(C0Parser::Identifier, i);
}

C0Parser::DefVarContext::DefVarContext(VariableDefinitionContext *ctx) { copyFrom(ctx); }

void C0Parser::DefVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefVar(this);
}
void C0Parser::DefVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefVar(this);
}

antlrcpp::Any C0Parser::DefVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitDefVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefConstContext ------------------------------------------------------------------

C0Parser::TypeTypeContext* C0Parser::DefConstContext::typeType() {
  return getRuleContext<C0Parser::TypeTypeContext>(0);
}

tree::TerminalNode* C0Parser::DefConstContext::Identifier() {
  return getToken(C0Parser::Identifier, 0);
}

tree::TerminalNode* C0Parser::DefConstContext::CharLiteral() {
  return getToken(C0Parser::CharLiteral, 0);
}

tree::TerminalNode* C0Parser::DefConstContext::DecimalInteger() {
  return getToken(C0Parser::DecimalInteger, 0);
}

C0Parser::DefConstContext::DefConstContext(VariableDefinitionContext *ctx) { copyFrom(ctx); }

void C0Parser::DefConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefConst(this);
}
void C0Parser::DefConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefConst(this);
}

antlrcpp::Any C0Parser::DefConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitDefConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefArrayContext ------------------------------------------------------------------

C0Parser::TypeTypeContext* C0Parser::DefArrayContext::typeType() {
  return getRuleContext<C0Parser::TypeTypeContext>(0);
}

tree::TerminalNode* C0Parser::DefArrayContext::Identifier() {
  return getToken(C0Parser::Identifier, 0);
}

tree::TerminalNode* C0Parser::DefArrayContext::DecimalInteger() {
  return getToken(C0Parser::DecimalInteger, 0);
}

C0Parser::DefArrayContext::DefArrayContext(VariableDefinitionContext *ctx) { copyFrom(ctx); }

void C0Parser::DefArrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefArray(this);
}
void C0Parser::DefArrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefArray(this);
}

antlrcpp::Any C0Parser::DefArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitDefArray(this);
  else
    return visitor->visitChildren(this);
}
C0Parser::VariableDefinitionContext* C0Parser::variableDefinition() {
  VariableDefinitionContext *_localctx = _tracker.createInstance<VariableDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 4, C0Parser::RuleVariableDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VariableDefinitionContext *>(_tracker.createInstance<C0Parser::DefVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(59);
      typeType();
      setState(60);
      match(C0Parser::Identifier);
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == C0Parser::T__1) {
        setState(61);
        match(C0Parser::T__1);
        setState(62);
        match(C0Parser::Identifier);
        setState(67);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(68);
      match(C0Parser::T__3);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VariableDefinitionContext *>(_tracker.createInstance<C0Parser::DefConstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(70);
      typeType();
      setState(71);
      match(C0Parser::Identifier);
      setState(74);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == C0Parser::T__4) {
        setState(72);
        match(C0Parser::T__4);
        setState(73);
        dynamic_cast<DefConstContext *>(_localctx)->rhs = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == C0Parser::CharLiteral

        || _la == C0Parser::DecimalInteger)) {
          dynamic_cast<DefConstContext *>(_localctx)->rhs = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(76);
      match(C0Parser::T__3);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VariableDefinitionContext *>(_tracker.createInstance<C0Parser::DefArrayContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(78);
      typeType();
      setState(79);
      match(C0Parser::Identifier);
      setState(80);
      match(C0Parser::T__5);
      setState(81);
      match(C0Parser::DecimalInteger);
      setState(82);
      match(C0Parser::T__6);
      setState(83);
      match(C0Parser::T__3);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

C0Parser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::TypeTypeContext* C0Parser::ParameterContext::typeType() {
  return getRuleContext<C0Parser::TypeTypeContext>(0);
}

tree::TerminalNode* C0Parser::ParameterContext::Identifier() {
  return getToken(C0Parser::Identifier, 0);
}


size_t C0Parser::ParameterContext::getRuleIndex() const {
  return C0Parser::RuleParameter;
}

void C0Parser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void C0Parser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


antlrcpp::Any C0Parser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ParameterContext* C0Parser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 6, C0Parser::RuleParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    typeType();
    setState(88);
    match(C0Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeTypeContext ------------------------------------------------------------------

C0Parser::TypeTypeContext::TypeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C0Parser::TypeTypeContext::getRuleIndex() const {
  return C0Parser::RuleTypeType;
}

void C0Parser::TypeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeType(this);
}

void C0Parser::TypeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeType(this);
}


antlrcpp::Any C0Parser::TypeTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitTypeType(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::TypeTypeContext* C0Parser::typeType() {
  TypeTypeContext *_localctx = _tracker.createInstance<TypeTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, C0Parser::RuleTypeType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    dynamic_cast<TypeTypeContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << C0Parser::T__7)
      | (1ULL << C0Parser::T__8)
      | (1ULL << C0Parser::T__9)
      | (1ULL << C0Parser::T__10)
      | (1ULL << C0Parser::T__11))) != 0))) {
      dynamic_cast<TypeTypeContext *>(_localctx)->type = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

C0Parser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C0Parser::StatementContext *> C0Parser::BlockContext::statement() {
  return getRuleContexts<C0Parser::StatementContext>();
}

C0Parser::StatementContext* C0Parser::BlockContext::statement(size_t i) {
  return getRuleContext<C0Parser::StatementContext>(i);
}


size_t C0Parser::BlockContext::getRuleIndex() const {
  return C0Parser::RuleBlock;
}

void C0Parser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void C0Parser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any C0Parser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::BlockContext* C0Parser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 10, C0Parser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(C0Parser::T__12);
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << C0Parser::T__0)
      | (1ULL << C0Parser::T__3)
      | (1ULL << C0Parser::T__7)
      | (1ULL << C0Parser::T__8)
      | (1ULL << C0Parser::T__9)
      | (1ULL << C0Parser::T__10)
      | (1ULL << C0Parser::T__11)
      | (1ULL << C0Parser::T__12)
      | (1ULL << C0Parser::T__14)
      | (1ULL << C0Parser::T__16)
      | (1ULL << C0Parser::T__17)
      | (1ULL << C0Parser::T__18)
      | (1ULL << C0Parser::T__19)
      | (1ULL << C0Parser::T__20)
      | (1ULL << C0Parser::T__21)
      | (1ULL << C0Parser::T__22)
      | (1ULL << C0Parser::T__23)
      | (1ULL << C0Parser::T__24)
      | (1ULL << C0Parser::CharLiteral)
      | (1ULL << C0Parser::StringLiteral)
      | (1ULL << C0Parser::Identifier)
      | (1ULL << C0Parser::DecimalInteger))) != 0)) {
      setState(93);
      statement();
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(99);
    match(C0Parser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

C0Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C0Parser::StatementContext::getRuleIndex() const {
  return C0Parser::RuleStatement;
}

void C0Parser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarDefStmtContext ------------------------------------------------------------------

C0Parser::VariableDefinitionContext* C0Parser::VarDefStmtContext::variableDefinition() {
  return getRuleContext<C0Parser::VariableDefinitionContext>(0);
}

C0Parser::VarDefStmtContext::VarDefStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::VarDefStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDefStmt(this);
}
void C0Parser::VarDefStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDefStmt(this);
}

antlrcpp::Any C0Parser::VarDefStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitVarDefStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForStmtContext ------------------------------------------------------------------

C0Parser::StatementContext* C0Parser::ForStmtContext::statement() {
  return getRuleContext<C0Parser::StatementContext>(0);
}

C0Parser::ExpressionContext* C0Parser::ForStmtContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}

C0Parser::ForConditionContext* C0Parser::ForStmtContext::forCondition() {
  return getRuleContext<C0Parser::ForConditionContext>(0);
}

C0Parser::ForStepContext* C0Parser::ForStmtContext::forStep() {
  return getRuleContext<C0Parser::ForStepContext>(0);
}

C0Parser::ForStmtContext::ForStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::ForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStmt(this);
}
void C0Parser::ForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStmt(this);
}

antlrcpp::Any C0Parser::ForStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitForStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStmtContext ------------------------------------------------------------------

C0Parser::ExpressionContext* C0Parser::ExprStmtContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}

C0Parser::ExprStmtContext::ExprStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::ExprStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprStmt(this);
}
void C0Parser::ExprStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprStmt(this);
}

antlrcpp::Any C0Parser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlankStmtContext ------------------------------------------------------------------

C0Parser::BlankStmtContext::BlankStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::BlankStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlankStmt(this);
}
void C0Parser::BlankStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlankStmt(this);
}

antlrcpp::Any C0Parser::BlankStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitBlankStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

C0Parser::WhileConditionContext* C0Parser::WhileStmtContext::whileCondition() {
  return getRuleContext<C0Parser::WhileConditionContext>(0);
}

C0Parser::WhileStatementContext* C0Parser::WhileStmtContext::whileStatement() {
  return getRuleContext<C0Parser::WhileStatementContext>(0);
}

C0Parser::WhileStmtContext::WhileStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}
void C0Parser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}

antlrcpp::Any C0Parser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

C0Parser::IfConditionContext* C0Parser::IfStmtContext::ifCondition() {
  return getRuleContext<C0Parser::IfConditionContext>(0);
}

C0Parser::IfStatementContext* C0Parser::IfStmtContext::ifStatement() {
  return getRuleContext<C0Parser::IfStatementContext>(0);
}

C0Parser::ElseStatementContext* C0Parser::IfStmtContext::elseStatement() {
  return getRuleContext<C0Parser::ElseStatementContext>(0);
}

C0Parser::IfStmtContext::IfStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}
void C0Parser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}

antlrcpp::Any C0Parser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStmtContext ------------------------------------------------------------------

C0Parser::BlockContext* C0Parser::BlockStmtContext::block() {
  return getRuleContext<C0Parser::BlockContext>(0);
}

C0Parser::BlockStmtContext::BlockStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::BlockStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStmt(this);
}
void C0Parser::BlockStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStmt(this);
}

antlrcpp::Any C0Parser::BlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitBlockStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStmtContext ------------------------------------------------------------------

C0Parser::BreakStmtContext::BreakStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::BreakStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStmt(this);
}
void C0Parser::BreakStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStmt(this);
}

antlrcpp::Any C0Parser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

C0Parser::ExpressionContext* C0Parser::ReturnStmtContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}

C0Parser::ReturnStmtContext::ReturnStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}
void C0Parser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}

antlrcpp::Any C0Parser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueStmtContext ------------------------------------------------------------------

C0Parser::ContinueStmtContext::ContinueStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void C0Parser::ContinueStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinueStmt(this);
}
void C0Parser::ContinueStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinueStmt(this);
}

antlrcpp::Any C0Parser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}
C0Parser::StatementContext* C0Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, C0Parser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C0Parser::T__12: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::BlockStmtContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(101);
        block();
        break;
      }

      case C0Parser::T__7:
      case C0Parser::T__8:
      case C0Parser::T__9:
      case C0Parser::T__10:
      case C0Parser::T__11: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::VarDefStmtContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(102);
        variableDefinition();
        break;
      }

      case C0Parser::T__14: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::IfStmtContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(103);
        match(C0Parser::T__14);
        setState(104);
        match(C0Parser::T__0);
        setState(105);
        ifCondition();
        setState(106);
        match(C0Parser::T__2);
        setState(107);
        ifStatement();
        setState(110);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          setState(108);
          match(C0Parser::T__15);
          setState(109);
          elseStatement();
          break;
        }

        }
        break;
      }

      case C0Parser::T__16: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::ForStmtContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(112);
        match(C0Parser::T__16);
        setState(113);
        match(C0Parser::T__0);
        setState(115);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << C0Parser::T__0)
          | (1ULL << C0Parser::T__21)
          | (1ULL << C0Parser::T__22)
          | (1ULL << C0Parser::T__23)
          | (1ULL << C0Parser::T__24)
          | (1ULL << C0Parser::CharLiteral)
          | (1ULL << C0Parser::StringLiteral)
          | (1ULL << C0Parser::Identifier)
          | (1ULL << C0Parser::DecimalInteger))) != 0)) {
          setState(114);
          expression(0);
        }
        setState(117);
        match(C0Parser::T__3);
        setState(119);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << C0Parser::T__0)
          | (1ULL << C0Parser::T__21)
          | (1ULL << C0Parser::T__22)
          | (1ULL << C0Parser::T__23)
          | (1ULL << C0Parser::T__24)
          | (1ULL << C0Parser::CharLiteral)
          | (1ULL << C0Parser::StringLiteral)
          | (1ULL << C0Parser::Identifier)
          | (1ULL << C0Parser::DecimalInteger))) != 0)) {
          setState(118);
          forCondition();
        }
        setState(121);
        match(C0Parser::T__3);
        setState(123);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << C0Parser::T__0)
          | (1ULL << C0Parser::T__21)
          | (1ULL << C0Parser::T__22)
          | (1ULL << C0Parser::T__23)
          | (1ULL << C0Parser::T__24)
          | (1ULL << C0Parser::CharLiteral)
          | (1ULL << C0Parser::StringLiteral)
          | (1ULL << C0Parser::Identifier)
          | (1ULL << C0Parser::DecimalInteger))) != 0)) {
          setState(122);
          forStep();
        }
        setState(125);
        match(C0Parser::T__2);
        setState(126);
        statement();
        break;
      }

      case C0Parser::T__17: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::WhileStmtContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(127);
        match(C0Parser::T__17);
        setState(128);
        match(C0Parser::T__0);
        setState(129);
        whileCondition();
        setState(130);
        match(C0Parser::T__2);
        setState(131);
        whileStatement();
        break;
      }

      case C0Parser::T__18: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::ReturnStmtContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(133);
        match(C0Parser::T__18);
        setState(135);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << C0Parser::T__0)
          | (1ULL << C0Parser::T__21)
          | (1ULL << C0Parser::T__22)
          | (1ULL << C0Parser::T__23)
          | (1ULL << C0Parser::T__24)
          | (1ULL << C0Parser::CharLiteral)
          | (1ULL << C0Parser::StringLiteral)
          | (1ULL << C0Parser::Identifier)
          | (1ULL << C0Parser::DecimalInteger))) != 0)) {
          setState(134);
          expression(0);
        }
        setState(137);
        match(C0Parser::T__3);
        break;
      }

      case C0Parser::T__19: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::BreakStmtContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(138);
        match(C0Parser::T__19);
        setState(139);
        match(C0Parser::T__3);
        break;
      }

      case C0Parser::T__20: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::ContinueStmtContext>(_localctx));
        enterOuterAlt(_localctx, 8);
        setState(140);
        match(C0Parser::T__20);
        setState(141);
        match(C0Parser::T__3);
        break;
      }

      case C0Parser::T__0:
      case C0Parser::T__21:
      case C0Parser::T__22:
      case C0Parser::T__23:
      case C0Parser::T__24:
      case C0Parser::CharLiteral:
      case C0Parser::StringLiteral:
      case C0Parser::Identifier:
      case C0Parser::DecimalInteger: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::ExprStmtContext>(_localctx));
        enterOuterAlt(_localctx, 9);
        setState(142);
        expression(0);
        setState(143);
        match(C0Parser::T__3);
        break;
      }

      case C0Parser::T__3: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<C0Parser::BlankStmtContext>(_localctx));
        enterOuterAlt(_localctx, 10);
        setState(145);
        match(C0Parser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfConditionContext ------------------------------------------------------------------

C0Parser::IfConditionContext::IfConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::ExpressionContext* C0Parser::IfConditionContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}


size_t C0Parser::IfConditionContext::getRuleIndex() const {
  return C0Parser::RuleIfCondition;
}

void C0Parser::IfConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfCondition(this);
}

void C0Parser::IfConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfCondition(this);
}


antlrcpp::Any C0Parser::IfConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitIfCondition(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::IfConditionContext* C0Parser::ifCondition() {
  IfConditionContext *_localctx = _tracker.createInstance<IfConditionContext>(_ctx, getState());
  enterRule(_localctx, 14, C0Parser::RuleIfCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

C0Parser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::StatementContext* C0Parser::IfStatementContext::statement() {
  return getRuleContext<C0Parser::StatementContext>(0);
}


size_t C0Parser::IfStatementContext::getRuleIndex() const {
  return C0Parser::RuleIfStatement;
}

void C0Parser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void C0Parser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any C0Parser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::IfStatementContext* C0Parser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, C0Parser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

C0Parser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::StatementContext* C0Parser::ElseStatementContext::statement() {
  return getRuleContext<C0Parser::StatementContext>(0);
}


size_t C0Parser::ElseStatementContext::getRuleIndex() const {
  return C0Parser::RuleElseStatement;
}

void C0Parser::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}

void C0Parser::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}


antlrcpp::Any C0Parser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ElseStatementContext* C0Parser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, C0Parser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileConditionContext ------------------------------------------------------------------

C0Parser::WhileConditionContext::WhileConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::ExpressionContext* C0Parser::WhileConditionContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}


size_t C0Parser::WhileConditionContext::getRuleIndex() const {
  return C0Parser::RuleWhileCondition;
}

void C0Parser::WhileConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileCondition(this);
}

void C0Parser::WhileConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileCondition(this);
}


antlrcpp::Any C0Parser::WhileConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitWhileCondition(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::WhileConditionContext* C0Parser::whileCondition() {
  WhileConditionContext *_localctx = _tracker.createInstance<WhileConditionContext>(_ctx, getState());
  enterRule(_localctx, 20, C0Parser::RuleWhileCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

C0Parser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::StatementContext* C0Parser::WhileStatementContext::statement() {
  return getRuleContext<C0Parser::StatementContext>(0);
}


size_t C0Parser::WhileStatementContext::getRuleIndex() const {
  return C0Parser::RuleWhileStatement;
}

void C0Parser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void C0Parser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any C0Parser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::WhileStatementContext* C0Parser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, C0Parser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForConditionContext ------------------------------------------------------------------

C0Parser::ForConditionContext::ForConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::ExpressionContext* C0Parser::ForConditionContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}


size_t C0Parser::ForConditionContext::getRuleIndex() const {
  return C0Parser::RuleForCondition;
}

void C0Parser::ForConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCondition(this);
}

void C0Parser::ForConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCondition(this);
}


antlrcpp::Any C0Parser::ForConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitForCondition(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ForConditionContext* C0Parser::forCondition() {
  ForConditionContext *_localctx = _tracker.createInstance<ForConditionContext>(_ctx, getState());
  enterRule(_localctx, 24, C0Parser::RuleForCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStepContext ------------------------------------------------------------------

C0Parser::ForStepContext::ForStepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::ExpressionContext* C0Parser::ForStepContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}


size_t C0Parser::ForStepContext::getRuleIndex() const {
  return C0Parser::RuleForStep;
}

void C0Parser::ForStepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStep(this);
}

void C0Parser::ForStepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStep(this);
}


antlrcpp::Any C0Parser::ForStepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitForStep(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ForStepContext* C0Parser::forStep() {
  ForStepContext *_localctx = _tracker.createInstance<ForStepContext>(_ctx, getState());
  enterRule(_localctx, 26, C0Parser::RuleForStep);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

C0Parser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C0Parser::ExpressionContext *> C0Parser::ExpressionListContext::expression() {
  return getRuleContexts<C0Parser::ExpressionContext>();
}

C0Parser::ExpressionContext* C0Parser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<C0Parser::ExpressionContext>(i);
}


size_t C0Parser::ExpressionListContext::getRuleIndex() const {
  return C0Parser::RuleExpressionList;
}

void C0Parser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void C0Parser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any C0Parser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ExpressionListContext* C0Parser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 28, C0Parser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    expression(0);
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C0Parser::T__1) {
      setState(163);
      match(C0Parser::T__1);
      setState(164);
      expression(0);
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

C0Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C0Parser::ExpressionContext::getRuleIndex() const {
  return C0Parser::RuleExpression;
}

void C0Parser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrefixExprContext ------------------------------------------------------------------

C0Parser::ExpressionContext* C0Parser::PrefixExprContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}

C0Parser::PrefixExprContext::PrefixExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void C0Parser::PrefixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixExpr(this);
}
void C0Parser::PrefixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixExpr(this);
}

antlrcpp::Any C0Parser::PrefixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitPrefixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryExprContext ------------------------------------------------------------------

C0Parser::PrimaryContext* C0Parser::PrimaryExprContext::primary() {
  return getRuleContext<C0Parser::PrimaryContext>(0);
}

C0Parser::PrimaryExprContext::PrimaryExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void C0Parser::PrimaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpr(this);
}
void C0Parser::PrimaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpr(this);
}

antlrcpp::Any C0Parser::PrimaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitPrimaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncallExprContext ------------------------------------------------------------------

C0Parser::ExpressionContext* C0Parser::FuncallExprContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}

C0Parser::ExpressionListContext* C0Parser::FuncallExprContext::expressionList() {
  return getRuleContext<C0Parser::ExpressionListContext>(0);
}

C0Parser::FuncallExprContext::FuncallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void C0Parser::FuncallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncallExpr(this);
}
void C0Parser::FuncallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncallExpr(this);
}

antlrcpp::Any C0Parser::FuncallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitFuncallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArefExprContext ------------------------------------------------------------------

std::vector<C0Parser::ExpressionContext *> C0Parser::ArefExprContext::expression() {
  return getRuleContexts<C0Parser::ExpressionContext>();
}

C0Parser::ExpressionContext* C0Parser::ArefExprContext::expression(size_t i) {
  return getRuleContext<C0Parser::ExpressionContext>(i);
}

C0Parser::ArefExprContext::ArefExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void C0Parser::ArefExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArefExpr(this);
}
void C0Parser::ArefExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArefExpr(this);
}

antlrcpp::Any C0Parser::ArefExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitArefExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryExprContext ------------------------------------------------------------------

std::vector<C0Parser::ExpressionContext *> C0Parser::BinaryExprContext::expression() {
  return getRuleContexts<C0Parser::ExpressionContext>();
}

C0Parser::ExpressionContext* C0Parser::BinaryExprContext::expression(size_t i) {
  return getRuleContext<C0Parser::ExpressionContext>(i);
}

C0Parser::BinaryExprContext::BinaryExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void C0Parser::BinaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpr(this);
}
void C0Parser::BinaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpr(this);
}

antlrcpp::Any C0Parser::BinaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitBinaryExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintfExprContext ------------------------------------------------------------------

C0Parser::ExpressionListContext* C0Parser::PrintfExprContext::expressionList() {
  return getRuleContext<C0Parser::ExpressionListContext>(0);
}

C0Parser::PrintfExprContext::PrintfExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void C0Parser::PrintfExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintfExpr(this);
}
void C0Parser::PrintfExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintfExpr(this);
}

antlrcpp::Any C0Parser::PrintfExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitPrintfExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ScanfExprContext ------------------------------------------------------------------

C0Parser::ExpressionListContext* C0Parser::ScanfExprContext::expressionList() {
  return getRuleContext<C0Parser::ExpressionListContext>(0);
}

C0Parser::ScanfExprContext::ScanfExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void C0Parser::ScanfExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScanfExpr(this);
}
void C0Parser::ScanfExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScanfExpr(this);
}

antlrcpp::Any C0Parser::ScanfExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitScanfExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignExprContext ------------------------------------------------------------------

std::vector<C0Parser::ExpressionContext *> C0Parser::AssignExprContext::expression() {
  return getRuleContexts<C0Parser::ExpressionContext>();
}

C0Parser::ExpressionContext* C0Parser::AssignExprContext::expression(size_t i) {
  return getRuleContext<C0Parser::ExpressionContext>(i);
}

C0Parser::AssignExprContext::AssignExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void C0Parser::AssignExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignExpr(this);
}
void C0Parser::AssignExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignExpr(this);
}

antlrcpp::Any C0Parser::AssignExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitAssignExpr(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ExpressionContext* C0Parser::expression() {
   return expression(0);
}

C0Parser::ExpressionContext* C0Parser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C0Parser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  C0Parser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, C0Parser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(186);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C0Parser::T__0:
      case C0Parser::CharLiteral:
      case C0Parser::StringLiteral:
      case C0Parser::Identifier:
      case C0Parser::DecimalInteger: {
        _localctx = _tracker.createInstance<PrimaryExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(171);
        primary();
        break;
      }

      case C0Parser::T__21: {
        _localctx = _tracker.createInstance<PrintfExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(172);
        match(C0Parser::T__21);
        setState(173);
        match(C0Parser::T__0);
        setState(175);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << C0Parser::T__0)
          | (1ULL << C0Parser::T__21)
          | (1ULL << C0Parser::T__22)
          | (1ULL << C0Parser::T__23)
          | (1ULL << C0Parser::T__24)
          | (1ULL << C0Parser::CharLiteral)
          | (1ULL << C0Parser::StringLiteral)
          | (1ULL << C0Parser::Identifier)
          | (1ULL << C0Parser::DecimalInteger))) != 0)) {
          setState(174);
          expressionList();
        }
        setState(177);
        match(C0Parser::T__2);
        break;
      }

      case C0Parser::T__22: {
        _localctx = _tracker.createInstance<ScanfExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(178);
        match(C0Parser::T__22);
        setState(179);
        match(C0Parser::T__0);
        setState(181);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << C0Parser::T__0)
          | (1ULL << C0Parser::T__21)
          | (1ULL << C0Parser::T__22)
          | (1ULL << C0Parser::T__23)
          | (1ULL << C0Parser::T__24)
          | (1ULL << C0Parser::CharLiteral)
          | (1ULL << C0Parser::StringLiteral)
          | (1ULL << C0Parser::Identifier)
          | (1ULL << C0Parser::DecimalInteger))) != 0)) {
          setState(180);
          expressionList();
        }
        setState(183);
        match(C0Parser::T__2);
        break;
      }

      case C0Parser::T__23:
      case C0Parser::T__24: {
        _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(184);
        dynamic_cast<PrefixExprContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == C0Parser::T__23

        || _la == C0Parser::T__24)) {
          dynamic_cast<PrefixExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(185);
        expression(6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(216);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(214);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(188);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(189);
          dynamic_cast<BinaryExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == C0Parser::T__25

          || _la == C0Parser::T__26)) {
            dynamic_cast<BinaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(190);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(191);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(192);
          dynamic_cast<BinaryExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == C0Parser::T__23

          || _la == C0Parser::T__24)) {
            dynamic_cast<BinaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(193);
          expression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(194);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(195);
          dynamic_cast<BinaryExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << C0Parser::T__27)
            | (1ULL << C0Parser::T__28)
            | (1ULL << C0Parser::T__29)
            | (1ULL << C0Parser::T__30))) != 0))) {
            dynamic_cast<BinaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(196);
          expression(4);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(197);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(198);
          dynamic_cast<BinaryExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == C0Parser::T__31

          || _la == C0Parser::T__32)) {
            dynamic_cast<BinaryExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(199);
          expression(3);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AssignExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(200);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(201);
          match(C0Parser::T__4);
          setState(202);
          expression(1);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ArefExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(203);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(204);
          match(C0Parser::T__5);
          setState(205);
          expression(0);
          setState(206);
          match(C0Parser::T__6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<FuncallExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(208);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(209);
          match(C0Parser::T__0);
          setState(211);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << C0Parser::T__0)
            | (1ULL << C0Parser::T__21)
            | (1ULL << C0Parser::T__22)
            | (1ULL << C0Parser::T__23)
            | (1ULL << C0Parser::T__24)
            | (1ULL << C0Parser::CharLiteral)
            | (1ULL << C0Parser::StringLiteral)
            | (1ULL << C0Parser::Identifier)
            | (1ULL << C0Parser::DecimalInteger))) != 0)) {
            setState(210);
            expressionList();
          }
          setState(213);
          match(C0Parser::T__2);
          break;
        }

        } 
      }
      setState(218);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

C0Parser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t C0Parser::PrimaryContext::getRuleIndex() const {
  return C0Parser::RulePrimary;
}

void C0Parser::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariableExprContext ------------------------------------------------------------------

tree::TerminalNode* C0Parser::VariableExprContext::Identifier() {
  return getToken(C0Parser::Identifier, 0);
}

C0Parser::VariableExprContext::VariableExprContext(PrimaryContext *ctx) { copyFrom(ctx); }

void C0Parser::VariableExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableExpr(this);
}
void C0Parser::VariableExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableExpr(this);
}

antlrcpp::Any C0Parser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralExprContext ------------------------------------------------------------------

tree::TerminalNode* C0Parser::LiteralExprContext::DecimalInteger() {
  return getToken(C0Parser::DecimalInteger, 0);
}

tree::TerminalNode* C0Parser::LiteralExprContext::CharLiteral() {
  return getToken(C0Parser::CharLiteral, 0);
}

tree::TerminalNode* C0Parser::LiteralExprContext::StringLiteral() {
  return getToken(C0Parser::StringLiteral, 0);
}

C0Parser::LiteralExprContext::LiteralExprContext(PrimaryContext *ctx) { copyFrom(ctx); }

void C0Parser::LiteralExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteralExpr(this);
}
void C0Parser::LiteralExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteralExpr(this);
}

antlrcpp::Any C0Parser::LiteralExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitLiteralExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubExprContext ------------------------------------------------------------------

C0Parser::ExpressionContext* C0Parser::SubExprContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}

C0Parser::SubExprContext::SubExprContext(PrimaryContext *ctx) { copyFrom(ctx); }

void C0Parser::SubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubExpr(this);
}
void C0Parser::SubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubExpr(this);
}

antlrcpp::Any C0Parser::SubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitSubExpr(this);
  else
    return visitor->visitChildren(this);
}
C0Parser::PrimaryContext* C0Parser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 32, C0Parser::RulePrimary);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C0Parser::T__0: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<C0Parser::SubExprContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(219);
        match(C0Parser::T__0);
        setState(220);
        expression(0);
        setState(221);
        match(C0Parser::T__2);
        break;
      }

      case C0Parser::Identifier: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<C0Parser::VariableExprContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(223);
        match(C0Parser::Identifier);
        break;
      }

      case C0Parser::CharLiteral:
      case C0Parser::StringLiteral:
      case C0Parser::DecimalInteger: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<C0Parser::LiteralExprContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(224);
        dynamic_cast<LiteralExprContext *>(_localctx)->lite = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << C0Parser::CharLiteral)
          | (1ULL << C0Parser::StringLiteral)
          | (1ULL << C0Parser::DecimalInteger))) != 0))) {
          dynamic_cast<LiteralExprContext *>(_localctx)->lite = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool C0Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool C0Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> C0Parser::_decisionToDFA;
atn::PredictionContextCache C0Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN C0Parser::_atn;
std::vector<uint16_t> C0Parser::_serializedATN;

std::vector<std::string> C0Parser::_ruleNames = {
  "compilationUnit", "functionDefinition", "variableDefinition", "parameter", 
  "typeType", "block", "statement", "ifCondition", "ifStatement", "elseStatement", 
  "whileCondition", "whileStatement", "forCondition", "forStep", "expressionList", 
  "expression", "primary"
};

std::vector<std::string> C0Parser::_literalNames = {
  "", "'('", "','", "')'", "';'", "'='", "'['", "']'", "'int'", "'char'", 
  "'const int'", "'const char'", "'void'", "'{'", "'}'", "'if'", "'else'", 
  "'for'", "'while'", "'return'", "'break'", "'continue'", "'printf'", "'scanf'", 
  "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'>='", "'<='", "'=='", "'!='"
};

std::vector<std::string> C0Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "CharLiteral", 
  "StringLiteral", "Identifier", "DecimalInteger", "WS", "BLOCK_COMMENT", 
  "LINE_COMMENT"
};

dfa::Vocabulary C0Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> C0Parser::_tokenNames;

C0Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2a, 0xe6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x27, 0xa, 0x2, 0xc, 0x2, 0xe, 
    0x2, 0x2a, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x34, 0xa, 0x3, 0xc, 0x3, 0xe, 
    0x3, 0x37, 0xb, 0x3, 0x5, 0x3, 0x39, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x42, 0xa, 0x4, 
    0xc, 0x4, 0xe, 0x4, 0x45, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4d, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x58, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x61, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0x64, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x71, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x76, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0x7a, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x7e, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x8a, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x95, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x7, 0x10, 0xa8, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xab, 0xb, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xb2, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xb8, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xbd, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xd6, 0xa, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0xd9, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xdc, 0xb, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xe4, 0xa, 0x12, 0x3, 0x12, 0x2, 0x3, 0x20, 0x13, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x2, 0x9, 0x4, 0x2, 0x24, 0x24, 0x27, 0x27, 0x3, 0x2, 0xa, 
    0xe, 0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x1e, 0x21, 
    0x3, 0x2, 0x22, 0x23, 0x4, 0x2, 0x24, 0x25, 0x27, 0x27, 0x2, 0xfb, 0x2, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x59, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x96, 0x3, 0x2, 0x2, 0x2, 0x12, 0x98, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x9e, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x20, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x24, 0x27, 0x5, 0x6, 0x4, 
    0x2, 0x25, 0x27, 0x5, 0x4, 0x3, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x25, 0x3, 0x2, 0x2, 0x2, 0x27, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 
    0x2, 0x2, 0x3, 0x2c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0xa, 
    0x6, 0x2, 0x2e, 0x2f, 0x7, 0x26, 0x2, 0x2, 0x2f, 0x38, 0x7, 0x3, 0x2, 
    0x2, 0x30, 0x35, 0x5, 0x8, 0x5, 0x2, 0x31, 0x32, 0x7, 0x4, 0x2, 0x2, 
    0x32, 0x34, 0x5, 0x8, 0x5, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x30, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x5, 0x2, 
    0x2, 0x3b, 0x3c, 0x5, 0xc, 0x7, 0x2, 0x3c, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3e, 0x5, 0xa, 0x6, 0x2, 0x3e, 0x43, 0x7, 0x26, 0x2, 0x2, 0x3f, 
    0x40, 0x7, 0x4, 0x2, 0x2, 0x40, 0x42, 0x7, 0x26, 0x2, 0x2, 0x41, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x6, 0x2, 
    0x2, 0x47, 0x58, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x5, 0xa, 0x6, 0x2, 
    0x49, 0x4c, 0x7, 0x26, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x7, 0x2, 0x2, 0x4b, 
    0x4d, 0x9, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 
    0x6, 0x2, 0x2, 0x4f, 0x58, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x5, 0xa, 
    0x6, 0x2, 0x51, 0x52, 0x7, 0x26, 0x2, 0x2, 0x52, 0x53, 0x7, 0x8, 0x2, 
    0x2, 0x53, 0x54, 0x7, 0x27, 0x2, 0x2, 0x54, 0x55, 0x7, 0x9, 0x2, 0x2, 
    0x55, 0x56, 0x7, 0x6, 0x2, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x57, 0x48, 0x3, 0x2, 0x2, 0x2, 0x57, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x7, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x5, 
    0xa, 0x6, 0x2, 0x5a, 0x5b, 0x7, 0x26, 0x2, 0x2, 0x5b, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x5d, 0x9, 0x3, 0x2, 0x2, 0x5d, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x5e, 0x62, 0x7, 0xf, 0x2, 0x2, 0x5f, 0x61, 0x5, 0xe, 0x8, 0x2, 
    0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 
    0x10, 0x2, 0x2, 0x66, 0xd, 0x3, 0x2, 0x2, 0x2, 0x67, 0x95, 0x5, 0xc, 
    0x7, 0x2, 0x68, 0x95, 0x5, 0x6, 0x4, 0x2, 0x69, 0x6a, 0x7, 0x11, 0x2, 
    0x2, 0x6a, 0x6b, 0x7, 0x3, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x10, 0x9, 0x2, 
    0x6c, 0x6d, 0x7, 0x5, 0x2, 0x2, 0x6d, 0x70, 0x5, 0x12, 0xa, 0x2, 0x6e, 
    0x6f, 0x7, 0x12, 0x2, 0x2, 0x6f, 0x71, 0x5, 0x14, 0xb, 0x2, 0x70, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0x13, 0x2, 0x2, 0x73, 0x75, 0x7, 0x3, 
    0x2, 0x2, 0x74, 0x76, 0x5, 0x20, 0x11, 0x2, 0x75, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x79, 0x7, 0x6, 0x2, 0x2, 0x78, 0x7a, 0x5, 0x1a, 0xe, 0x2, 0x79, 
    0x78, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x7, 0x6, 0x2, 0x2, 0x7c, 0x7e, 0x5, 
    0x1c, 0xf, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x5, 0x2, 
    0x2, 0x80, 0x95, 0x5, 0xe, 0x8, 0x2, 0x81, 0x82, 0x7, 0x14, 0x2, 0x2, 
    0x82, 0x83, 0x7, 0x3, 0x2, 0x2, 0x83, 0x84, 0x5, 0x16, 0xc, 0x2, 0x84, 
    0x85, 0x7, 0x5, 0x2, 0x2, 0x85, 0x86, 0x5, 0x18, 0xd, 0x2, 0x86, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x7, 0x15, 0x2, 0x2, 0x88, 0x8a, 0x5, 
    0x20, 0x11, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x95, 0x7, 0x6, 0x2, 
    0x2, 0x8c, 0x8d, 0x7, 0x16, 0x2, 0x2, 0x8d, 0x95, 0x7, 0x6, 0x2, 0x2, 
    0x8e, 0x8f, 0x7, 0x17, 0x2, 0x2, 0x8f, 0x95, 0x7, 0x6, 0x2, 0x2, 0x90, 
    0x91, 0x5, 0x20, 0x11, 0x2, 0x91, 0x92, 0x7, 0x6, 0x2, 0x2, 0x92, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 0x7, 0x6, 0x2, 0x2, 0x94, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x68, 0x3, 0x2, 0x2, 0x2, 0x94, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x72, 0x3, 0x2, 0x2, 0x2, 0x94, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x87, 0x3, 0x2, 0x2, 0x2, 0x94, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x94, 0x90, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0xf, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 
    0x5, 0x20, 0x11, 0x2, 0x97, 0x11, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x5, 
    0xe, 0x8, 0x2, 0x99, 0x13, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0xe, 
    0x8, 0x2, 0x9b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x20, 0x11, 
    0x2, 0x9d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0xe, 0x8, 0x2, 
    0x9f, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x20, 0x11, 0x2, 0xa1, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x20, 0x11, 0x2, 0xa3, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa9, 0x5, 0x20, 0x11, 0x2, 0xa5, 0xa6, 0x7, 
    0x4, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0x20, 0x11, 0x2, 0xa7, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x8, 0x11, 0x1, 0x2, 0xad, 
    0xbd, 0x5, 0x22, 0x12, 0x2, 0xae, 0xaf, 0x7, 0x18, 0x2, 0x2, 0xaf, 0xb1, 
    0x7, 0x3, 0x2, 0x2, 0xb0, 0xb2, 0x5, 0x1e, 0x10, 0x2, 0xb1, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xbd, 0x7, 0x5, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x19, 0x2, 
    0x2, 0xb5, 0xb7, 0x7, 0x3, 0x2, 0x2, 0xb6, 0xb8, 0x5, 0x1e, 0x10, 0x2, 
    0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbd, 0x7, 0x5, 0x2, 0x2, 0xba, 0xbb, 
    0x9, 0x4, 0x2, 0x2, 0xbb, 0xbd, 0x5, 0x20, 0x11, 0x8, 0xbc, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xbc, 0xae, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xbf, 0xc, 0x7, 0x2, 0x2, 0xbf, 0xc0, 0x9, 0x5, 0x2, 0x2, 
    0xc0, 0xd9, 0x5, 0x20, 0x11, 0x8, 0xc1, 0xc2, 0xc, 0x6, 0x2, 0x2, 0xc2, 
    0xc3, 0x9, 0x4, 0x2, 0x2, 0xc3, 0xd9, 0x5, 0x20, 0x11, 0x7, 0xc4, 0xc5, 
    0xc, 0x5, 0x2, 0x2, 0xc5, 0xc6, 0x9, 0x6, 0x2, 0x2, 0xc6, 0xd9, 0x5, 
    0x20, 0x11, 0x6, 0xc7, 0xc8, 0xc, 0x4, 0x2, 0x2, 0xc8, 0xc9, 0x9, 0x7, 
    0x2, 0x2, 0xc9, 0xd9, 0x5, 0x20, 0x11, 0x5, 0xca, 0xcb, 0xc, 0x3, 0x2, 
    0x2, 0xcb, 0xcc, 0x7, 0x7, 0x2, 0x2, 0xcc, 0xd9, 0x5, 0x20, 0x11, 0x3, 
    0xcd, 0xce, 0xc, 0xc, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x8, 0x2, 0x2, 0xcf, 
    0xd0, 0x5, 0x20, 0x11, 0x2, 0xd0, 0xd1, 0x7, 0x9, 0x2, 0x2, 0xd1, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0xc, 0x9, 0x2, 0x2, 0xd3, 0xd5, 0x7, 
    0x3, 0x2, 0x2, 0xd4, 0xd6, 0x5, 0x1e, 0x10, 0x2, 0xd5, 0xd4, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xd9, 0x7, 0x5, 0x2, 0x2, 0xd8, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xca, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0x21, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xde, 0x7, 0x3, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x20, 0x11, 0x2, 
    0xdf, 0xe0, 0x7, 0x5, 0x2, 0x2, 0xe0, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe1, 
    0xe4, 0x7, 0x26, 0x2, 0x2, 0xe2, 0xe4, 0x9, 0x8, 0x2, 0x2, 0xe3, 0xdd, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe4, 0x23, 0x3, 0x2, 0x2, 0x2, 0x18, 0x26, 0x28, 0x35, 
    0x38, 0x43, 0x4c, 0x57, 0x62, 0x70, 0x75, 0x79, 0x7d, 0x89, 0x94, 0xa9, 
    0xb1, 0xb7, 0xbc, 0xd5, 0xd8, 0xda, 0xe3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

C0Parser::Initializer C0Parser::_init;
