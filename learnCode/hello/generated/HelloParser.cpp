
// Generated from Hello.g4 by ANTLR 4.8


#include "HelloListener.h"
#include "HelloVisitor.h"

#include "HelloParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

HelloParser::HelloParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HelloParser::~HelloParser() {
  delete _interpreter;
}

std::string HelloParser::getGrammarFileName() const {
  return "Hello.g4";
}

const std::vector<std::string>& HelloParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HelloParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- RContext ------------------------------------------------------------------

HelloParser::RContext::RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::RContext::ID() {
  return getToken(HelloParser::ID, 0);
}


size_t HelloParser::RContext::getRuleIndex() const {
  return HelloParser::RuleR;
}

void HelloParser::RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HelloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterR(this);
}

void HelloParser::RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HelloListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitR(this);
}


antlrcpp::Any HelloParser::RContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitR(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::RContext* HelloParser::r() {
  RContext *_localctx = _tracker.createInstance<RContext>(_ctx, getState());
  enterRule(_localctx, 0, HelloParser::RuleR);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2);
    match(HelloParser::T__0);
    setState(3);
    match(HelloParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> HelloParser::_decisionToDFA;
atn::PredictionContextCache HelloParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HelloParser::_atn;
std::vector<uint16_t> HelloParser::_serializedATN;

std::vector<std::string> HelloParser::_ruleNames = {
  "r"
};

std::vector<std::string> HelloParser::_literalNames = {
  "", "'hello'"
};

std::vector<std::string> HelloParser::_symbolicNames = {
  "", "", "ID", "WS"
};

dfa::Vocabulary HelloParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HelloParser::_tokenNames;

HelloParser::Initializer::Initializer() {
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
    0x3, 0x5, 0x8, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 0x2, 0x2, 0x6, 0x2, 0x4, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x5, 0x7, 0x3, 0x2, 0x2, 0x5, 0x6, 0x7, 0x4, 0x2, 0x2, 0x6, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HelloParser::Initializer HelloParser::_init;
