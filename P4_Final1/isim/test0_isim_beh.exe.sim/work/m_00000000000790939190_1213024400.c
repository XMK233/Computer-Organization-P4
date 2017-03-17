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
static int ng1[] = {31, 0};
static int ng2[] = {0, 0};
static int ng3[] = {32, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};



static void Always_36_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t33[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    char *t34;
    char *t35;
    char *t36;
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
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(47, ng0);
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
        goto LAB22;

LAB23:    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB25:    t5 = (t13 + 4);
    t23 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t5);
    t29 = (t23 || t26);
    if (t29 > 0)
        goto LAB26;

LAB27:    memcpy(t54, t13, 8);

LAB28:    t35 = (t54 + 4);
    t79 = *((unsigned int *)t35);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t11 = (t0 + 1152U);
    t12 = *((char **)t11);
    t11 = (t0 + 1748);
    t15 = (t0 + 1748);
    t16 = (t15 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1748);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t21, 32, 1);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t14), t32);
    goto LAB11;

LAB12:    xsi_set_current_line(42, ng0);

LAB15:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB16:    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:    goto LAB14;

LAB17:    xsi_set_current_line(43, ng0);

LAB19:    xsi_set_current_line(44, ng0);
    t12 = ((char*)((ng4)));
    t15 = (t0 + 1748);
    t16 = (t0 + 1748);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1748);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1840);
    t25 = (t22 + 36U);
    t34 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t14, t33, t18, t21, 2, 1, t34, 32, 1);
    t35 = (t14 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (!(t23));
    t36 = (t33 + 4);
    t26 = *((unsigned int *)t36);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 1840);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB16;

LAB20:    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t33);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_assign_value(t15, t12, 0, *((unsigned int *)t33), t32);
    goto LAB21;

LAB22:    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB24:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    t11 = (t0 + 1336U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t12 + 4);
    t30 = *((unsigned int *)t11);
    t37 = (~(t30));
    t38 = *((unsigned int *)t12);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t11) == 0)
        goto LAB29;

LAB31:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;

LAB32:    t16 = (t14 + 4);
    t17 = (t12 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    *((unsigned int *)t14) = t42;
    *((unsigned int *)t16) = 0;
    if (*((unsigned int *)t17) != 0)
        goto LAB34;

LAB33:    t47 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t47 & 1U);
    t48 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t48 & 1U);
    memset(t33, 0, 8);
    t18 = (t14 + 4);
    t49 = *((unsigned int *)t18);
    t50 = (~(t49));
    t51 = *((unsigned int *)t14);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t18) != 0)
        goto LAB37;

LAB38:    t55 = *((unsigned int *)t13);
    t56 = *((unsigned int *)t33);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t20 = (t13 + 4);
    t21 = (t33 + 4);
    t22 = (t54 + 4);
    t58 = *((unsigned int *)t20);
    t59 = *((unsigned int *)t21);
    t60 = (t58 | t59);
    *((unsigned int *)t22) = t60;
    t61 = *((unsigned int *)t22);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB28;

LAB29:    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB34:    t43 = *((unsigned int *)t14);
    t44 = *((unsigned int *)t17);
    *((unsigned int *)t14) = (t43 | t44);
    t45 = *((unsigned int *)t16);
    t46 = *((unsigned int *)t17);
    *((unsigned int *)t16) = (t45 | t46);
    goto LAB33;

LAB35:    *((unsigned int *)t33) = 1;
    goto LAB38;

LAB37:    t19 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB38;

LAB39:    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t22);
    *((unsigned int *)t54) = (t63 | t64);
    t25 = (t13 + 4);
    t34 = (t33 + 4);
    t65 = *((unsigned int *)t13);
    t66 = (~(t65));
    t67 = *((unsigned int *)t25);
    t68 = (~(t67));
    t69 = *((unsigned int *)t33);
    t70 = (~(t69));
    t71 = *((unsigned int *)t34);
    t72 = (~(t71));
    t24 = (t66 & t68);
    t27 = (t70 & t72);
    t73 = (~(t24));
    t74 = (~(t27));
    t75 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t75 & t73);
    t76 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t73);
    t78 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t78 & t74);
    goto LAB41;

LAB42:    xsi_set_current_line(47, ng0);

LAB45:    xsi_set_current_line(48, ng0);
    t36 = (t0 + 1244U);
    t84 = *((char **)t36);
    t36 = (t0 + 1748);
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
    t28 = (!(t95));
    t96 = (t86 + 4);
    t97 = *((unsigned int *)t96);
    t31 = (!(t97));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB46;

LAB47:    goto LAB44;

LAB46:    t98 = *((unsigned int *)t85);
    t99 = *((unsigned int *)t86);
    t100 = (t98 - t99);
    t101 = (t100 + 1);
    xsi_vlogvar_assign_value(t36, t84, 0, *((unsigned int *)t86), t101);
    goto LAB47;

}

static void Cont_52_1(char *t0)
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

static void Cont_53_2(char *t0)
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

LAB2:    xsi_set_current_line(53, ng0);
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
	static char *pe[] = {(void *)Always_36_0,(void *)Cont_52_1,(void *)Cont_53_2};
	xsi_register_didat("work_m_00000000000790939190_1213024400", "isim/test0_isim_beh.exe.sim/work/m_00000000000790939190_1213024400.didat");
	xsi_register_executes(pe);
}
