/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/ISE Files/P4_Final1/datapath/npc.v";
static int ng1[] = {4, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {4U, 0U};



static void Cont_33_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t19[8];
    char t26[8];
    char t71[8];
    char t72[8];
    char t74[8];
    char t84[8];
    char t89[8];
    char t90[8];
    char t103[8];
    char t105[8];
    char t115[8];
    char t129[8];
    char t130[8];
    char t150[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t104;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 784U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    memcpy(t26, t6, 8);

LAB10:    memset(t4, 0, 8);
    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t58) != 0)
        goto LAB20;

LAB21:    t65 = (t4 + 4);
    t66 = *((unsigned int *)t4);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB22;

LAB23:    t85 = *((unsigned int *)t4);
    t86 = (~(t85));
    t87 = *((unsigned int *)t65);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t65) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t89, 8);

LAB30:    t151 = (t0 + 2388);
    t152 = (t151 + 32U);
    t153 = *((char **)t152);
    t154 = (t153 + 40U);
    t155 = *((char **)t154);
    memcpy(t155, t3, 8);
    xsi_driver_vfirst_trans(t151, 0, 31);
    t156 = (t0 + 2336);
    *((int *)t156) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB6:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 876U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t17) != 0)
        goto LAB13;

LAB14:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB14;

LAB15:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t64 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB21;

LAB22:    t69 = (t0 + 600U);
    t70 = *((char **)t69);
    t69 = ((char*)((ng1)));
    memset(t71, 0, 8);
    xsi_vlog_unsigned_add(t71, 32, t70, 32, t69, 32);
    t73 = ((char*)((ng2)));
    t75 = (t0 + 692U);
    t76 = *((char **)t75);
    memset(t74, 0, 8);
    t75 = (t74 + 4);
    t77 = (t76 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (t78 >> 0);
    *((unsigned int *)t74) = t79;
    t80 = *((unsigned int *)t77);
    t81 = (t80 >> 0);
    *((unsigned int *)t75) = t81;
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t82 & 65535U);
    t83 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t83 & 65535U);
    xsi_vlogtype_concat(t72, 32, 18, 2U, t74, 16, t73, 2);
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 32, t71, 32, t72, 32);
    goto LAB23;

LAB24:    t91 = (t0 + 968U);
    t92 = *((char **)t91);
    memset(t90, 0, 8);
    t91 = (t92 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t92);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t91) != 0)
        goto LAB33;

LAB34:    t99 = (t90 + 4);
    t100 = *((unsigned int *)t90);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB35;

LAB36:    t125 = *((unsigned int *)t90);
    t126 = (~(t125));
    t127 = *((unsigned int *)t99);
    t128 = (t126 || t127);
    if (t128 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t99) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t90) > 0)
        goto LAB41;

LAB42:    memcpy(t89, t129, 8);

LAB43:    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t84, 32, t89, 32);
    goto LAB30;

LAB28:    memcpy(t3, t84, 8);
    goto LAB30;

LAB31:    *((unsigned int *)t90) = 1;
    goto LAB34;

LAB33:    t98 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB34;

LAB35:    t104 = ((char*)((ng2)));
    t106 = (t0 + 692U);
    t107 = *((char **)t106);
    memset(t105, 0, 8);
    t106 = (t105 + 4);
    t108 = (t107 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (t109 >> 0);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t108);
    t112 = (t111 >> 0);
    *((unsigned int *)t106) = t112;
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 67108863U);
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 67108863U);
    t116 = (t0 + 600U);
    t117 = *((char **)t116);
    memset(t115, 0, 8);
    t116 = (t115 + 4);
    t118 = (t117 + 4);
    t119 = *((unsigned int *)t117);
    t120 = (t119 >> 28);
    *((unsigned int *)t115) = t120;
    t121 = *((unsigned int *)t118);
    t122 = (t121 >> 28);
    *((unsigned int *)t116) = t122;
    t123 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t123 & 15U);
    t124 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t124 & 15U);
    xsi_vlogtype_concat(t103, 32, 32, 3U, t115, 4, t105, 26, t104, 2);
    goto LAB36;

LAB37:    t131 = (t0 + 1060U);
    t132 = *((char **)t131);
    memset(t130, 0, 8);
    t131 = (t132 + 4);
    t133 = *((unsigned int *)t131);
    t134 = (~(t133));
    t135 = *((unsigned int *)t132);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t131) != 0)
        goto LAB46;

LAB47:    t139 = (t130 + 4);
    t140 = *((unsigned int *)t130);
    t141 = *((unsigned int *)t139);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB48;

LAB49:    t145 = *((unsigned int *)t130);
    t146 = (~(t145));
    t147 = *((unsigned int *)t139);
    t148 = (t146 || t147);
    if (t148 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t139) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t130) > 0)
        goto LAB54;

LAB55:    memcpy(t129, t150, 8);

LAB56:    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t89, 32, t103, 32, t129, 32);
    goto LAB43;

LAB41:    memcpy(t89, t103, 8);
    goto LAB43;

LAB44:    *((unsigned int *)t130) = 1;
    goto LAB47;

LAB46:    t138 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB47;

LAB48:    t143 = (t0 + 1152U);
    t144 = *((char **)t143);
    goto LAB49;

LAB50:    t143 = (t0 + 600U);
    t149 = *((char **)t143);
    t143 = ((char*)((ng3)));
    memset(t150, 0, 8);
    xsi_vlog_unsigned_add(t150, 32, t149, 32, t143, 32);
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t129, 32, t144, 32, t150, 32);
    goto LAB56;

LAB54:    memcpy(t129, t144, 8);
    goto LAB56;

}

static void Cont_36_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 2424);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 2344);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000004075512065_0757879789_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_36_1};
	xsi_register_didat("work_m_00000000004075512065_0757879789", "isim/wholeTest0_isim_beh.exe.sim/work/m_00000000004075512065_0757879789.didat");
	xsi_register_executes(pe);
}
