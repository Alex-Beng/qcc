```sh
-------------------------------------------------------------------------------
Language                     files          blank        comment           code
-------------------------------------------------------------------------------
C++                              4            260             49           1562
C/C++ Header                     6            127             66            478
C                                2             17              0             56
Assembly                         1              0              0             42
make                             1             17              0             23
Bourne Shell                     2              5              1              6
------------------------------------------------------------------- ------------
SUM:                            16            426            116           2167
-------------------------------------------------------------------------------
```

代码规模：不带注释空行，共计2167行．

开发环境：Ubuntu 16.04.6, antlr4.8, g++5.4.0

使用工具：antlr4

代码分模块统计(均为使用cloc去除空行及注释)：

1. 词法分析及文法分析：103
2. 中间代码生成：808
3. 目标代码生成：1000
4. 符号表：156

使用antlr4生成c++目标代码进行词法和文法分析，在antlr4生成的语法树上使用visitor模式遍历生成中间代码，再进行目标代码生成．

优化方面只做了指令选择和常量折叠，寄存器分配策略是在内存中分配空间给所有变量（包括临时变量），之后在需要使用的时候，使用clock算法来选择一个寄存器与内存中的变量进行替换．



语言定义

文法与C0大体一致．具体差异如下．

1. 允许const常量和变量之间顺序调换，允许有返回值和无返回值函数定义顺序的调换．
2. 增加了对break, continue语句的支持．
3. 允许在函数中，定义变量与其他语句顺序的调换
4. 对与printf和scanf，意义为分别输出逗号分割的内容以及分别输入逗号分隔的内容．


用例覆盖

1. 代码见 test_code/test_a+b.c

覆盖了文法规则中常量定义，变量定义，变量可以在单条语句中连续定义.printf语句，scanf语句，for语句，break语句，continue语句。

2. 代码见 test_code/test_lexsyn.c

覆盖了文法规则中带返回值函数定义，不带返回值函数定义，变量数组定义，变量以一个表达式赋值，while语句，for语句，break余巨，continue余巨，函数递归定义。

设计说明


文件构成：

1. C0.g4 antlr4语法文件，用于生成词法分析和文法分析代码。
2. debug.h headers.h 用于调试以及用于引入常用头文件的头文件
3. main.cpp 主程序，程序入口
4. IR.h IR.cpp 定义中间代码及其操作
5. IRListener.h IRListener.cpp 用于visitor模式遍历语法树生成中间代码以及用于从中间代码进行目标代码生成。
6. SymTable.h SymTable.cpp 定义符号表及其操作
7. OC.h 定义目标代码。


架构说明

输入为符合C0语法的源代码，使用antlr4生成c++目标代码进行词法和文法分析，在antlr4生成的语法树上使用visitor模式遍历生成中间代码，再进行以MIPS为目标代码的目标代码生成。

IRListener.h 中定义的enter*/exit*函数为antlr4遍历语法树时调用的回调函数，MipsGen为进行目标代码生成的入口函数。

中间表示

中间代码使用四元式（返回值、操作、操作数1、操作数2后面使用rst, op, num1, num2进行缩写）

|  操作名称   | 操作含义  |
|  ----  | ----  |
| ADD  | rst = num1+num2 |
| SUB  | rst = num1-num2 |
| MUL  | rst = num1*num2 |
| DIV  | rst = num1/num2 |
| EQU  | if num1==num2, 跳转到rst(label) |
| NEQ  | if num1!=num2, 跳转到rst(label) |
| GRT  | if num1>num2, 跳转到rst(label) |
| GREQ  | if num1>=num2, 跳转到rst(label) |
| LES  | if num1<num2, 跳转到rst(label) |
| LESEQ  | if num1<=num2, 跳转到rst(label) |
| SAVE_ARR  | rst[num1] = num2 |
| READ_ARR  | rst = num1[num2] |
| SCAN  | 输入num1 |
| PRINT  | 输出num1 |
| PUSH_PARA  | 向函数rst的栈push第num2个参数num1 |
| CALL  | 调用函数rst |
| RET | 返回至调用者 |
| FUNC_END | 函数定义开始 |
| FUNC_BEGIN | 函数定义结束 |
| GOTO | 无条件跳转到rst(label) |
| LABEL | label |
| EXIT | 程序出口 | 


算法设计

表达式求值。由于是直接在语法树上遍历生成的。于是利用antlr提供的ParseTreeProperty储存结点对应的变量，递归地生成临时变量和中间代码。

符号表设计。符号表设计为三个子表组成。一是全局符号表，对应所有全局变量以及函数。二是函数符号表，对应着每一个函数内的函数参数以及局部变量。三是字符串符号表，记录所有出现的字符串。

关键技术

一




