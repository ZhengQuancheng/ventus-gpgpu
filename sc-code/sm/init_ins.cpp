#include "BASE.h"
void BASE::INIT_INS(int warp_id)
{
    WARPS[warp_id].ireg[0] = I_TYPE(addi_, 1, 0, 915);
    WARPS[warp_id].ireg[1] = I_TYPE(addi_, 2, 0, 713);
    WARPS[warp_id].ireg[2] = I_TYPE(addi_, 3, 0, 919);
    WARPS[warp_id].ireg[3] = I_TYPE(addi_, 4, 0, 533);
    WARPS[warp_id].ireg[4] = I_TYPE(addi_, 5, 0, 706);
    WARPS[warp_id].ireg[5] = I_TYPE(addi_, 6, 0, 738);
    WARPS[warp_id].ireg[6] = I_TYPE(addi_, 7, 0, 661);
    WARPS[warp_id].ireg[7] = I_TYPE(addi_, 8, 0, 715);
    WARPS[warp_id].ireg[8] = I_TYPE(addi_, 9, 0, 980);
    WARPS[warp_id].ireg[9] = I_TYPE(addi_, 10, 0, 540);
    WARPS[warp_id].ireg[10] = I_TYPE(addi_, 11, 0, 691);
    WARPS[warp_id].ireg[11] = I_TYPE(addi_, 12, 0, 608);
    WARPS[warp_id].ireg[12] = I_TYPE(addi_, 13, 0, 954);
    WARPS[warp_id].ireg[13] = I_TYPE(addi_, 14, 0, 575);
    WARPS[warp_id].ireg[14] = I_TYPE(addi_, 15, 0, 614);
    WARPS[warp_id].ireg[15] = I_TYPE(addi_, 16, 0, 652);
    WARPS[warp_id].ireg[16] = I_TYPE(addi_, 17, 0, 778);
    WARPS[warp_id].ireg[17] = I_TYPE(addi_, 18, 0, 735);
    WARPS[warp_id].ireg[18] = I_TYPE(addi_, 19, 0, 989);
    WARPS[warp_id].ireg[19] = I_TYPE(addi_, 20, 0, 964);
    WARPS[warp_id].ireg[20] = I_TYPE(addi_, 21, 0, 800);
    WARPS[warp_id].ireg[21] = I_TYPE(addi_, 22, 0, 626);
    WARPS[warp_id].ireg[22] = I_TYPE(addi_, 23, 0, 871);
    WARPS[warp_id].ireg[23] = I_TYPE(addi_, 24, 0, 862);
    WARPS[warp_id].ireg[24] = I_TYPE(addi_, 25, 0, 837);
    WARPS[warp_id].ireg[25] = I_TYPE(addi_, 26, 0, 992);
    WARPS[warp_id].ireg[26] = I_TYPE(addi_, 27, 0, 912);
    WARPS[warp_id].ireg[27] = I_TYPE(addi_, 28, 0, 870);
    WARPS[warp_id].ireg[28] = I_TYPE(addi_, 29, 0, 954);
    WARPS[warp_id].ireg[29] = I_TYPE(addi_, 30, 0, 787);
    WARPS[warp_id].ireg[30] = I_TYPE(addi_, 31, 0, 633);
    WARPS[warp_id].ireg[31] = I_TYPE(vaddvx_, 0, 31, 0);
    WARPS[warp_id].ireg[32] = I_TYPE(vaddvx_, 1, 31, 1);
    WARPS[warp_id].ireg[33] = I_TYPE(vaddvx_, 2, 31, 2);
    WARPS[warp_id].ireg[34] = I_TYPE(vaddvx_, 3, 31, 3);
    WARPS[warp_id].ireg[35] = I_TYPE(vaddvx_, 4, 31, 4);
    WARPS[warp_id].ireg[36] = I_TYPE(vaddvx_, 5, 31, 5);
    WARPS[warp_id].ireg[37] = I_TYPE(vaddvx_, 6, 31, 6);
    WARPS[warp_id].ireg[38] = I_TYPE(vaddvx_, 7, 31, 7);
    WARPS[warp_id].ireg[39] = I_TYPE(vaddvx_, 8, 31, 8);
    WARPS[warp_id].ireg[40] = I_TYPE(vaddvx_, 9, 31, 9);
    WARPS[warp_id].ireg[41] = I_TYPE(vaddvx_, 10, 31, 10);
    WARPS[warp_id].ireg[42] = I_TYPE(vaddvx_, 11, 31, 11);
    WARPS[warp_id].ireg[43] = I_TYPE(vaddvx_, 12, 31, 12);
    WARPS[warp_id].ireg[44] = I_TYPE(vaddvx_, 13, 31, 13);
    WARPS[warp_id].ireg[45] = I_TYPE(vaddvx_, 14, 31, 14);
    WARPS[warp_id].ireg[46] = I_TYPE(vaddvx_, 15, 31, 15);
    WARPS[warp_id].ireg[47] = I_TYPE(vaddvx_, 16, 31, 16);
    WARPS[warp_id].ireg[48] = I_TYPE(vaddvx_, 17, 31, 17);
    WARPS[warp_id].ireg[49] = I_TYPE(vaddvx_, 18, 31, 18);
    WARPS[warp_id].ireg[50] = I_TYPE(vaddvx_, 19, 31, 19);
    WARPS[warp_id].ireg[51] = I_TYPE(vaddvx_, 20, 31, 20);
    WARPS[warp_id].ireg[52] = I_TYPE(vaddvx_, 21, 31, 21);
    WARPS[warp_id].ireg[53] = I_TYPE(vaddvx_, 22, 31, 22);
    WARPS[warp_id].ireg[54] = I_TYPE(vaddvx_, 23, 31, 23);
    WARPS[warp_id].ireg[55] = I_TYPE(vaddvx_, 24, 31, 24);
    WARPS[warp_id].ireg[56] = I_TYPE(vaddvx_, 25, 31, 25);
    WARPS[warp_id].ireg[57] = I_TYPE(vaddvx_, 26, 31, 26);
    WARPS[warp_id].ireg[58] = I_TYPE(vaddvx_, 27, 31, 27);
    WARPS[warp_id].ireg[59] = I_TYPE(vaddvx_, 28, 31, 28);
    WARPS[warp_id].ireg[60] = I_TYPE(vaddvx_, 29, 31, 29);
    WARPS[warp_id].ireg[61] = I_TYPE(vaddvx_, 30, 31, 30);
    WARPS[warp_id].ireg[62] = I_TYPE(vaddvx_, 31, 31, 31);
    WARPS[warp_id].ireg[63] = I_TYPE(add_, 2, 5, 5);
    WARPS[warp_id].ireg[64] = I_TYPE(lw_, 4, 1, 31);
    WARPS[warp_id].ireg[65] = I_TYPE(vaddvx_, 4, 1, 1);
    WARPS[warp_id].ireg[66] = I_TYPE(lw_, 1, 2, -50);
    WARPS[warp_id].ireg[67] = I_TYPE(vle32v_, 2, 1, -1);
    WARPS[warp_id].ireg[68] = I_TYPE(add_, 1, 3, 5);
    WARPS[warp_id].ireg[69] = I_TYPE(vfaddvv_, 1, 4, 2);
    WARPS[warp_id].ireg[70] = I_TYPE(add_, 4, 3, 1);
    WARPS[warp_id].ireg[71] = I_TYPE(lw_, 5, 1, 15);
    WARPS[warp_id].ireg[72] = I_TYPE(lw_, 1, 3, -13);
    WARPS[warp_id].ireg[73] = I_TYPE(vfaddvv_, 5, 1, 2);
    WARPS[warp_id].ireg[74] = I_TYPE(vfaddvv_, 4, 5, 3);
    WARPS[warp_id].ireg[75] = I_TYPE(vaddvx_, 5, 4, 2);
    WARPS[warp_id].ireg[76] = I_TYPE(vfaddvv_, 2, 2, 3);
    WARPS[warp_id].ireg[77] = I_TYPE(vfaddvv_, 3, 4, 3);
    WARPS[warp_id].ireg[78] = I_TYPE(vfaddvv_, 1, 1, 3);
    WARPS[warp_id].ireg[79] = I_TYPE(vle32v_, 1, 4, -1);
    WARPS[warp_id].ireg[80] = I_TYPE(add_, 2, 3, 5);
    WARPS[warp_id].ireg[81] = I_TYPE(add_, 2, 4, 3);
    WARPS[warp_id].ireg[82] = I_TYPE(addi_, 1, 4, 8);
    WARPS[warp_id].ireg[83] = I_TYPE(lw_, 4, 2, 44);
    WARPS[warp_id].ireg[84] = I_TYPE(vaddvx_, 5, 2, 2);
    WARPS[warp_id].ireg[85] = I_TYPE(vaddvx_, 5, 2, 4);
    WARPS[warp_id].ireg[86] = I_TYPE(addi_, 4, 3, 7);
    WARPS[warp_id].ireg[87] = I_TYPE(vfaddvv_, 2, 3, 4);
    WARPS[warp_id].ireg[88] = I_TYPE(addi_, 2, 3, 4);
    WARPS[warp_id].ireg[89] = I_TYPE(add_, 5, 1, 1);
    WARPS[warp_id].ireg[90] = I_TYPE(vaddvx_, 4, 2, 5);
    WARPS[warp_id].ireg[91] = I_TYPE(vaddvx_, 3, 4, 4);
    WARPS[warp_id].ireg[92] = I_TYPE(vfaddvv_, 2, 4, 5);
    WARPS[warp_id].ireg[93] = I_TYPE(vle32v_, 2, 3, -1);
    WARPS[warp_id].ireg[94] = I_TYPE(lw_, 2, 1, 27);
    WARPS[warp_id].ireg[95] = I_TYPE(vaddvx_, 1, 5, 3);
    WARPS[warp_id].ireg[96] = I_TYPE(vaddvv_, 3, 3, 5);
    WARPS[warp_id].ireg[97] = I_TYPE(add_, 3, 1, 1);
    WARPS[warp_id].ireg[98] = I_TYPE(vaddvv_, 5, 1, 5);
    WARPS[warp_id].ireg[99] = I_TYPE(vfaddvv_, 1, 4, 2);
    WARPS[warp_id].ireg[100] = I_TYPE(vfaddvv_, 2, 2, 2);
    WARPS[warp_id].ireg[101] = I_TYPE(beq_, 0, 3, 2);
    WARPS[warp_id].ireg[102] = I_TYPE(vle32v_, 5, 1, -1);
    WARPS[warp_id].ireg[103] = I_TYPE(vaddvv_, 3, 4, 5);
    WARPS[warp_id].ireg[104] = I_TYPE(vle32v_, 2, 4, -1);
    WARPS[warp_id].ireg[105] = I_TYPE(add_, 1, 3, 5);
    WARPS[warp_id].ireg[106] = I_TYPE(add_, 4, 1, 3);
    WARPS[warp_id].ireg[107] = I_TYPE(lw_, 5, 1, -7);
    WARPS[warp_id].ireg[108] = I_TYPE(vaddvv_, 2, 4, 2);
    WARPS[warp_id].ireg[109] = I_TYPE(lw_, 3, 3, 44);
    WARPS[warp_id].ireg[110] = I_TYPE(addi_, 4, 3, 39);
    WARPS[warp_id].ireg[111] = I_TYPE(vaddvx_, 5, 5, 3);
    WARPS[warp_id].ireg[112] = I_TYPE(vfaddvv_, 5, 1, 4);
}
