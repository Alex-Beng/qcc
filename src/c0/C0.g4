grammar C0;

compilationUnit
   : (variableDefinition | functionDefinition )* EOF
   ;

functionDefinition
   : ret=typeType name=Identifier'(' (parameter (',' parameter)*)? ')'
            block
   ;

variableDefinition
    : typeType Identifier ('=' expression)? ';'         #defVar
    | typeType Identifier '[' expression ']' ';'        #defArray
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
    | 'if' '(' expression ')' statement ('else' statement)?              # ifStmt
    | 'for' '(' init=expression? ';' cond=expression? ';'
                                     incr=expression? ')' statement      # forStmt
    | 'while' '(' expression ')' statement                               # whileStmt
    | 'return' expression? ';'                                           # returnStmt
    | 'break' ';'                                                        # breakStmt
    | 'continue' ';'                                                     # continueStmt
    | expression ';'                                                     # exprStmt
    | ';'                                                                # blankStmt
    ;

expressionList
    : expression (',' expression)*
    ;

expression
    : primary                                            # primaryExpr
    | expression '[' expression ']'                      # arefExpr
    | expression '(' expressionList? ')'                 # funcallExpr
    | expression op=('++' | '--')                        # suffixExpr
    | op=('+' | '-' | '++' | '--') expression            # prefixExpr
    | op=('~' | '!' ) expression                         # prefixExpr
    | expression op=('*' | '/' | '%') expression         # binaryExpr
    | expression op=('+' | '-') expression               # binaryExpr
    | expression op=('<<' | '>>') expression             # binaryExpr
    | expression op=('<' | '>' | '>=' | '<=') expression # binaryExpr
    | expression op=('==' | '!=' ) expression            # binaryExpr
    | expression op='&' expression                       # binaryExpr
    | expression op='^' expression                       # binaryExpr
    | expression op='|' expression                       # binaryExpr
    | expression '&&' expression                         # logicalAndExpr
    | expression '||' expression                         # logicalOrExpr
    | <assoc=right> expression '=' expression            # assignExpr // 指定右结合
    ;

primary
    : '(' expression ')'   # subExpr
    | Identifier           # variableExpr
    | literal              # literalExpr
    ;

literal
    : DecimalInteger          # DecIntegerConst
    | CharLiteral             # CharConst
    | StringLiteral           # StringConst
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
