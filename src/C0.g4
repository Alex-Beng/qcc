grammar C0;

compilationUnit
   : (variableDefinition | functionDefinition )* EOF
   ;

functionDefinition
   : ret=typeType name=Identifier'(' (parameter (',' parameter)*)? ')'
            block
   ;

variableDefinition
    : typeType Identifier (',' Identifier)* ';'                         #defVar
    | typeType Identifier ('=' rhs=(CharLiteral|DecimalInteger))? ';'   #defConst
    | typeType Identifier '[' DecimalInteger ']' ';'                    #defArray
    ;

parameter
    : typeType Identifier
    ;
   
typeType
   : type = ('int' | 'char' | 'const int' | 'const char' | 'void')
   ;

block
    : '{' statement* '}'
    ;

statement
    : block                                                              # blockStmt
    | variableDefinition                                                 # varDefStmt
    | 'if' '(' ifCondition ')' ifStatement ('else' elseStatement)?       # ifStmt
    | 'for' '(' expression? ';' forCondition? ';'forStep? ')' statement  # forStmt
    | 'while' '(' whileCondition ')' whileStatement                      # whileStmt
    | 'return' expression? ';'                                           # returnStmt
    | 'break' ';'                                                        # breakStmt
    | 'continue' ';'                                                     # continueStmt
    | expression ';'                                                     # exprStmt
    | ';'                                                                # blankStmt
    ;

ifCondition
    : expression
    ;

ifStatement
    : statement
    ;

elseStatement
    : statement
    ;

whileCondition
    : expression
    ;

whileStatement
    : statement
    ;

forCondition
    : expression
    ;

forStep
    : expression
    ;

expressionList
    : expression (',' expression)*
    ;

expression
    : primary                                            # primaryExpr
    | expression '[' expression ']'                      # arefExpr
    | 'printf' '(' expressionList? ')'                   # printfExpr
    | 'scanf' '(' expressionList? ')'                    # scanfExpr
    | expression '(' expressionList? ')'                 # funcallExpr
    | op=('+' | '-') expression                          # prefixExpr
    | expression op=('*' | '/') expression               # binaryExpr
    | expression op=('+' | '-') expression               # binaryExpr
    | expression op=('<' | '>' | '>=' | '<=') expression # binaryExpr
    | expression op=('==' | '!=' ) expression            # binaryExpr
    | <assoc=right> expression '=' expression            # assignExpr // 指定右结合
    ;

primary
    : '(' expression ')'                                # subExpr
    | Identifier                                        # variableExpr
    | lite=(DecimalInteger|CharLiteral|StringLiteral)   # literalExpr
    ;

CharLiteral
    : '\'' Character '\''
    ;

StringLiteral
    : '"' Character* '"'
    ;


fragment
Character
    : ~["\\\n\r]
    | '\\' ["n\\]
    ;

Identifier
    : [a-zA-Z_] [a-zA-Z_0-9]*
    ;

DecimalInteger
    : [1-9] [0-9]*
    | '0'
    ;

WS
    : [ \t\r\n]+ -> skip
    ;

BLOCK_COMMENT
    : '/*' .*? '*/' -> skip
    ;

LINE_COMMENT
    : '//' ~[\r\n]* -> skip
    ;
