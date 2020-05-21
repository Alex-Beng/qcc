grammar C0;

program : constState varState funcStates mainState;

mainState : 'void' 'main' '(' ')'  expression ;

funcStates : funcState*;

funcState 
   : 'int' VARID '(' param? ')'  expression 
   | 'char' VARID '(' param? ')'  expression 
   | 'void' VARID '(' param? ')'  expression  ;

param 
   : TYPEID VARID (',' TYPEID VARID)*
   ;


varState : (varDefine ';')*;
varDefine 
   : 'int' VARID ('[' UNSIGNINT ']')?
   | 'char' VARID ('[' UNSIGNINT ']')?
   ;

constState: ('const' constDefine ';')* ;
constDefine
    : 'int' VARID '=' INT (',' VARID '=' INT)*  
    | 'char' VARID '=' CHAR (',' VARID '=' CHAR);


expression 
    : VARID '(' (expression (',' expression)*)? ')'  // function call
    | 'if' '(' expression ')' expression ('else' expression)?  // if
    | 'do' expression 'while' '(' expression ')'  // do whlie
    | 'for' '(' expression ';' expression ';' expression  ')' expression // for 
    |  '{' (expression ';')* '}' 
    | expression '*' expression
    | expression '/' expression
    | expression '+' expression
    | expression '-' expression
    | expression '<' expression
    | expression '>' expression
    | expression '<=' expression
    | expression '>' expression
    | expression '>=' expression
    | expression '!=' expression
    | expression '==' expression
    | '!' expression
    | VARID
    | INT
    | CHAR
    | STRING
    | TRUE
    | FALSE
    | VARID '=' expression
    ; 

TRUE : 'true' ;

FALSE : 'false' ;

VARID : [a-zA-Z_][_0-9A-Za-z]*;

INT : ('+'|'-')? UNSIGNINT;

UNSIGNINT : [0-9]+;

CHAR : [a-zA-Z_];

STRING : '"' (~["])* '"';

TYPEID : 'int' | 'char';


OPEN_COMMENT
   : '/*'
   ;

CLOSE_COMMENT
   : '*/'
   ;

COMMENT
   : OPEN_COMMENT (COMMENT | .)*? CLOSE_COMMENT -> skip
   ;

ONE_LINE_COMMENT
   : '//' (~ '\n')* '\n'? -> skip
   ;
WHITESPACE
   : [ \t\r\n\f]+ -> skip
   ;
