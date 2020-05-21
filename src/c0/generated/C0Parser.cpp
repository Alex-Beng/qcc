
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


//----------------- ProgramContext ------------------------------------------------------------------

C0Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C0Parser::DeclContext *> C0Parser::ProgramContext::decl() {
  return getRuleContexts<C0Parser::DeclContext>();
}

C0Parser::DeclContext* C0Parser::ProgramContext::decl(size_t i) {
  return getRuleContext<C0Parser::DeclContext>(i);
}


size_t C0Parser::ProgramContext::getRuleIndex() const {
  return C0Parser::RuleProgram;
}

void C0Parser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void C0Parser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any C0Parser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ProgramContext* C0Parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, C0Parser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(36);
      decl();
      setState(39); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == C0Parser::VOID

    || _la == C0Parser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

C0Parser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::Var_declContext* C0Parser::DeclContext::var_decl() {
  return getRuleContext<C0Parser::Var_declContext>(0);
}

C0Parser::Fun_declContext* C0Parser::DeclContext::fun_decl() {
  return getRuleContext<C0Parser::Fun_declContext>(0);
}


size_t C0Parser::DeclContext::getRuleIndex() const {
  return C0Parser::RuleDecl;
}

void C0Parser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void C0Parser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}


antlrcpp::Any C0Parser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::DeclContext* C0Parser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, C0Parser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(43);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(41);
      var_decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(42);
      fun_decl();
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

//----------------- Var_declContext ------------------------------------------------------------------

C0Parser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::Type_specContext* C0Parser::Var_declContext::type_spec() {
  return getRuleContext<C0Parser::Type_specContext>(0);
}

std::vector<tree::TerminalNode *> C0Parser::Var_declContext::IDENT() {
  return getTokens(C0Parser::IDENT);
}

tree::TerminalNode* C0Parser::Var_declContext::IDENT(size_t i) {
  return getToken(C0Parser::IDENT, i);
}

tree::TerminalNode* C0Parser::Var_declContext::LITERAL() {
  return getToken(C0Parser::LITERAL, 0);
}


size_t C0Parser::Var_declContext::getRuleIndex() const {
  return C0Parser::RuleVar_decl;
}

void C0Parser::Var_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_decl(this);
}

void C0Parser::Var_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_decl(this);
}


antlrcpp::Any C0Parser::Var_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitVar_decl(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Var_declContext* C0Parser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 4, C0Parser::RuleVar_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(45);
      type_spec();
      setState(46);
      match(C0Parser::IDENT);
      setState(47);
      match(C0Parser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
      type_spec();
      setState(50);
      match(C0Parser::IDENT);
      setState(51);
      match(C0Parser::T__1);
      setState(52);
      match(C0Parser::LITERAL);
      setState(53);
      match(C0Parser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(55);
      type_spec();
      setState(56);
      match(C0Parser::IDENT);
      setState(57);
      match(C0Parser::T__1);
      setState(58);
      match(C0Parser::IDENT);
      setState(59);
      match(C0Parser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(61);
      type_spec();
      setState(62);
      match(C0Parser::IDENT);
      setState(63);
      match(C0Parser::T__2);
      setState(64);
      match(C0Parser::LITERAL);
      setState(65);
      match(C0Parser::T__3);
      setState(66);
      match(C0Parser::T__0);
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

//----------------- Type_specContext ------------------------------------------------------------------

C0Parser::Type_specContext::Type_specContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Type_specContext::VOID() {
  return getToken(C0Parser::VOID, 0);
}

tree::TerminalNode* C0Parser::Type_specContext::INT() {
  return getToken(C0Parser::INT, 0);
}


size_t C0Parser::Type_specContext::getRuleIndex() const {
  return C0Parser::RuleType_spec;
}

void C0Parser::Type_specContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_spec(this);
}

void C0Parser::Type_specContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_spec(this);
}


antlrcpp::Any C0Parser::Type_specContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitType_spec(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Type_specContext* C0Parser::type_spec() {
  Type_specContext *_localctx = _tracker.createInstance<Type_specContext>(_ctx, getState());
  enterRule(_localctx, 6, C0Parser::RuleType_spec);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    _la = _input->LA(1);
    if (!(_la == C0Parser::VOID

    || _la == C0Parser::INT)) {
    _errHandler->recoverInline(this);
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

//----------------- Fun_declContext ------------------------------------------------------------------

C0Parser::Fun_declContext::Fun_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::Type_specContext* C0Parser::Fun_declContext::type_spec() {
  return getRuleContext<C0Parser::Type_specContext>(0);
}

tree::TerminalNode* C0Parser::Fun_declContext::IDENT() {
  return getToken(C0Parser::IDENT, 0);
}

C0Parser::ParamsContext* C0Parser::Fun_declContext::params() {
  return getRuleContext<C0Parser::ParamsContext>(0);
}

C0Parser::Compound_stmtContext* C0Parser::Fun_declContext::compound_stmt() {
  return getRuleContext<C0Parser::Compound_stmtContext>(0);
}


size_t C0Parser::Fun_declContext::getRuleIndex() const {
  return C0Parser::RuleFun_decl;
}

void C0Parser::Fun_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFun_decl(this);
}

void C0Parser::Fun_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFun_decl(this);
}


antlrcpp::Any C0Parser::Fun_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitFun_decl(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Fun_declContext* C0Parser::fun_decl() {
  Fun_declContext *_localctx = _tracker.createInstance<Fun_declContext>(_ctx, getState());
  enterRule(_localctx, 8, C0Parser::RuleFun_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    type_spec();
    setState(73);
    match(C0Parser::IDENT);
    setState(74);
    match(C0Parser::T__4);
    setState(75);
    params();
    setState(76);
    match(C0Parser::T__5);
    setState(77);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamsContext ------------------------------------------------------------------

C0Parser::ParamsContext::ParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C0Parser::ParamContext *> C0Parser::ParamsContext::param() {
  return getRuleContexts<C0Parser::ParamContext>();
}

C0Parser::ParamContext* C0Parser::ParamsContext::param(size_t i) {
  return getRuleContext<C0Parser::ParamContext>(i);
}

tree::TerminalNode* C0Parser::ParamsContext::VOID() {
  return getToken(C0Parser::VOID, 0);
}


size_t C0Parser::ParamsContext::getRuleIndex() const {
  return C0Parser::RuleParams;
}

void C0Parser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}

void C0Parser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}


antlrcpp::Any C0Parser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ParamsContext* C0Parser::params() {
  ParamsContext *_localctx = _tracker.createInstance<ParamsContext>(_ctx, getState());
  enterRule(_localctx, 10, C0Parser::RuleParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(79);
      param();
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == C0Parser::T__6) {
        setState(80);
        match(C0Parser::T__6);
        setState(81);
        param();
        setState(86);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      match(C0Parser::VOID);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

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

//----------------- ParamContext ------------------------------------------------------------------

C0Parser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::Type_specContext* C0Parser::ParamContext::type_spec() {
  return getRuleContext<C0Parser::Type_specContext>(0);
}

tree::TerminalNode* C0Parser::ParamContext::IDENT() {
  return getToken(C0Parser::IDENT, 0);
}


size_t C0Parser::ParamContext::getRuleIndex() const {
  return C0Parser::RuleParam;
}

void C0Parser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void C0Parser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


antlrcpp::Any C0Parser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ParamContext* C0Parser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 12, C0Parser::RuleParam);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(91);
      type_spec();
      setState(92);
      match(C0Parser::T__7);
      setState(93);
      match(C0Parser::IDENT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      type_spec();
      setState(96);
      match(C0Parser::IDENT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(98);
      type_spec();
      setState(99);
      match(C0Parser::IDENT);
      setState(100);
      match(C0Parser::T__2);
      setState(101);
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

//----------------- StmtContext ------------------------------------------------------------------

C0Parser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::Expr_stmtContext* C0Parser::StmtContext::expr_stmt() {
  return getRuleContext<C0Parser::Expr_stmtContext>(0);
}

C0Parser::Compound_stmtContext* C0Parser::StmtContext::compound_stmt() {
  return getRuleContext<C0Parser::Compound_stmtContext>(0);
}

C0Parser::If_stmtContext* C0Parser::StmtContext::if_stmt() {
  return getRuleContext<C0Parser::If_stmtContext>(0);
}

C0Parser::While_stmtContext* C0Parser::StmtContext::while_stmt() {
  return getRuleContext<C0Parser::While_stmtContext>(0);
}

C0Parser::Return_stmtContext* C0Parser::StmtContext::return_stmt() {
  return getRuleContext<C0Parser::Return_stmtContext>(0);
}

C0Parser::Break_stmtContext* C0Parser::StmtContext::break_stmt() {
  return getRuleContext<C0Parser::Break_stmtContext>(0);
}

C0Parser::Continue_stmtContext* C0Parser::StmtContext::continue_stmt() {
  return getRuleContext<C0Parser::Continue_stmtContext>(0);
}


size_t C0Parser::StmtContext::getRuleIndex() const {
  return C0Parser::RuleStmt;
}

void C0Parser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void C0Parser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}


antlrcpp::Any C0Parser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::StmtContext* C0Parser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 14, C0Parser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C0Parser::T__4:
      case C0Parser::T__10:
      case C0Parser::T__11:
      case C0Parser::T__12:
      case C0Parser::T__13:
      case C0Parser::T__14:
      case C0Parser::T__19:
      case C0Parser::IDENT:
      case C0Parser::LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(105);
        expr_stmt();
        break;
      }

      case C0Parser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(106);
        compound_stmt();
        break;
      }

      case C0Parser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(107);
        if_stmt();
        break;
      }

      case C0Parser::WHILE: {
        enterOuterAlt(_localctx, 4);
        setState(108);
        while_stmt();
        break;
      }

      case C0Parser::RETURN: {
        enterOuterAlt(_localctx, 5);
        setState(109);
        return_stmt();
        break;
      }

      case C0Parser::BREAK: {
        enterOuterAlt(_localctx, 6);
        setState(110);
        break_stmt();
        break;
      }

      case C0Parser::CONTINUE: {
        enterOuterAlt(_localctx, 7);
        setState(111);
        continue_stmt();
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

//----------------- Expr_stmtContext ------------------------------------------------------------------

C0Parser::Expr_stmtContext::Expr_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::ExprContext* C0Parser::Expr_stmtContext::expr() {
  return getRuleContext<C0Parser::ExprContext>(0);
}


size_t C0Parser::Expr_stmtContext::getRuleIndex() const {
  return C0Parser::RuleExpr_stmt;
}

void C0Parser::Expr_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_stmt(this);
}

void C0Parser::Expr_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_stmt(this);
}


antlrcpp::Any C0Parser::Expr_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitExpr_stmt(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Expr_stmtContext* C0Parser::expr_stmt() {
  Expr_stmtContext *_localctx = _tracker.createInstance<Expr_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, C0Parser::RuleExpr_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    expr(0);
    setState(115);
    match(C0Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

C0Parser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::While_stmtContext::WHILE() {
  return getToken(C0Parser::WHILE, 0);
}

C0Parser::ExprContext* C0Parser::While_stmtContext::expr() {
  return getRuleContext<C0Parser::ExprContext>(0);
}

C0Parser::StmtContext* C0Parser::While_stmtContext::stmt() {
  return getRuleContext<C0Parser::StmtContext>(0);
}


size_t C0Parser::While_stmtContext::getRuleIndex() const {
  return C0Parser::RuleWhile_stmt;
}

void C0Parser::While_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_stmt(this);
}

void C0Parser::While_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_stmt(this);
}


antlrcpp::Any C0Parser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::While_stmtContext* C0Parser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, C0Parser::RuleWhile_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(C0Parser::WHILE);
    setState(118);
    match(C0Parser::T__4);
    setState(119);
    expr(0);
    setState(120);
    match(C0Parser::T__5);
    setState(121);
    stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

C0Parser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C0Parser::Local_declContext *> C0Parser::Compound_stmtContext::local_decl() {
  return getRuleContexts<C0Parser::Local_declContext>();
}

C0Parser::Local_declContext* C0Parser::Compound_stmtContext::local_decl(size_t i) {
  return getRuleContext<C0Parser::Local_declContext>(i);
}

std::vector<C0Parser::StmtContext *> C0Parser::Compound_stmtContext::stmt() {
  return getRuleContexts<C0Parser::StmtContext>();
}

C0Parser::StmtContext* C0Parser::Compound_stmtContext::stmt(size_t i) {
  return getRuleContext<C0Parser::StmtContext>(i);
}


size_t C0Parser::Compound_stmtContext::getRuleIndex() const {
  return C0Parser::RuleCompound_stmt;
}

void C0Parser::Compound_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_stmt(this);
}

void C0Parser::Compound_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_stmt(this);
}


antlrcpp::Any C0Parser::Compound_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitCompound_stmt(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Compound_stmtContext* C0Parser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, C0Parser::RuleCompound_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(C0Parser::T__8);
    setState(127);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == C0Parser::VOID

    || _la == C0Parser::INT) {
      setState(124);
      local_decl();
      setState(129);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << C0Parser::T__4)
      | (1ULL << C0Parser::T__8)
      | (1ULL << C0Parser::T__10)
      | (1ULL << C0Parser::T__11)
      | (1ULL << C0Parser::T__12)
      | (1ULL << C0Parser::T__13)
      | (1ULL << C0Parser::T__14)
      | (1ULL << C0Parser::T__19)
      | (1ULL << C0Parser::WHILE)
      | (1ULL << C0Parser::IF)
      | (1ULL << C0Parser::RETURN)
      | (1ULL << C0Parser::BREAK)
      | (1ULL << C0Parser::CONTINUE)
      | (1ULL << C0Parser::IDENT)
      | (1ULL << C0Parser::LITERAL))) != 0)) {
      setState(130);
      stmt();
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    match(C0Parser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_declContext ------------------------------------------------------------------

C0Parser::Local_declContext::Local_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::Type_specContext* C0Parser::Local_declContext::type_spec() {
  return getRuleContext<C0Parser::Type_specContext>(0);
}

std::vector<tree::TerminalNode *> C0Parser::Local_declContext::IDENT() {
  return getTokens(C0Parser::IDENT);
}

tree::TerminalNode* C0Parser::Local_declContext::IDENT(size_t i) {
  return getToken(C0Parser::IDENT, i);
}

tree::TerminalNode* C0Parser::Local_declContext::LITERAL() {
  return getToken(C0Parser::LITERAL, 0);
}


size_t C0Parser::Local_declContext::getRuleIndex() const {
  return C0Parser::RuleLocal_decl;
}

void C0Parser::Local_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_decl(this);
}

void C0Parser::Local_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_decl(this);
}


antlrcpp::Any C0Parser::Local_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitLocal_decl(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Local_declContext* C0Parser::local_decl() {
  Local_declContext *_localctx = _tracker.createInstance<Local_declContext>(_ctx, getState());
  enterRule(_localctx, 22, C0Parser::RuleLocal_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      type_spec();
      setState(139);
      match(C0Parser::IDENT);
      setState(140);
      match(C0Parser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(142);
      type_spec();
      setState(143);
      match(C0Parser::IDENT);
      setState(144);
      match(C0Parser::T__1);
      setState(145);
      match(C0Parser::LITERAL);
      setState(146);
      match(C0Parser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(148);
      type_spec();
      setState(149);
      match(C0Parser::IDENT);
      setState(150);
      match(C0Parser::T__1);
      setState(151);
      match(C0Parser::IDENT);
      setState(152);
      match(C0Parser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(154);
      type_spec();
      setState(155);
      match(C0Parser::IDENT);
      setState(156);
      match(C0Parser::T__2);
      setState(157);
      match(C0Parser::LITERAL);
      setState(158);
      match(C0Parser::T__3);
      setState(159);
      match(C0Parser::T__0);
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

//----------------- If_stmtContext ------------------------------------------------------------------

C0Parser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::If_stmtContext::IF() {
  return getToken(C0Parser::IF, 0);
}

C0Parser::ExprContext* C0Parser::If_stmtContext::expr() {
  return getRuleContext<C0Parser::ExprContext>(0);
}

std::vector<C0Parser::StmtContext *> C0Parser::If_stmtContext::stmt() {
  return getRuleContexts<C0Parser::StmtContext>();
}

C0Parser::StmtContext* C0Parser::If_stmtContext::stmt(size_t i) {
  return getRuleContext<C0Parser::StmtContext>(i);
}

tree::TerminalNode* C0Parser::If_stmtContext::ELSE() {
  return getToken(C0Parser::ELSE, 0);
}


size_t C0Parser::If_stmtContext::getRuleIndex() const {
  return C0Parser::RuleIf_stmt;
}

void C0Parser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void C0Parser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}


antlrcpp::Any C0Parser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::If_stmtContext* C0Parser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, C0Parser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(177);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(163);
      match(C0Parser::IF);
      setState(164);
      match(C0Parser::T__4);
      setState(165);
      expr(0);
      setState(166);
      match(C0Parser::T__5);
      setState(167);
      stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(169);
      match(C0Parser::IF);
      setState(170);
      match(C0Parser::T__4);
      setState(171);
      expr(0);
      setState(172);
      match(C0Parser::T__5);
      setState(173);
      stmt();
      setState(174);
      match(C0Parser::ELSE);
      setState(175);
      stmt();
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

//----------------- Return_stmtContext ------------------------------------------------------------------

C0Parser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Return_stmtContext::RETURN() {
  return getToken(C0Parser::RETURN, 0);
}

C0Parser::ExprContext* C0Parser::Return_stmtContext::expr() {
  return getRuleContext<C0Parser::ExprContext>(0);
}


size_t C0Parser::Return_stmtContext::getRuleIndex() const {
  return C0Parser::RuleReturn_stmt;
}

void C0Parser::Return_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_stmt(this);
}

void C0Parser::Return_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_stmt(this);
}


antlrcpp::Any C0Parser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Return_stmtContext* C0Parser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 26, C0Parser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(179);
      match(C0Parser::RETURN);
      setState(180);
      match(C0Parser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(181);
      match(C0Parser::RETURN);
      setState(182);
      expr(0);
      setState(183);
      match(C0Parser::T__0);
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

//----------------- Break_stmtContext ------------------------------------------------------------------

C0Parser::Break_stmtContext::Break_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Break_stmtContext::BREAK() {
  return getToken(C0Parser::BREAK, 0);
}


size_t C0Parser::Break_stmtContext::getRuleIndex() const {
  return C0Parser::RuleBreak_stmt;
}

void C0Parser::Break_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreak_stmt(this);
}

void C0Parser::Break_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreak_stmt(this);
}


antlrcpp::Any C0Parser::Break_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitBreak_stmt(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Break_stmtContext* C0Parser::break_stmt() {
  Break_stmtContext *_localctx = _tracker.createInstance<Break_stmtContext>(_ctx, getState());
  enterRule(_localctx, 28, C0Parser::RuleBreak_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(C0Parser::BREAK);
    setState(188);
    match(C0Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Continue_stmtContext ------------------------------------------------------------------

C0Parser::Continue_stmtContext::Continue_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Continue_stmtContext::CONTINUE() {
  return getToken(C0Parser::CONTINUE, 0);
}


size_t C0Parser::Continue_stmtContext::getRuleIndex() const {
  return C0Parser::RuleContinue_stmt;
}

void C0Parser::Continue_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinue_stmt(this);
}

void C0Parser::Continue_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinue_stmt(this);
}


antlrcpp::Any C0Parser::Continue_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitContinue_stmt(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Continue_stmtContext* C0Parser::continue_stmt() {
  Continue_stmtContext *_localctx = _tracker.createInstance<Continue_stmtContext>(_ctx, getState());
  enterRule(_localctx, 30, C0Parser::RuleContinue_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(C0Parser::CONTINUE);
    setState(191);
    match(C0Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

C0Parser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::ExprContext::LITERAL() {
  return getToken(C0Parser::LITERAL, 0);
}

std::vector<C0Parser::ExprContext *> C0Parser::ExprContext::expr() {
  return getRuleContexts<C0Parser::ExprContext>();
}

C0Parser::ExprContext* C0Parser::ExprContext::expr(size_t i) {
  return getRuleContext<C0Parser::ExprContext>(i);
}

tree::TerminalNode* C0Parser::ExprContext::IDENT() {
  return getToken(C0Parser::IDENT, 0);
}

C0Parser::ArgsContext* C0Parser::ExprContext::args() {
  return getRuleContext<C0Parser::ArgsContext>(0);
}

tree::TerminalNode* C0Parser::ExprContext::EQ() {
  return getToken(C0Parser::EQ, 0);
}

tree::TerminalNode* C0Parser::ExprContext::NE() {
  return getToken(C0Parser::NE, 0);
}

tree::TerminalNode* C0Parser::ExprContext::LE() {
  return getToken(C0Parser::LE, 0);
}

tree::TerminalNode* C0Parser::ExprContext::GE() {
  return getToken(C0Parser::GE, 0);
}

tree::TerminalNode* C0Parser::ExprContext::AND() {
  return getToken(C0Parser::AND, 0);
}

tree::TerminalNode* C0Parser::ExprContext::OR() {
  return getToken(C0Parser::OR, 0);
}


size_t C0Parser::ExprContext::getRuleIndex() const {
  return C0Parser::RuleExpr;
}

void C0Parser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void C0Parser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


antlrcpp::Any C0Parser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


C0Parser::ExprContext* C0Parser::expr() {
   return expr(0);
}

C0Parser::ExprContext* C0Parser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  C0Parser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  C0Parser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, C0Parser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(194);
      match(C0Parser::LITERAL);
      break;
    }

    case 2: {
      setState(195);
      match(C0Parser::T__4);
      setState(196);
      expr(0);
      setState(197);
      match(C0Parser::T__5);
      break;
    }

    case 3: {
      setState(199);
      match(C0Parser::IDENT);
      break;
    }

    case 4: {
      setState(200);
      match(C0Parser::T__10);
      setState(201);
      match(C0Parser::IDENT);
      break;
    }

    case 5: {
      setState(202);
      match(C0Parser::IDENT);
      setState(203);
      match(C0Parser::T__2);
      setState(204);
      expr(0);
      setState(205);
      match(C0Parser::T__3);
      break;
    }

    case 6: {
      setState(207);
      match(C0Parser::IDENT);
      setState(208);
      match(C0Parser::T__4);
      setState(209);
      args();
      setState(210);
      match(C0Parser::T__5);
      break;
    }

    case 7: {
      setState(212);
      match(C0Parser::T__11);
      setState(213);
      expr(20);
      break;
    }

    case 8: {
      setState(214);
      match(C0Parser::T__12);
      setState(215);
      expr(19);
      break;
    }

    case 9: {
      setState(216);
      match(C0Parser::T__13);
      setState(217);
      expr(18);
      break;
    }

    case 10: {
      setState(218);
      match(C0Parser::T__14);
      setState(219);
      expr(17);
      break;
    }

    case 11: {
      setState(220);
      match(C0Parser::T__19);
      setState(221);
      expr(5);
      break;
    }

    case 12: {
      setState(222);
      match(C0Parser::IDENT);
      setState(223);
      match(C0Parser::T__1);
      setState(224);
      expr(2);
      break;
    }

    case 13: {
      setState(225);
      match(C0Parser::IDENT);
      setState(226);
      match(C0Parser::T__2);
      setState(227);
      expr(0);
      setState(228);
      match(C0Parser::T__3);
      setState(229);
      match(C0Parser::T__1);
      setState(230);
      expr(1);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(275);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(273);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(234);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(235);
          match(C0Parser::T__7);
          setState(236);
          expr(17);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(237);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(238);
          match(C0Parser::T__15);
          setState(239);
          expr(16);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(240);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(241);
          match(C0Parser::T__16);
          setState(242);
          expr(15);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(243);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(244);
          match(C0Parser::T__12);
          setState(245);
          expr(14);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(246);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(247);
          match(C0Parser::T__11);
          setState(248);
          expr(13);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(249);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(250);
          match(C0Parser::EQ);
          setState(251);
          expr(12);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(252);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(253);
          match(C0Parser::NE);
          setState(254);
          expr(11);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(255);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(256);
          match(C0Parser::LE);
          setState(257);
          expr(10);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(258);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(259);
          match(C0Parser::T__17);
          setState(260);
          expr(9);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(261);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(262);
          match(C0Parser::GE);
          setState(263);
          expr(8);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(264);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(265);
          match(C0Parser::T__18);
          setState(266);
          expr(7);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(267);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(268);
          match(C0Parser::AND);
          setState(269);
          expr(5);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(270);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(271);
          match(C0Parser::OR);
          setState(272);
          expr(4);
          break;
        }

        } 
      }
      setState(277);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

C0Parser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C0Parser::ExprContext *> C0Parser::ArgsContext::expr() {
  return getRuleContexts<C0Parser::ExprContext>();
}

C0Parser::ExprContext* C0Parser::ArgsContext::expr(size_t i) {
  return getRuleContext<C0Parser::ExprContext>(i);
}


size_t C0Parser::ArgsContext::getRuleIndex() const {
  return C0Parser::RuleArgs;
}

void C0Parser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void C0Parser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


antlrcpp::Any C0Parser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::ArgsContext* C0Parser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 34, C0Parser::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(287);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C0Parser::T__4:
      case C0Parser::T__10:
      case C0Parser::T__11:
      case C0Parser::T__12:
      case C0Parser::T__13:
      case C0Parser::T__14:
      case C0Parser::T__19:
      case C0Parser::IDENT:
      case C0Parser::LITERAL: {
        enterOuterAlt(_localctx, 1);
        setState(278);
        expr(0);
        setState(283);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == C0Parser::T__6) {
          setState(279);
          match(C0Parser::T__6);
          setState(280);
          expr(0);
          setState(285);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case C0Parser::T__5: {
        enterOuterAlt(_localctx, 2);

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
    case 16: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool C0Parser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 6);
    case 11: return precpred(_ctx, 4);
    case 12: return precpred(_ctx, 3);

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
  "program", "decl", "var_decl", "type_spec", "fun_decl", "params", "param", 
  "stmt", "expr_stmt", "while_stmt", "compound_stmt", "local_decl", "if_stmt", 
  "return_stmt", "break_stmt", "continue_stmt", "expr", "args"
};

std::vector<std::string> C0Parser::_literalNames = {
  "", "';'", "'='", "'['", "']'", "'('", "')'", "','", "'*'", "'{'", "'}'", 
  "'&'", "'-'", "'+'", "'--'", "'++'", "'/'", "'%'", "'<'", "'>'", "'!'", 
  "'void'", "'int'", "'while'", "'if'", "'else'", "'return'", "'break'", 
  "'continue'", "'or'", "'and'", "'<='", "'>='", "'=='", "'!='"
};

std::vector<std::string> C0Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "VOID", "INT", "WHILE", "IF", "ELSE", "RETURN", "BREAK", "CONTINUE", 
  "OR", "AND", "LE", "GE", "EQ", "NE", "IDENT", "LITERAL", "DecimalConstant", 
  "OctalConstant", "HexadecimalConstant", "WS"
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
    0x3, 0x2a, 0x124, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x6, 0x2, 0x28, 0xa, 
    0x2, 0xd, 0x2, 0xe, 0x2, 0x29, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2e, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x47, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x55, 0xa, 0x7, 0xc, 0x7, 0xe, 
    0x7, 0x58, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x5c, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x6a, 0xa, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x73, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 
    0xc, 0x80, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x83, 0xb, 0xc, 0x3, 0xc, 0x7, 
    0xc, 0x86, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x89, 0xb, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xa4, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xb4, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
    0xf, 0xbc, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x5, 0x12, 0xeb, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x114, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x117, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x7, 0x13, 0x11c, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x11f, 0xb, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x122, 0xa, 0x13, 0x3, 0x13, 0x2, 0x3, 0x22, 0x14, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x2, 0x3, 0x3, 0x2, 0x17, 0x18, 0x2, 0x143, 
    0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x48, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x72, 0x3, 0x2, 0x2, 0x2, 0x12, 0x74, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x20, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xea, 0x3, 0x2, 0x2, 0x2, 0x24, 0x121, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x28, 0x5, 0x4, 0x3, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2e, 
    0x5, 0x6, 0x4, 0x2, 0x2c, 0x2e, 0x5, 0xa, 0x6, 0x2, 0x2d, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x30, 0x5, 0x8, 0x5, 0x2, 0x30, 0x31, 0x7, 0x25, 0x2, 
    0x2, 0x31, 0x32, 0x7, 0x3, 0x2, 0x2, 0x32, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x34, 0x5, 0x8, 0x5, 0x2, 0x34, 0x35, 0x7, 0x25, 0x2, 0x2, 0x35, 
    0x36, 0x7, 0x4, 0x2, 0x2, 0x36, 0x37, 0x7, 0x26, 0x2, 0x2, 0x37, 0x38, 
    0x7, 0x3, 0x2, 0x2, 0x38, 0x47, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x5, 
    0x8, 0x5, 0x2, 0x3a, 0x3b, 0x7, 0x25, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x4, 
    0x2, 0x2, 0x3c, 0x3d, 0x7, 0x25, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x3, 0x2, 
    0x2, 0x3e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x5, 0x8, 0x5, 0x2, 
    0x40, 0x41, 0x7, 0x25, 0x2, 0x2, 0x41, 0x42, 0x7, 0x5, 0x2, 0x2, 0x42, 
    0x43, 0x7, 0x26, 0x2, 0x2, 0x43, 0x44, 0x7, 0x6, 0x2, 0x2, 0x44, 0x45, 
    0x7, 0x3, 0x2, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 0x2, 0x46, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x33, 0x3, 0x2, 0x2, 0x2, 0x46, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x47, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x49, 0x9, 0x2, 0x2, 0x2, 0x49, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x4b, 0x5, 0x8, 0x5, 0x2, 0x4b, 0x4c, 0x7, 0x25, 0x2, 0x2, 0x4c, 
    0x4d, 0x7, 0x7, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0xc, 0x7, 0x2, 0x4e, 0x4f, 
    0x7, 0x8, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x16, 0xc, 0x2, 0x50, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x56, 0x5, 0xe, 0x8, 0x2, 0x52, 0x53, 0x7, 0x9, 
    0x2, 0x2, 0x53, 0x55, 0x5, 0xe, 0x8, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5c, 0x7, 0x17, 0x2, 0x2, 0x5a, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x51, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x5, 0x8, 0x5, 0x2, 0x5e, 0x5f, 0x7, 0xa, 0x2, 
    0x2, 0x5f, 0x60, 0x7, 0x25, 0x2, 0x2, 0x60, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x62, 0x5, 0x8, 0x5, 0x2, 0x62, 0x63, 0x7, 0x25, 0x2, 0x2, 0x63, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 0x8, 0x5, 0x2, 0x65, 0x66, 
    0x7, 0x25, 0x2, 0x2, 0x66, 0x67, 0x7, 0x5, 0x2, 0x2, 0x67, 0x68, 0x7, 
    0x6, 0x2, 0x2, 0x68, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x69, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x69, 0x61, 0x3, 0x2, 0x2, 0x2, 0x69, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x73, 0x5, 0x12, 0xa, 0x2, 
    0x6c, 0x73, 0x5, 0x16, 0xc, 0x2, 0x6d, 0x73, 0x5, 0x1a, 0xe, 0x2, 0x6e, 
    0x73, 0x5, 0x14, 0xb, 0x2, 0x6f, 0x73, 0x5, 0x1c, 0xf, 0x2, 0x70, 0x73, 
    0x5, 0x1e, 0x10, 0x2, 0x71, 0x73, 0x5, 0x20, 0x11, 0x2, 0x72, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x11, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x5, 0x22, 0x12, 0x2, 
    0x75, 0x76, 0x7, 0x3, 0x2, 0x2, 0x76, 0x13, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x78, 0x7, 0x19, 0x2, 0x2, 0x78, 0x79, 0x7, 0x7, 0x2, 0x2, 0x79, 0x7a, 
    0x5, 0x22, 0x12, 0x2, 0x7a, 0x7b, 0x7, 0x8, 0x2, 0x2, 0x7b, 0x7c, 0x5, 
    0x10, 0x9, 0x2, 0x7c, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x81, 0x7, 0xb, 
    0x2, 0x2, 0x7e, 0x80, 0x5, 0x18, 0xd, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x87, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x5, 0x10, 0x9, 0x2, 0x85, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0xc, 0x2, 
    0x2, 0x8b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x8, 0x5, 0x2, 
    0x8d, 0x8e, 0x7, 0x25, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x3, 0x2, 0x2, 0x8f, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x5, 0x8, 0x5, 0x2, 0x91, 0x92, 
    0x7, 0x25, 0x2, 0x2, 0x92, 0x93, 0x7, 0x4, 0x2, 0x2, 0x93, 0x94, 0x7, 
    0x26, 0x2, 0x2, 0x94, 0x95, 0x7, 0x3, 0x2, 0x2, 0x95, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x97, 0x5, 0x8, 0x5, 0x2, 0x97, 0x98, 0x7, 0x25, 0x2, 
    0x2, 0x98, 0x99, 0x7, 0x4, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x25, 0x2, 0x2, 
    0x9a, 0x9b, 0x7, 0x3, 0x2, 0x2, 0x9b, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x9d, 0x5, 0x8, 0x5, 0x2, 0x9d, 0x9e, 0x7, 0x25, 0x2, 0x2, 0x9e, 0x9f, 
    0x7, 0x5, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x26, 0x2, 0x2, 0xa0, 0xa1, 0x7, 
    0x6, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x3, 0x2, 0x2, 0xa2, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0x8c, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0x96, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x1a, 0x2, 0x2, 0xa6, 
    0xa7, 0x7, 0x7, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x22, 0x12, 0x2, 0xa8, 0xa9, 
    0x7, 0x8, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x10, 0x9, 0x2, 0xaa, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x1a, 0x2, 0x2, 0xac, 0xad, 0x7, 0x7, 
    0x2, 0x2, 0xad, 0xae, 0x5, 0x22, 0x12, 0x2, 0xae, 0xaf, 0x7, 0x8, 0x2, 
    0x2, 0xaf, 0xb0, 0x5, 0x10, 0x9, 0x2, 0xb0, 0xb1, 0x7, 0x1b, 0x2, 0x2, 
    0xb1, 0xb2, 0x5, 0x10, 0x9, 0x2, 0xb2, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x1c, 0x2, 0x2, 0xb6, 0xbc, 0x7, 
    0x3, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x1c, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x22, 
    0x12, 0x2, 0xb9, 0xba, 0x7, 0x3, 0x2, 0x2, 0xba, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xbb, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x1d, 0x2, 0x2, 0xbe, 
    0xbf, 0x7, 0x3, 0x2, 0x2, 0xbf, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 
    0x7, 0x1e, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x3, 0x2, 0x2, 0xc2, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xc3, 0xc4, 0x8, 0x12, 0x1, 0x2, 0xc4, 0xeb, 0x7, 0x26, 
    0x2, 0x2, 0xc5, 0xc6, 0x7, 0x7, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x22, 0x12, 
    0x2, 0xc7, 0xc8, 0x7, 0x8, 0x2, 0x2, 0xc8, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xeb, 0x7, 0x25, 0x2, 0x2, 0xca, 0xcb, 0x7, 0xd, 0x2, 0x2, 0xcb, 
    0xeb, 0x7, 0x25, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0x25, 0x2, 0x2, 0xcd, 0xce, 
    0x7, 0x5, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x22, 0x12, 0x2, 0xcf, 0xd0, 0x7, 
    0x6, 0x2, 0x2, 0xd0, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x25, 
    0x2, 0x2, 0xd2, 0xd3, 0x7, 0x7, 0x2, 0x2, 0xd3, 0xd4, 0x5, 0x24, 0x13, 
    0x2, 0xd4, 0xd5, 0x7, 0x8, 0x2, 0x2, 0xd5, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0xd6, 0xd7, 0x7, 0xe, 0x2, 0x2, 0xd7, 0xeb, 0x5, 0x22, 0x12, 0x16, 0xd8, 
    0xd9, 0x7, 0xf, 0x2, 0x2, 0xd9, 0xeb, 0x5, 0x22, 0x12, 0x15, 0xda, 0xdb, 
    0x7, 0x10, 0x2, 0x2, 0xdb, 0xeb, 0x5, 0x22, 0x12, 0x14, 0xdc, 0xdd, 
    0x7, 0x11, 0x2, 0x2, 0xdd, 0xeb, 0x5, 0x22, 0x12, 0x13, 0xde, 0xdf, 
    0x7, 0x16, 0x2, 0x2, 0xdf, 0xeb, 0x5, 0x22, 0x12, 0x7, 0xe0, 0xe1, 0x7, 
    0x25, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x4, 0x2, 0x2, 0xe2, 0xeb, 0x5, 0x22, 
    0x12, 0x4, 0xe3, 0xe4, 0x7, 0x25, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x5, 0x2, 
    0x2, 0xe5, 0xe6, 0x5, 0x22, 0x12, 0x2, 0xe6, 0xe7, 0x7, 0x6, 0x2, 0x2, 
    0xe7, 0xe8, 0x7, 0x4, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x22, 0x12, 0x3, 0xe9, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xea, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xea, 0xca, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xea, 0xd1, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xea, 0xd8, 0x3, 0x2, 0x2, 
    0x2, 0xea, 0xda, 0x3, 0x2, 0x2, 0x2, 0xea, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xde, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0xeb, 0x115, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 
    0xc, 0x12, 0x2, 0x2, 0xed, 0xee, 0x7, 0xa, 0x2, 0x2, 0xee, 0x114, 0x5, 
    0x22, 0x12, 0x13, 0xef, 0xf0, 0xc, 0x11, 0x2, 0x2, 0xf0, 0xf1, 0x7, 
    0x12, 0x2, 0x2, 0xf1, 0x114, 0x5, 0x22, 0x12, 0x12, 0xf2, 0xf3, 0xc, 
    0x10, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x13, 0x2, 0x2, 0xf4, 0x114, 0x5, 0x22, 
    0x12, 0x11, 0xf5, 0xf6, 0xc, 0xf, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0xf, 0x2, 
    0x2, 0xf7, 0x114, 0x5, 0x22, 0x12, 0x10, 0xf8, 0xf9, 0xc, 0xe, 0x2, 
    0x2, 0xf9, 0xfa, 0x7, 0xe, 0x2, 0x2, 0xfa, 0x114, 0x5, 0x22, 0x12, 0xf, 
    0xfb, 0xfc, 0xc, 0xd, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x23, 0x2, 0x2, 0xfd, 
    0x114, 0x5, 0x22, 0x12, 0xe, 0xfe, 0xff, 0xc, 0xc, 0x2, 0x2, 0xff, 0x100, 
    0x7, 0x24, 0x2, 0x2, 0x100, 0x114, 0x5, 0x22, 0x12, 0xd, 0x101, 0x102, 
    0xc, 0xb, 0x2, 0x2, 0x102, 0x103, 0x7, 0x21, 0x2, 0x2, 0x103, 0x114, 
    0x5, 0x22, 0x12, 0xc, 0x104, 0x105, 0xc, 0xa, 0x2, 0x2, 0x105, 0x106, 
    0x7, 0x14, 0x2, 0x2, 0x106, 0x114, 0x5, 0x22, 0x12, 0xb, 0x107, 0x108, 
    0xc, 0x9, 0x2, 0x2, 0x108, 0x109, 0x7, 0x22, 0x2, 0x2, 0x109, 0x114, 
    0x5, 0x22, 0x12, 0xa, 0x10a, 0x10b, 0xc, 0x8, 0x2, 0x2, 0x10b, 0x10c, 
    0x7, 0x15, 0x2, 0x2, 0x10c, 0x114, 0x5, 0x22, 0x12, 0x9, 0x10d, 0x10e, 
    0xc, 0x6, 0x2, 0x2, 0x10e, 0x10f, 0x7, 0x20, 0x2, 0x2, 0x10f, 0x114, 
    0x5, 0x22, 0x12, 0x7, 0x110, 0x111, 0xc, 0x5, 0x2, 0x2, 0x111, 0x112, 
    0x7, 0x1f, 0x2, 0x2, 0x112, 0x114, 0x5, 0x22, 0x12, 0x6, 0x113, 0xec, 
    0x3, 0x2, 0x2, 0x2, 0x113, 0xef, 0x3, 0x2, 0x2, 0x2, 0x113, 0xf2, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x113, 0xf8, 0x3, 0x2, 
    0x2, 0x2, 0x113, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x113, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0x113, 0x101, 0x3, 0x2, 0x2, 0x2, 0x113, 0x104, 0x3, 0x2, 0x2, 
    0x2, 0x113, 0x107, 0x3, 0x2, 0x2, 0x2, 0x113, 0x10a, 0x3, 0x2, 0x2, 
    0x2, 0x113, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x113, 0x110, 0x3, 0x2, 0x2, 
    0x2, 0x114, 0x117, 0x3, 0x2, 0x2, 0x2, 0x115, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x117, 0x115, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11d, 0x5, 0x22, 0x12, 0x2, 
    0x119, 0x11a, 0x7, 0x9, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x22, 0x12, 0x2, 
    0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 0x3, 0x2, 0x2, 0x2, 
    0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x122, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x120, 0x122, 0x3, 0x2, 0x2, 0x2, 0x121, 0x118, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x25, 0x3, 0x2, 0x2, 0x2, 0x13, 
    0x29, 0x2d, 0x46, 0x56, 0x5b, 0x69, 0x72, 0x81, 0x87, 0xa3, 0xb3, 0xbb, 
    0xea, 0x113, 0x115, 0x11d, 0x121, 
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
