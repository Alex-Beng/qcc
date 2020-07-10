#ifndef OC_H
#define OC_H

#include "headers.h"
#include "SymTable.h"
#include "IR.h"

namespace MIPS {
    constexpr int data_origin = 0x10010000;

    constexpr auto SW = "sw";
    constexpr auto LW = "lw";
    constexpr auto SB = "sb";
    constexpr auto LBU = "lbu";
    constexpr auto LI = "li";
    constexpr auto ADD = "add";
    constexpr auto ADDI = "addi";
    constexpr auto SUB = "sub";
    constexpr auto BEQ = "beq";
    constexpr auto BNE = "bne";
    constexpr auto BGE = "bge";
    constexpr auto BGEZ = "bgez";
    constexpr auto BGT = "bgt";
    constexpr auto BGTZ = "bgtz";
    constexpr auto BLE = "ble";
    constexpr auto BLEZ = "blez";
    constexpr auto BLT = "blt";
    constexpr auto BLTZ = "bltz";
    constexpr auto J = "j";
    constexpr auto JAL = "jal";
    constexpr auto JR = "jr";
    constexpr auto MUL = "mul";
    constexpr auto DIV = "div";
    constexpr auto SYSCALL = "syscall";
    constexpr auto LA = "la";
    constexpr auto SLL = "sll";
    constexpr auto MOVE = "move";

    constexpr auto ZERO = "$0";
    constexpr auto V0 = "$v0";
    constexpr auto A0 = "$a0";

    constexpr auto T8 = "$t8";
    constexpr auto T9 = "$t9";
    constexpr auto S8 = "$fp";

    constexpr auto SP = "$sp";
    constexpr auto RA = "$ra";

    constexpr auto RETV0 = "RET_v0";

}

// 运行时状态
// 用于寄存器分配
// class MipsRuntime {
// public:
//     enum {t0=0, t1, t2, t3, t4, t5, t6, t7, t8, t9, s0, s1, s2, s3, s4, s5, s7};
//     // t0 ~ t9, s0 ~ s7
//     // 前10t 后8s
//     bool clk_used[17];
//     bool reg_used[17];
//     int clk_ptr;

//     std::string reg_content[17];
// 	std::map<std::string, VarInfo> sym_tab;

//     void init(SymbolTable& st) {
//         for (auto i = 0; i < 17; i++) {
//             clk_used[i] = false;
//             reg_used[i] = false;
//             reg_content[i] = "";
//         }
//         clk_ptr = 0;
//         sym_tab = st;
//     }
    
// };

// class OC {
// public:
//     SymbolTable sym_tab;

//     // 生成的mips codes
//     std::vector<std::string> oc_codes;

//     constexpr auto data_origin = 0x10010000;
// public:
//     // 用符号表和ir构造
//     OC(SymbolTable&, IR&);
//     ~OC();
// };



#endif