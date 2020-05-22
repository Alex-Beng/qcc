
// Generated from C0.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  C0Lexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, SCANF = 20, 
    PRINTF = 21, CONST = 22, VOID = 23, CHAR = 24, INT = 25, WHILE = 26, 
    FOR = 27, IF = 28, ELSE = 29, RETURN = 30, BREAK = 31, CONTINUE = 32, 
    OR = 33, AND = 34, LE = 35, GE = 36, EQ = 37, NE = 38, STRING = 39, 
    IDENTITY = 40, LITERAL = 41, CCHAR = 42, DecimalConstant = 43, OctalConstant = 44, 
    HexadecimalConstant = 45, ESC = 46, UNICODE = 47, HEX = 48, WS = 49, 
    COMMENT = 50
  };

  C0Lexer(antlr4::CharStream *input);
  ~C0Lexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

