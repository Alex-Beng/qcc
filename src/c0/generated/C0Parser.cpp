
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

std::vector<C0Parser::DeclarationContext *> C0Parser::ProgramContext::declaration() {
  return getRuleContexts<C0Parser::DeclarationContext>();
}

C0Parser::DeclarationContext* C0Parser::ProgramContext::declaration(size_t i) {
  return getRuleContext<C0Parser::DeclarationContext>(i);
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
    setState(43); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(42);
      declaration();
      setState(45); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << C0Parser::CONST)
      | (1ULL << C0Parser::VOID)
      | (1ULL << C0Parser::CHAR)
      | (1ULL << C0Parser::INT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

C0Parser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::Var_declarationContext* C0Parser::DeclarationContext::var_declaration() {
  return getRuleContext<C0Parser::Var_declarationContext>(0);
}

C0Parser::Fun_declarationContext* C0Parser::DeclarationContext::fun_declaration() {
  return getRuleContext<C0Parser::Fun_declarationContext>(0);
}


size_t C0Parser::DeclarationContext::getRuleIndex() const {
  return C0Parser::RuleDeclaration;
}

void C0Parser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void C0Parser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any C0Parser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::DeclarationContext* C0Parser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, C0Parser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      var_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(48);
      fun_declaration();
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

//----------------- Var_declarationContext ------------------------------------------------------------------

C0Parser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::TypeIDContext* C0Parser::Var_declarationContext::typeID() {
  return getRuleContext<C0Parser::TypeIDContext>(0);
}

std::vector<tree::TerminalNode *> C0Parser::Var_declarationContext::IDENTITY() {
  return getTokens(C0Parser::IDENTITY);
}

tree::TerminalNode* C0Parser::Var_declarationContext::IDENTITY(size_t i) {
  return getToken(C0Parser::IDENTITY, i);
}

C0Parser::ExpressionContext* C0Parser::Var_declarationContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}


size_t C0Parser::Var_declarationContext::getRuleIndex() const {
  return C0Parser::RuleVar_declaration;
}

void C0Parser::Var_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_declaration(this);
}

void C0Parser::Var_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_declaration(this);
}


antlrcpp::Any C0Parser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Var_declarationContext* C0Parser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 4, C0Parser::RuleVar_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(74);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(51);
      typeID();
      setState(52);
      match(C0Parser::IDENTITY);
      setState(53);
      match(C0Parser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(55);
      typeID();
      setState(56);
      match(C0Parser::IDENTITY);
      setState(57);
      match(C0Parser::T__1);
      setState(58);
      expression(0);
      setState(59);
      match(C0Parser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(61);
      typeID();
      setState(62);
      match(C0Parser::IDENTITY);
      setState(63);
      match(C0Parser::T__1);
      setState(64);
      match(C0Parser::IDENTITY);
      setState(65);
      match(C0Parser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(67);
      typeID();
      setState(68);
      match(C0Parser::IDENTITY);
      setState(69);
      match(C0Parser::T__2);
      setState(70);
      expression(0);
      setState(71);
      match(C0Parser::T__3);
      setState(72);
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

//----------------- TypeIDContext ------------------------------------------------------------------

C0Parser::TypeIDContext::TypeIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::TypeIDContext::INT() {
  return getToken(C0Parser::INT, 0);
}

tree::TerminalNode* C0Parser::TypeIDContext::CHAR() {
  return getToken(C0Parser::CHAR, 0);
}

tree::TerminalNode* C0Parser::TypeIDContext::VOID() {
  return getToken(C0Parser::VOID, 0);
}

tree::TerminalNode* C0Parser::TypeIDContext::CONST() {
  return getToken(C0Parser::CONST, 0);
}


size_t C0Parser::TypeIDContext::getRuleIndex() const {
  return C0Parser::RuleTypeID;
}

void C0Parser::TypeIDContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeID(this);
}

void C0Parser::TypeIDContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeID(this);
}


antlrcpp::Any C0Parser::TypeIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitTypeID(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::TypeIDContext* C0Parser::typeID() {
  TypeIDContext *_localctx = _tracker.createInstance<TypeIDContext>(_ctx, getState());
  enterRule(_localctx, 6, C0Parser::RuleTypeID);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(76);
      match(C0Parser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(77);
      match(C0Parser::CHAR);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(78);
      match(C0Parser::VOID);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(79);
      match(C0Parser::CONST);
      setState(80);
      match(C0Parser::INT);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(81);
      match(C0Parser::CONST);
      setState(82);
      match(C0Parser::CHAR);
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

//----------------- Fun_declarationContext ------------------------------------------------------------------

C0Parser::Fun_declarationContext::Fun_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::TypeIDContext* C0Parser::Fun_declarationContext::typeID() {
  return getRuleContext<C0Parser::TypeIDContext>(0);
}

tree::TerminalNode* C0Parser::Fun_declarationContext::IDENTITY() {
  return getToken(C0Parser::IDENTITY, 0);
}

C0Parser::ParamsContext* C0Parser::Fun_declarationContext::params() {
  return getRuleContext<C0Parser::ParamsContext>(0);
}

C0Parser::Compound_statementContext* C0Parser::Fun_declarationContext::compound_statement() {
  return getRuleContext<C0Parser::Compound_statementContext>(0);
}


size_t C0Parser::Fun_declarationContext::getRuleIndex() const {
  return C0Parser::RuleFun_declaration;
}

void C0Parser::Fun_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFun_declaration(this);
}

void C0Parser::Fun_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFun_declaration(this);
}


antlrcpp::Any C0Parser::Fun_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitFun_declaration(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Fun_declarationContext* C0Parser::fun_declaration() {
  Fun_declarationContext *_localctx = _tracker.createInstance<Fun_declarationContext>(_ctx, getState());
  enterRule(_localctx, 8, C0Parser::RuleFun_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    typeID();
    setState(86);
    match(C0Parser::IDENTITY);
    setState(87);
    match(C0Parser::T__4);
    setState(88);
    params();
    setState(89);
    match(C0Parser::T__5);
    setState(90);
    compound_statement();
   
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
    setState(102);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      param();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == C0Parser::T__6) {
        setState(93);
        match(C0Parser::T__6);
        setState(94);
        param();
        setState(99);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
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

C0Parser::TypeIDContext* C0Parser::ParamContext::typeID() {
  return getRuleContext<C0Parser::TypeIDContext>(0);
}

tree::TerminalNode* C0Parser::ParamContext::IDENTITY() {
  return getToken(C0Parser::IDENTITY, 0);
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
    enterOuterAlt(_localctx, 1);
    setState(104);
    typeID();
    setState(105);
    match(C0Parser::IDENTITY);
   
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

C0Parser::Expression_statementContext* C0Parser::StatementContext::expression_statement() {
  return getRuleContext<C0Parser::Expression_statementContext>(0);
}

C0Parser::Scanf_statementContext* C0Parser::StatementContext::scanf_statement() {
  return getRuleContext<C0Parser::Scanf_statementContext>(0);
}

C0Parser::Printf_statementContext* C0Parser::StatementContext::printf_statement() {
  return getRuleContext<C0Parser::Printf_statementContext>(0);
}

C0Parser::Compound_statementContext* C0Parser::StatementContext::compound_statement() {
  return getRuleContext<C0Parser::Compound_statementContext>(0);
}

C0Parser::If_statementContext* C0Parser::StatementContext::if_statement() {
  return getRuleContext<C0Parser::If_statementContext>(0);
}

C0Parser::While_statementContext* C0Parser::StatementContext::while_statement() {
  return getRuleContext<C0Parser::While_statementContext>(0);
}

C0Parser::For_statementContext* C0Parser::StatementContext::for_statement() {
  return getRuleContext<C0Parser::For_statementContext>(0);
}

C0Parser::Return_statementContext* C0Parser::StatementContext::return_statement() {
  return getRuleContext<C0Parser::Return_statementContext>(0);
}

C0Parser::Break_statementContext* C0Parser::StatementContext::break_statement() {
  return getRuleContext<C0Parser::Break_statementContext>(0);
}

C0Parser::Continue_statementContext* C0Parser::StatementContext::continue_statement() {
  return getRuleContext<C0Parser::Continue_statementContext>(0);
}


size_t C0Parser::StatementContext::getRuleIndex() const {
  return C0Parser::RuleStatement;
}

void C0Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void C0Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any C0Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::StatementContext* C0Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, C0Parser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C0Parser::T__4:
      case C0Parser::T__9:
      case C0Parser::T__10:
      case C0Parser::T__11:
      case C0Parser::T__12:
      case C0Parser::T__18:
      case C0Parser::IDENTITY:
      case C0Parser::LITERAL:
      case C0Parser::CCHAR: {
        enterOuterAlt(_localctx, 1);
        setState(107);
        expression_statement();
        break;
      }

      case C0Parser::SCANF: {
        enterOuterAlt(_localctx, 2);
        setState(108);
        scanf_statement();
        break;
      }

      case C0Parser::PRINTF: {
        enterOuterAlt(_localctx, 3);
        setState(109);
        printf_statement();
        break;
      }

      case C0Parser::T__7: {
        enterOuterAlt(_localctx, 4);
        setState(110);
        compound_statement();
        break;
      }

      case C0Parser::IF: {
        enterOuterAlt(_localctx, 5);
        setState(111);
        if_statement();
        break;
      }

      case C0Parser::WHILE: {
        enterOuterAlt(_localctx, 6);
        setState(112);
        while_statement();
        break;
      }

      case C0Parser::FOR: {
        enterOuterAlt(_localctx, 7);
        setState(113);
        for_statement();
        break;
      }

      case C0Parser::RETURN: {
        enterOuterAlt(_localctx, 8);
        setState(114);
        return_statement();
        break;
      }

      case C0Parser::BREAK: {
        enterOuterAlt(_localctx, 9);
        setState(115);
        break_statement();
        break;
      }

      case C0Parser::CONTINUE: {
        enterOuterAlt(_localctx, 10);
        setState(116);
        continue_statement();
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

//----------------- Expression_statementContext ------------------------------------------------------------------

C0Parser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::ExpressionContext* C0Parser::Expression_statementContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}


size_t C0Parser::Expression_statementContext::getRuleIndex() const {
  return C0Parser::RuleExpression_statement;
}

void C0Parser::Expression_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_statement(this);
}

void C0Parser::Expression_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_statement(this);
}


antlrcpp::Any C0Parser::Expression_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitExpression_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Expression_statementContext* C0Parser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, C0Parser::RuleExpression_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    expression(0);
    setState(120);
    match(C0Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Scanf_statementContext ------------------------------------------------------------------

C0Parser::Scanf_statementContext::Scanf_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Scanf_statementContext::SCANF() {
  return getToken(C0Parser::SCANF, 0);
}

C0Parser::ArgsContext* C0Parser::Scanf_statementContext::args() {
  return getRuleContext<C0Parser::ArgsContext>(0);
}


size_t C0Parser::Scanf_statementContext::getRuleIndex() const {
  return C0Parser::RuleScanf_statement;
}

void C0Parser::Scanf_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScanf_statement(this);
}

void C0Parser::Scanf_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScanf_statement(this);
}


antlrcpp::Any C0Parser::Scanf_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitScanf_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Scanf_statementContext* C0Parser::scanf_statement() {
  Scanf_statementContext *_localctx = _tracker.createInstance<Scanf_statementContext>(_ctx, getState());
  enterRule(_localctx, 18, C0Parser::RuleScanf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(C0Parser::SCANF);
    setState(123);
    match(C0Parser::T__4);
    setState(124);
    args();
    setState(125);
    match(C0Parser::T__5);
    setState(126);
    match(C0Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Printf_statementContext ------------------------------------------------------------------

C0Parser::Printf_statementContext::Printf_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Printf_statementContext::PRINTF() {
  return getToken(C0Parser::PRINTF, 0);
}

tree::TerminalNode* C0Parser::Printf_statementContext::STRING() {
  return getToken(C0Parser::STRING, 0);
}

C0Parser::ArgsContext* C0Parser::Printf_statementContext::args() {
  return getRuleContext<C0Parser::ArgsContext>(0);
}


size_t C0Parser::Printf_statementContext::getRuleIndex() const {
  return C0Parser::RulePrintf_statement;
}

void C0Parser::Printf_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintf_statement(this);
}

void C0Parser::Printf_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintf_statement(this);
}


antlrcpp::Any C0Parser::Printf_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitPrintf_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Printf_statementContext* C0Parser::printf_statement() {
  Printf_statementContext *_localctx = _tracker.createInstance<Printf_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, C0Parser::RulePrintf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      match(C0Parser::PRINTF);
      setState(129);
      match(C0Parser::T__4);
      setState(130);
      match(C0Parser::STRING);
      setState(131);
      match(C0Parser::T__5);
      setState(132);
      match(C0Parser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(133);
      match(C0Parser::PRINTF);
      setState(134);
      match(C0Parser::T__4);
      setState(135);
      match(C0Parser::STRING);
      setState(136);
      args();
      setState(137);
      match(C0Parser::T__5);
      setState(138);
      match(C0Parser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(140);
      match(C0Parser::PRINTF);
      setState(141);
      match(C0Parser::T__4);
      setState(142);
      args();
      setState(143);
      match(C0Parser::T__5);
      setState(144);
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

//----------------- Compound_statementContext ------------------------------------------------------------------

C0Parser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<C0Parser::Local_declarationContext *> C0Parser::Compound_statementContext::local_declaration() {
  return getRuleContexts<C0Parser::Local_declarationContext>();
}

C0Parser::Local_declarationContext* C0Parser::Compound_statementContext::local_declaration(size_t i) {
  return getRuleContext<C0Parser::Local_declarationContext>(i);
}

std::vector<C0Parser::StatementContext *> C0Parser::Compound_statementContext::statement() {
  return getRuleContexts<C0Parser::StatementContext>();
}

C0Parser::StatementContext* C0Parser::Compound_statementContext::statement(size_t i) {
  return getRuleContext<C0Parser::StatementContext>(i);
}


size_t C0Parser::Compound_statementContext::getRuleIndex() const {
  return C0Parser::RuleCompound_statement;
}

void C0Parser::Compound_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_statement(this);
}

void C0Parser::Compound_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_statement(this);
}


antlrcpp::Any C0Parser::Compound_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitCompound_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Compound_statementContext* C0Parser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, C0Parser::RuleCompound_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(C0Parser::T__7);
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << C0Parser::CONST)
      | (1ULL << C0Parser::VOID)
      | (1ULL << C0Parser::CHAR)
      | (1ULL << C0Parser::INT))) != 0)) {
      setState(149);
      local_declaration();
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << C0Parser::T__4)
      | (1ULL << C0Parser::T__7)
      | (1ULL << C0Parser::T__9)
      | (1ULL << C0Parser::T__10)
      | (1ULL << C0Parser::T__11)
      | (1ULL << C0Parser::T__12)
      | (1ULL << C0Parser::T__18)
      | (1ULL << C0Parser::SCANF)
      | (1ULL << C0Parser::PRINTF)
      | (1ULL << C0Parser::WHILE)
      | (1ULL << C0Parser::FOR)
      | (1ULL << C0Parser::IF)
      | (1ULL << C0Parser::RETURN)
      | (1ULL << C0Parser::BREAK)
      | (1ULL << C0Parser::CONTINUE)
      | (1ULL << C0Parser::IDENTITY)
      | (1ULL << C0Parser::LITERAL)
      | (1ULL << C0Parser::CCHAR))) != 0)) {
      setState(155);
      statement();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(C0Parser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Local_declarationContext ------------------------------------------------------------------

C0Parser::Local_declarationContext::Local_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

C0Parser::TypeIDContext* C0Parser::Local_declarationContext::typeID() {
  return getRuleContext<C0Parser::TypeIDContext>(0);
}

std::vector<tree::TerminalNode *> C0Parser::Local_declarationContext::IDENTITY() {
  return getTokens(C0Parser::IDENTITY);
}

tree::TerminalNode* C0Parser::Local_declarationContext::IDENTITY(size_t i) {
  return getToken(C0Parser::IDENTITY, i);
}

C0Parser::ExpressionContext* C0Parser::Local_declarationContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}


size_t C0Parser::Local_declarationContext::getRuleIndex() const {
  return C0Parser::RuleLocal_declaration;
}

void C0Parser::Local_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocal_declaration(this);
}

void C0Parser::Local_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocal_declaration(this);
}


antlrcpp::Any C0Parser::Local_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitLocal_declaration(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Local_declarationContext* C0Parser::local_declaration() {
  Local_declarationContext *_localctx = _tracker.createInstance<Local_declarationContext>(_ctx, getState());
  enterRule(_localctx, 24, C0Parser::RuleLocal_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(186);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(163);
      typeID();
      setState(164);
      match(C0Parser::IDENTITY);
      setState(165);
      match(C0Parser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(167);
      typeID();
      setState(168);
      match(C0Parser::IDENTITY);
      setState(169);
      match(C0Parser::T__1);
      setState(170);
      expression(0);
      setState(171);
      match(C0Parser::T__0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(173);
      typeID();
      setState(174);
      match(C0Parser::IDENTITY);
      setState(175);
      match(C0Parser::T__1);
      setState(176);
      match(C0Parser::IDENTITY);
      setState(177);
      match(C0Parser::T__0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(179);
      typeID();
      setState(180);
      match(C0Parser::IDENTITY);
      setState(181);
      match(C0Parser::T__2);
      setState(182);
      expression(0);
      setState(183);
      match(C0Parser::T__3);
      setState(184);
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

//----------------- If_statementContext ------------------------------------------------------------------

C0Parser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::If_statementContext::IF() {
  return getToken(C0Parser::IF, 0);
}

C0Parser::ExpressionContext* C0Parser::If_statementContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}

C0Parser::StatementContext* C0Parser::If_statementContext::statement() {
  return getRuleContext<C0Parser::StatementContext>(0);
}

tree::TerminalNode* C0Parser::If_statementContext::ELSE() {
  return getToken(C0Parser::ELSE, 0);
}


size_t C0Parser::If_statementContext::getRuleIndex() const {
  return C0Parser::RuleIf_statement;
}

void C0Parser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void C0Parser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


antlrcpp::Any C0Parser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::If_statementContext* C0Parser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 26, C0Parser::RuleIf_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(188);
      match(C0Parser::IF);
      setState(189);
      match(C0Parser::T__4);
      setState(190);
      expression(0);
      setState(191);
      match(C0Parser::T__5);
      setState(192);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(194);
      match(C0Parser::IF);
      setState(195);
      match(C0Parser::T__4);
      setState(196);
      expression(0);
      setState(197);
      match(C0Parser::T__5);
      setState(198);
      match(C0Parser::ELSE);
      setState(199);
      statement();
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

//----------------- While_statementContext ------------------------------------------------------------------

C0Parser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::While_statementContext::WHILE() {
  return getToken(C0Parser::WHILE, 0);
}

C0Parser::ExpressionContext* C0Parser::While_statementContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}

C0Parser::StatementContext* C0Parser::While_statementContext::statement() {
  return getRuleContext<C0Parser::StatementContext>(0);
}


size_t C0Parser::While_statementContext::getRuleIndex() const {
  return C0Parser::RuleWhile_statement;
}

void C0Parser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void C0Parser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


antlrcpp::Any C0Parser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::While_statementContext* C0Parser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 28, C0Parser::RuleWhile_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(C0Parser::WHILE);
    setState(204);
    match(C0Parser::T__4);
    setState(205);
    expression(0);
    setState(206);
    match(C0Parser::T__5);
    setState(207);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

C0Parser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::For_statementContext::FOR() {
  return getToken(C0Parser::FOR, 0);
}

C0Parser::Local_declarationContext* C0Parser::For_statementContext::local_declaration() {
  return getRuleContext<C0Parser::Local_declarationContext>(0);
}

std::vector<C0Parser::ExpressionContext *> C0Parser::For_statementContext::expression() {
  return getRuleContexts<C0Parser::ExpressionContext>();
}

C0Parser::ExpressionContext* C0Parser::For_statementContext::expression(size_t i) {
  return getRuleContext<C0Parser::ExpressionContext>(i);
}

C0Parser::StatementContext* C0Parser::For_statementContext::statement() {
  return getRuleContext<C0Parser::StatementContext>(0);
}


size_t C0Parser::For_statementContext::getRuleIndex() const {
  return C0Parser::RuleFor_statement;
}

void C0Parser::For_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void C0Parser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}


antlrcpp::Any C0Parser::For_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitFor_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::For_statementContext* C0Parser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 30, C0Parser::RuleFor_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    match(C0Parser::FOR);
    setState(210);
    match(C0Parser::T__4);
    setState(211);
    local_declaration();
    setState(212);
    expression(0);
    setState(213);
    match(C0Parser::T__0);
    setState(214);
    expression(0);
    setState(215);
    match(C0Parser::T__5);
    setState(216);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

C0Parser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Return_statementContext::RETURN() {
  return getToken(C0Parser::RETURN, 0);
}

C0Parser::ExpressionContext* C0Parser::Return_statementContext::expression() {
  return getRuleContext<C0Parser::ExpressionContext>(0);
}


size_t C0Parser::Return_statementContext::getRuleIndex() const {
  return C0Parser::RuleReturn_statement;
}

void C0Parser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void C0Parser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}


antlrcpp::Any C0Parser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Return_statementContext* C0Parser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 32, C0Parser::RuleReturn_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(224);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(218);
      match(C0Parser::RETURN);
      setState(219);
      match(C0Parser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(220);
      match(C0Parser::RETURN);
      setState(221);
      expression(0);
      setState(222);
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

//----------------- Break_statementContext ------------------------------------------------------------------

C0Parser::Break_statementContext::Break_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Break_statementContext::BREAK() {
  return getToken(C0Parser::BREAK, 0);
}


size_t C0Parser::Break_statementContext::getRuleIndex() const {
  return C0Parser::RuleBreak_statement;
}

void C0Parser::Break_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreak_statement(this);
}

void C0Parser::Break_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreak_statement(this);
}


antlrcpp::Any C0Parser::Break_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitBreak_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Break_statementContext* C0Parser::break_statement() {
  Break_statementContext *_localctx = _tracker.createInstance<Break_statementContext>(_ctx, getState());
  enterRule(_localctx, 34, C0Parser::RuleBreak_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    match(C0Parser::BREAK);
    setState(227);
    match(C0Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Continue_statementContext ------------------------------------------------------------------

C0Parser::Continue_statementContext::Continue_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* C0Parser::Continue_statementContext::CONTINUE() {
  return getToken(C0Parser::CONTINUE, 0);
}


size_t C0Parser::Continue_statementContext::getRuleIndex() const {
  return C0Parser::RuleContinue_statement;
}

void C0Parser::Continue_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinue_statement(this);
}

void C0Parser::Continue_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinue_statement(this);
}


antlrcpp::Any C0Parser::Continue_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitContinue_statement(this);
  else
    return visitor->visitChildren(this);
}

C0Parser::Continue_statementContext* C0Parser::continue_statement() {
  Continue_statementContext *_localctx = _tracker.createInstance<Continue_statementContext>(_ctx, getState());
  enterRule(_localctx, 36, C0Parser::RuleContinue_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(C0Parser::CONTINUE);
    setState(230);
    match(C0Parser::T__0);
   
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

tree::TerminalNode* C0Parser::ExpressionContext::LITERAL() {
  return getToken(C0Parser::LITERAL, 0);
}

tree::TerminalNode* C0Parser::ExpressionContext::CCHAR() {
  return getToken(C0Parser::CCHAR, 0);
}

std::vector<C0Parser::ExpressionContext *> C0Parser::ExpressionContext::expression() {
  return getRuleContexts<C0Parser::ExpressionContext>();
}

C0Parser::ExpressionContext* C0Parser::ExpressionContext::expression(size_t i) {
  return getRuleContext<C0Parser::ExpressionContext>(i);
}

tree::TerminalNode* C0Parser::ExpressionContext::IDENTITY() {
  return getToken(C0Parser::IDENTITY, 0);
}

C0Parser::ArgsContext* C0Parser::ExpressionContext::args() {
  return getRuleContext<C0Parser::ArgsContext>(0);
}

tree::TerminalNode* C0Parser::ExpressionContext::EQ() {
  return getToken(C0Parser::EQ, 0);
}

tree::TerminalNode* C0Parser::ExpressionContext::NE() {
  return getToken(C0Parser::NE, 0);
}

tree::TerminalNode* C0Parser::ExpressionContext::LE() {
  return getToken(C0Parser::LE, 0);
}

tree::TerminalNode* C0Parser::ExpressionContext::GE() {
  return getToken(C0Parser::GE, 0);
}

tree::TerminalNode* C0Parser::ExpressionContext::AND() {
  return getToken(C0Parser::AND, 0);
}

tree::TerminalNode* C0Parser::ExpressionContext::OR() {
  return getToken(C0Parser::OR, 0);
}


size_t C0Parser::ExpressionContext::getRuleIndex() const {
  return C0Parser::RuleExpression;
}

void C0Parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void C0Parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<C0Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any C0Parser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<C0Visitor*>(visitor))
    return parserVisitor->visitExpression(this);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, C0Parser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(270);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(233);
      match(C0Parser::LITERAL);
      break;
    }

    case 2: {
      setState(234);
      match(C0Parser::CCHAR);
      break;
    }

    case 3: {
      setState(235);
      match(C0Parser::T__4);
      setState(236);
      expression(0);
      setState(237);
      match(C0Parser::T__5);
      break;
    }

    case 4: {
      setState(239);
      match(C0Parser::IDENTITY);
      break;
    }

    case 5: {
      setState(240);
      match(C0Parser::IDENTITY);
      setState(241);
      match(C0Parser::T__2);
      setState(242);
      expression(0);
      setState(243);
      match(C0Parser::T__3);
      break;
    }

    case 6: {
      setState(245);
      match(C0Parser::IDENTITY);
      setState(246);
      match(C0Parser::T__4);
      setState(247);
      args();
      setState(248);
      match(C0Parser::T__5);
      break;
    }

    case 7: {
      setState(250);
      match(C0Parser::T__9);
      setState(251);
      expression(20);
      break;
    }

    case 8: {
      setState(252);
      match(C0Parser::T__10);
      setState(253);
      expression(19);
      break;
    }

    case 9: {
      setState(254);
      match(C0Parser::T__11);
      setState(255);
      expression(18);
      break;
    }

    case 10: {
      setState(256);
      match(C0Parser::T__12);
      setState(257);
      expression(17);
      break;
    }

    case 11: {
      setState(258);
      match(C0Parser::T__18);
      setState(259);
      expression(5);
      break;
    }

    case 12: {
      setState(260);
      match(C0Parser::IDENTITY);
      setState(261);
      match(C0Parser::T__1);
      setState(262);
      expression(2);
      break;
    }

    case 13: {
      setState(263);
      match(C0Parser::IDENTITY);
      setState(264);
      match(C0Parser::T__2);
      setState(265);
      expression(0);
      setState(266);
      match(C0Parser::T__3);
      setState(267);
      match(C0Parser::T__1);
      setState(268);
      expression(1);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(313);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(311);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(272);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(273);
          match(C0Parser::T__13);
          setState(274);
          expression(17);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(275);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(276);
          match(C0Parser::T__14);
          setState(277);
          expression(16);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(278);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(279);
          match(C0Parser::T__15);
          setState(280);
          expression(15);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(281);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(282);
          match(C0Parser::T__10);
          setState(283);
          expression(14);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(284);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(285);
          match(C0Parser::T__9);
          setState(286);
          expression(13);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(287);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(288);
          match(C0Parser::EQ);
          setState(289);
          expression(12);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(290);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(291);
          match(C0Parser::NE);
          setState(292);
          expression(11);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(293);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(294);
          match(C0Parser::LE);
          setState(295);
          expression(10);
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(296);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(297);
          match(C0Parser::T__16);
          setState(298);
          expression(9);
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(299);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(300);
          match(C0Parser::GE);
          setState(301);
          expression(8);
          break;
        }

        case 11: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(302);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(303);
          match(C0Parser::T__17);
          setState(304);
          expression(7);
          break;
        }

        case 12: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(305);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(306);
          match(C0Parser::AND);
          setState(307);
          expression(5);
          break;
        }

        case 13: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(308);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(309);
          match(C0Parser::OR);
          setState(310);
          expression(4);
          break;
        }

        } 
      }
      setState(315);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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

std::vector<C0Parser::ExpressionContext *> C0Parser::ArgsContext::expression() {
  return getRuleContexts<C0Parser::ExpressionContext>();
}

C0Parser::ExpressionContext* C0Parser::ArgsContext::expression(size_t i) {
  return getRuleContext<C0Parser::ExpressionContext>(i);
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
  enterRule(_localctx, 40, C0Parser::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case C0Parser::T__4:
      case C0Parser::T__9:
      case C0Parser::T__10:
      case C0Parser::T__11:
      case C0Parser::T__12:
      case C0Parser::T__18:
      case C0Parser::IDENTITY:
      case C0Parser::LITERAL:
      case C0Parser::CCHAR: {
        enterOuterAlt(_localctx, 1);
        setState(316);
        expression(0);
        setState(321);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == C0Parser::T__6) {
          setState(317);
          match(C0Parser::T__6);
          setState(318);
          expression(0);
          setState(323);
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
    case 19: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool C0Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
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
  "program", "declaration", "var_declaration", "typeID", "fun_declaration", 
  "params", "param", "statement", "expression_statement", "scanf_statement", 
  "printf_statement", "compound_statement", "local_declaration", "if_statement", 
  "while_statement", "for_statement", "return_statement", "break_statement", 
  "continue_statement", "expression", "args"
};

std::vector<std::string> C0Parser::_literalNames = {
  "", "';'", "'='", "'['", "']'", "'('", "')'", "','", "'{'", "'}'", "'-'", 
  "'+'", "'--'", "'++'", "'*'", "'/'", "'%'", "'<'", "'>'", "'!'", "'scanf'", 
  "'printf'", "'const'", "'void'", "'char'", "'int'", "'while'", "'for'", 
  "'if'", "'else'", "'return'", "'break'", "'continue'", "'or'", "'and'", 
  "'<='", "'>='", "'=='", "'!='"
};

std::vector<std::string> C0Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "SCANF", "PRINTF", "CONST", "VOID", "CHAR", "INT", "WHILE", "FOR", 
  "IF", "ELSE", "RETURN", "BREAK", "CONTINUE", "OR", "AND", "LE", "GE", 
  "EQ", "NE", "STRING", "IDENTITY", "LITERAL", "CCHAR", "DecimalConstant", 
  "OctalConstant", "HexadecimalConstant", "ESC", "UNICODE", "HEX", "WS", 
  "COMMENT"
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
    0x3, 0x34, 0x14a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x3, 0x2, 0x6, 0x2, 0x2e, 0xa, 0x2, 
    0xd, 0x2, 0xe, 0x2, 0x2f, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x34, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x56, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x62, 0xa, 0x7, 0xc, 0x7, 0xe, 
    0x7, 0x65, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x69, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x78, 
    0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0x95, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x99, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x9c, 0xb, 0xd, 0x3, 0xd, 0x7, 0xd, 0x9f, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0xa2, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0xbd, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xcc, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xe3, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0x111, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x13a, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0x13d, 0xb, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x142, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x145, 0xb, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x148, 0xa, 0x16, 0x3, 0x16, 0x2, 0x3, 0x28, 0x17, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2, 0x2, 0x2, 0x16d, 
    0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x33, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x55, 0x3, 0x2, 0x2, 0x2, 0xa, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x68, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x77, 0x3, 0x2, 0x2, 0x2, 0x12, 0x79, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x94, 0x3, 0x2, 0x2, 0x2, 0x18, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x20, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x28, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x147, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2e, 0x5, 0x4, 0x3, 0x2, 0x2d, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x34, 0x5, 0x6, 0x4, 0x2, 0x32, 0x34, 0x5, 0xa, 
    0x6, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x5, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x5, 0x8, 0x5, 0x2, 
    0x36, 0x37, 0x7, 0x2a, 0x2, 0x2, 0x37, 0x38, 0x7, 0x3, 0x2, 0x2, 0x38, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x5, 0x8, 0x5, 0x2, 0x3a, 0x3b, 
    0x7, 0x2a, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x4, 0x2, 0x2, 0x3c, 0x3d, 0x5, 
    0x28, 0x15, 0x2, 0x3d, 0x3e, 0x7, 0x3, 0x2, 0x2, 0x3e, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x40, 0x5, 0x8, 0x5, 0x2, 0x40, 0x41, 0x7, 0x2a, 0x2, 
    0x2, 0x41, 0x42, 0x7, 0x4, 0x2, 0x2, 0x42, 0x43, 0x7, 0x2a, 0x2, 0x2, 
    0x43, 0x44, 0x7, 0x3, 0x2, 0x2, 0x44, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x46, 0x5, 0x8, 0x5, 0x2, 0x46, 0x47, 0x7, 0x2a, 0x2, 0x2, 0x47, 0x48, 
    0x7, 0x5, 0x2, 0x2, 0x48, 0x49, 0x5, 0x28, 0x15, 0x2, 0x49, 0x4a, 0x7, 
    0x6, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x3, 0x2, 0x2, 0x4b, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x56, 0x7, 0x1b, 0x2, 0x2, 0x4f, 
    0x56, 0x7, 0x1a, 0x2, 0x2, 0x50, 0x56, 0x7, 0x19, 0x2, 0x2, 0x51, 0x52, 
    0x7, 0x18, 0x2, 0x2, 0x52, 0x56, 0x7, 0x1b, 0x2, 0x2, 0x53, 0x54, 0x7, 
    0x18, 0x2, 0x2, 0x54, 0x56, 0x7, 0x1a, 0x2, 0x2, 0x55, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x55, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x55, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x51, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x9, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x5, 0x8, 0x5, 0x2, 0x58, 
    0x59, 0x7, 0x2a, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x7, 0x2, 0x2, 0x5a, 0x5b, 
    0x5, 0xc, 0x7, 0x2, 0x5b, 0x5c, 0x7, 0x8, 0x2, 0x2, 0x5c, 0x5d, 0x5, 
    0x18, 0xd, 0x2, 0x5d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x63, 0x5, 0xe, 
    0x8, 0x2, 0x5f, 0x60, 0x7, 0x9, 0x2, 0x2, 0x60, 0x62, 0x5, 0xe, 0x8, 
    0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 
    0x7, 0x19, 0x2, 0x2, 0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x69, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x8, 0x5, 
    0x2, 0x6b, 0x6c, 0x7, 0x2a, 0x2, 0x2, 0x6c, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0x78, 0x5, 0x12, 0xa, 0x2, 0x6e, 0x78, 0x5, 0x14, 0xb, 0x2, 0x6f, 
    0x78, 0x5, 0x16, 0xc, 0x2, 0x70, 0x78, 0x5, 0x18, 0xd, 0x2, 0x71, 0x78, 
    0x5, 0x1c, 0xf, 0x2, 0x72, 0x78, 0x5, 0x1e, 0x10, 0x2, 0x73, 0x78, 0x5, 
    0x20, 0x11, 0x2, 0x74, 0x78, 0x5, 0x22, 0x12, 0x2, 0x75, 0x78, 0x5, 
    0x24, 0x13, 0x2, 0x76, 0x78, 0x5, 0x26, 0x14, 0x2, 0x77, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x77, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x70, 0x3, 0x2, 0x2, 0x2, 0x77, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x77, 0x72, 0x3, 0x2, 0x2, 0x2, 0x77, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x74, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x11, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 
    0x5, 0x28, 0x15, 0x2, 0x7a, 0x7b, 0x7, 0x3, 0x2, 0x2, 0x7b, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x16, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x7, 
    0x2, 0x2, 0x7e, 0x7f, 0x5, 0x2a, 0x16, 0x2, 0x7f, 0x80, 0x7, 0x8, 0x2, 
    0x2, 0x80, 0x81, 0x7, 0x3, 0x2, 0x2, 0x81, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x83, 0x7, 0x17, 0x2, 0x2, 0x83, 0x84, 0x7, 0x7, 0x2, 0x2, 0x84, 
    0x85, 0x7, 0x29, 0x2, 0x2, 0x85, 0x86, 0x7, 0x8, 0x2, 0x2, 0x86, 0x95, 
    0x7, 0x3, 0x2, 0x2, 0x87, 0x88, 0x7, 0x17, 0x2, 0x2, 0x88, 0x89, 0x7, 
    0x7, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x29, 0x2, 0x2, 0x8a, 0x8b, 0x5, 0x2a, 
    0x16, 0x2, 0x8b, 0x8c, 0x7, 0x8, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x3, 0x2, 
    0x2, 0x8d, 0x95, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x17, 0x2, 0x2, 
    0x8f, 0x90, 0x7, 0x7, 0x2, 0x2, 0x90, 0x91, 0x5, 0x2a, 0x16, 0x2, 0x91, 
    0x92, 0x7, 0x8, 0x2, 0x2, 0x92, 0x93, 0x7, 0x3, 0x2, 0x2, 0x93, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x82, 0x3, 0x2, 0x2, 0x2, 0x94, 0x87, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x95, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x9a, 0x7, 0xa, 0x2, 0x2, 0x97, 0x99, 0x5, 0x1a, 0xe, 
    0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 
    0x5, 0x10, 0x9, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa4, 0x7, 0xb, 0x2, 0x2, 0xa4, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa6, 0x5, 0x8, 0x5, 0x2, 0xa6, 0xa7, 0x7, 0x2a, 0x2, 0x2, 0xa7, 
    0xa8, 0x7, 0x3, 0x2, 0x2, 0xa8, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 
    0x5, 0x8, 0x5, 0x2, 0xaa, 0xab, 0x7, 0x2a, 0x2, 0x2, 0xab, 0xac, 0x7, 
    0x4, 0x2, 0x2, 0xac, 0xad, 0x5, 0x28, 0x15, 0x2, 0xad, 0xae, 0x7, 0x3, 
    0x2, 0x2, 0xae, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x8, 0x5, 
    0x2, 0xb0, 0xb1, 0x7, 0x2a, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x4, 0x2, 0x2, 
    0xb2, 0xb3, 0x7, 0x2a, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x3, 0x2, 0x2, 0xb4, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x5, 0x8, 0x5, 0x2, 0xb6, 0xb7, 
    0x7, 0x2a, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x5, 0x2, 0x2, 0xb8, 0xb9, 0x5, 
    0x28, 0x15, 0x2, 0xb9, 0xba, 0x7, 0x6, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x3, 
    0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xbf, 0x7, 0x1e, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0x7, 0x2, 0x2, 0xc0, 0xc1, 
    0x5, 0x28, 0x15, 0x2, 0xc1, 0xc2, 0x7, 0x8, 0x2, 0x2, 0xc2, 0xc3, 0x5, 
    0x10, 0x9, 0x2, 0xc3, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x1e, 
    0x2, 0x2, 0xc5, 0xc6, 0x7, 0x7, 0x2, 0x2, 0xc6, 0xc7, 0x5, 0x28, 0x15, 
    0x2, 0xc7, 0xc8, 0x7, 0x8, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x1f, 0x2, 0x2, 
    0xc9, 0xca, 0x5, 0x10, 0x9, 0x2, 0xca, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x1c, 0x2, 0x2, 0xce, 0xcf, 0x7, 
    0x7, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0x28, 0x15, 0x2, 0xd0, 0xd1, 0x7, 0x8, 
    0x2, 0x2, 0xd1, 0xd2, 0x5, 0x10, 0x9, 0x2, 0xd2, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd4, 0x7, 0x1d, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x7, 0x2, 0x2, 
    0xd5, 0xd6, 0x5, 0x1a, 0xe, 0x2, 0xd6, 0xd7, 0x5, 0x28, 0x15, 0x2, 0xd7, 
    0xd8, 0x7, 0x3, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x28, 0x15, 0x2, 0xd9, 0xda, 
    0x7, 0x8, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x10, 0x9, 0x2, 0xdb, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x20, 0x2, 0x2, 0xdd, 0xe3, 0x7, 0x3, 
    0x2, 0x2, 0xde, 0xdf, 0x7, 0x20, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x28, 0x15, 
    0x2, 0xe0, 0xe1, 0x7, 0x3, 0x2, 0x2, 0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x21, 0x2, 0x2, 0xe5, 0xe6, 
    0x7, 0x3, 0x2, 0x2, 0xe6, 0x25, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 
    0x22, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x3, 0x2, 0x2, 0xe9, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xeb, 0x8, 0x15, 0x1, 0x2, 0xeb, 0x111, 0x7, 0x2b, 0x2, 
    0x2, 0xec, 0x111, 0x7, 0x2c, 0x2, 0x2, 0xed, 0xee, 0x7, 0x7, 0x2, 0x2, 
    0xee, 0xef, 0x5, 0x28, 0x15, 0x2, 0xef, 0xf0, 0x7, 0x8, 0x2, 0x2, 0xf0, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0xf1, 0x111, 0x7, 0x2a, 0x2, 0x2, 0xf2, 0xf3, 
    0x7, 0x2a, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x5, 0x2, 0x2, 0xf4, 0xf5, 0x5, 
    0x28, 0x15, 0x2, 0xf5, 0xf6, 0x7, 0x6, 0x2, 0x2, 0xf6, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf8, 0x7, 0x2a, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x7, 0x2, 
    0x2, 0xf9, 0xfa, 0x5, 0x2a, 0x16, 0x2, 0xfa, 0xfb, 0x7, 0x8, 0x2, 0x2, 
    0xfb, 0x111, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0xc, 0x2, 0x2, 0xfd, 
    0x111, 0x5, 0x28, 0x15, 0x16, 0xfe, 0xff, 0x7, 0xd, 0x2, 0x2, 0xff, 
    0x111, 0x5, 0x28, 0x15, 0x15, 0x100, 0x101, 0x7, 0xe, 0x2, 0x2, 0x101, 
    0x111, 0x5, 0x28, 0x15, 0x14, 0x102, 0x103, 0x7, 0xf, 0x2, 0x2, 0x103, 
    0x111, 0x5, 0x28, 0x15, 0x13, 0x104, 0x105, 0x7, 0x15, 0x2, 0x2, 0x105, 
    0x111, 0x5, 0x28, 0x15, 0x7, 0x106, 0x107, 0x7, 0x2a, 0x2, 0x2, 0x107, 
    0x108, 0x7, 0x4, 0x2, 0x2, 0x108, 0x111, 0x5, 0x28, 0x15, 0x4, 0x109, 
    0x10a, 0x7, 0x2a, 0x2, 0x2, 0x10a, 0x10b, 0x7, 0x5, 0x2, 0x2, 0x10b, 
    0x10c, 0x5, 0x28, 0x15, 0x2, 0x10c, 0x10d, 0x7, 0x6, 0x2, 0x2, 0x10d, 
    0x10e, 0x7, 0x4, 0x2, 0x2, 0x10e, 0x10f, 0x5, 0x28, 0x15, 0x3, 0x10f, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x110, 0xea, 0x3, 0x2, 0x2, 0x2, 0x110, 0xec, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0xed, 0x3, 0x2, 0x2, 0x2, 0x110, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0xf2, 0x3, 0x2, 0x2, 0x2, 0x110, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0x110, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x110, 0xfe, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x100, 0x3, 0x2, 0x2, 0x2, 0x110, 0x102, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x104, 0x3, 0x2, 0x2, 0x2, 0x110, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x109, 0x3, 0x2, 0x2, 0x2, 0x111, 0x13b, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x113, 0xc, 0x12, 0x2, 0x2, 0x113, 0x114, 0x7, 0x10, 0x2, 
    0x2, 0x114, 0x13a, 0x5, 0x28, 0x15, 0x13, 0x115, 0x116, 0xc, 0x11, 0x2, 
    0x2, 0x116, 0x117, 0x7, 0x11, 0x2, 0x2, 0x117, 0x13a, 0x5, 0x28, 0x15, 
    0x12, 0x118, 0x119, 0xc, 0x10, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x12, 0x2, 
    0x2, 0x11a, 0x13a, 0x5, 0x28, 0x15, 0x11, 0x11b, 0x11c, 0xc, 0xf, 0x2, 
    0x2, 0x11c, 0x11d, 0x7, 0xd, 0x2, 0x2, 0x11d, 0x13a, 0x5, 0x28, 0x15, 
    0x10, 0x11e, 0x11f, 0xc, 0xe, 0x2, 0x2, 0x11f, 0x120, 0x7, 0xc, 0x2, 
    0x2, 0x120, 0x13a, 0x5, 0x28, 0x15, 0xf, 0x121, 0x122, 0xc, 0xd, 0x2, 
    0x2, 0x122, 0x123, 0x7, 0x27, 0x2, 0x2, 0x123, 0x13a, 0x5, 0x28, 0x15, 
    0xe, 0x124, 0x125, 0xc, 0xc, 0x2, 0x2, 0x125, 0x126, 0x7, 0x28, 0x2, 
    0x2, 0x126, 0x13a, 0x5, 0x28, 0x15, 0xd, 0x127, 0x128, 0xc, 0xb, 0x2, 
    0x2, 0x128, 0x129, 0x7, 0x25, 0x2, 0x2, 0x129, 0x13a, 0x5, 0x28, 0x15, 
    0xc, 0x12a, 0x12b, 0xc, 0xa, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x13, 0x2, 
    0x2, 0x12c, 0x13a, 0x5, 0x28, 0x15, 0xb, 0x12d, 0x12e, 0xc, 0x9, 0x2, 
    0x2, 0x12e, 0x12f, 0x7, 0x26, 0x2, 0x2, 0x12f, 0x13a, 0x5, 0x28, 0x15, 
    0xa, 0x130, 0x131, 0xc, 0x8, 0x2, 0x2, 0x131, 0x132, 0x7, 0x14, 0x2, 
    0x2, 0x132, 0x13a, 0x5, 0x28, 0x15, 0x9, 0x133, 0x134, 0xc, 0x6, 0x2, 
    0x2, 0x134, 0x135, 0x7, 0x24, 0x2, 0x2, 0x135, 0x13a, 0x5, 0x28, 0x15, 
    0x7, 0x136, 0x137, 0xc, 0x5, 0x2, 0x2, 0x137, 0x138, 0x7, 0x23, 0x2, 
    0x2, 0x138, 0x13a, 0x5, 0x28, 0x15, 0x6, 0x139, 0x112, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x115, 0x3, 0x2, 0x2, 0x2, 0x139, 0x118, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x139, 0x11e, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x121, 0x3, 0x2, 0x2, 0x2, 0x139, 0x124, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x127, 0x3, 0x2, 0x2, 0x2, 0x139, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x139, 0x130, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x133, 0x3, 0x2, 0x2, 0x2, 0x139, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x13a, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x143, 0x5, 0x28, 0x15, 0x2, 
    0x13f, 0x140, 0x7, 0x9, 0x2, 0x2, 0x140, 0x142, 0x5, 0x28, 0x15, 0x2, 
    0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x142, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 
    0x144, 0x148, 0x3, 0x2, 0x2, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x148, 0x3, 0x2, 0x2, 0x2, 0x147, 0x13e, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x2f, 0x33, 0x4c, 0x55, 0x63, 0x68, 0x77, 0x94, 0x9a, 0xa0, 0xbc, 0xcb, 
    0xe2, 0x110, 0x139, 0x13b, 0x143, 0x147, 
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
