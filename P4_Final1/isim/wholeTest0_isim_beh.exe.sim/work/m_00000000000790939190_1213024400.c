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
static const char *ng0 = "G:/ISE Files/P4_Final1/datapath/gpr.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {31, 0};



static void Always_36_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t54[8];
    char t85[8];
    char t86[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;

LAB0:    t1 = (t0 + 2364U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t2) != 0)
        goto LAB18;

LAB19:    t5 = (t13 + 4);
    t27 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t5);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB20;

LAB21:    memcpy(t54, t13, 8);

LAB22:    t26 = (t54 + 4);
    t79 = *((unsigned int *)t26);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1840);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 1748);
    t17 = (t0 + 1748);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 1748);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = (t0 + 1840);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1840);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB15;

LAB16:    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB18:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB19;

LAB20:    t11 = (t0 + 1336U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    t11 = (t12 + 4);
    t34 = *((unsigned int *)t11);
    t37 = (~(t34));
    t38 = *((unsigned int *)t12);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t11) == 0)
        goto LAB23;

LAB25:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;

LAB26:    t17 = (t15 + 4);
    t18 = (t12 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    *((unsigned int *)t15) = t42;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB28;

LAB27:    t47 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t47 & 1U);
    t48 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t48 & 1U);
    memset(t16, 0, 8);
    t19 = (t15 + 4);
    t49 = *((unsigned int *)t19);
    t50 = (~(t49));
    t51 = *((unsigned int *)t15);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t19) != 0)
        goto LAB31;

LAB32:    t55 = *((unsigned int *)t13);
    t56 = *((unsigned int *)t16);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t21 = (t13 + 4);
    t22 = (t16 + 4);
    t23 = (t54 + 4);
    t58 = *((unsigned int *)t21);
    t59 = *((unsigned int *)t22);
    t60 = (t58 | t59);
    *((unsigned int *)t23) = t60;
    t61 = *((unsigned int *)t23);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB22;

LAB23:    *((unsigned int *)t15) = 1;
    goto LAB26;

LAB28:    t43 = *((unsigned int *)t15);
    t44 = *((unsigned int *)t18);
    *((unsigned int *)t15) = (t43 | t44);
    t45 = *((unsigned int *)t17);
    t46 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t45 | t46);
    goto LAB27;

LAB29:    *((unsigned int *)t16) = 1;
    goto LAB32;

LAB31:    t20 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB33:    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t23);
    *((unsigned int *)t54) = (t63 | t64);
    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t65 = *((unsigned int *)t13);
    t66 = (~(t65));
    t67 = *((unsigned int *)t24);
    t68 = (~(t67));
    t69 = *((unsigned int *)t16);
    t70 = (~(t69));
    t71 = *((unsigned int *)t25);
    t72 = (~(t71));
    t28 = (t66 & t68);
    t31 = (t70 & t72);
    t73 = (~(t28));
    t74 = (~(t31));
    t75 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t75 & t73);
    t76 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t73);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & t74);
    goto LAB35;

LAB36:    xsi_set_current_line(43, ng0);

LAB39:    xsi_set_current_line(44, ng0);
    t29 = (t0 + 1244U);
    t84 = *((char **)t29);
    t29 = (t0 + 1748);
    t87 = (t0 + 1748);
    t88 = (t87 + 44U);
    t89 = *((char **)t88);
    t90 = (t0 + 1748);
    t91 = (t90 + 40U);
    t92 = *((char **)t91);
    t93 = (t0 + 968U);
    t94 = *((char **)t93);
    xsi_vlog_generic_convert_array_indices(t85, t86, t89, t92, 2, 1, t94, 5, 2);
    t93 = (t85 + 4);
    t95 = *((unsigned int *)t93);
    t32 = (!(t95));
    t96 = (t86 + 4);
    t97 = *((unsigned int *)t96);
    t35 = (!(t97));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB38;

LAB40:    t98 = *((unsigned int *)t85);
    t99 = *((unsigned int *)t86);
    t100 = (t98 - t99);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t29, t84, 0, *((unsigned int *)t86), t101);
    goto LAB41;

LAB42:    xsi_set_current_line(45, ng0);

LAB45:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t4 = (t0 + 1748);
    t11 = (t0 + 1748);
    t12 = (t11 + 44U);
    t14 = *((char **)t12);
    t17 = (t0 + 1748);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (!(t27));
    t22 = (t15 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB46;

LAB47:    goto LAB44;

LAB46:    t33 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t15);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t15), t36);
    goto LAB47;

}

static void Cont_51_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2508U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1748);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1748);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 784U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2908);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2856);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_52_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1748);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1748);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 876U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2944);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2864);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000790939190_1213024400_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Cont_51_1,(void *)Cont_52_2};
	xsi_register_didat("work_m_00000000000790939190_1213024400", "isim/wholeTest0_isim_beh.exe.sim/work/m_00000000000790939190_1213024400.didat");
	xsi_register_executes(pe);
}
