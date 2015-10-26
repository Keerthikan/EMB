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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/opt/Xilinx/14.7/ISE_DS/PlanAhead/bin/project_5/project_5.srcs/sources_1/new/pwm.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_2525893486_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1632U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 < 14);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 5112);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3088U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 3088U);
    t7 = *((char **)t3);
    t8 = *((int *)t7);
    t9 = (t8 + 1);
    t3 = (t0 + 3088U);
    t10 = *((char **)t3);
    t3 = (t10 + 0);
    *((int *)t3) = t9;
    goto LAB6;

}

static void work_a_2525893486_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(68, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5176);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5016);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_2(char *t0)
{
    char t16[16];
    char t17[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2432U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2432U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB13;

LAB15:
LAB14:    t1 = (t0 + 5032);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 3208U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 7);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 9048);
    t4 = (t0 + 5240);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 9050);
    t4 = (t0 + 5304);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 5368);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 9044);
    t8 = (t0 + 5240);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 < 19);
    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 9046);
    t7 = (t0 + 5240);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t13 = (9 - 8);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t2 = *((unsigned char *)t7);
    t8 = ((IEEE_P_2592010699) + 4000);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 8;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t5 = (0 - 8);
    t18 = (t5 * -1);
    t18 = (t18 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t18;
    t4 = xsi_base_array_concat(t4, t16, t8, (char)97, t1, t17, (char)99, t2, (char)101);
    t18 = (9U + 1U);
    t6 = (10U != t18);
    if (t6 == 1)
        goto LAB11;

LAB12:    t10 = (t0 + 5304);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t4, 10U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 5368);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 10U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

LAB11:    xsi_size_not_matching(10U, t18, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 3208U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 < 6);
    if (t2 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 6);
    if (t2 != 0)
        goto LAB23;

LAB24:    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 19);
    if (t2 != 0)
        goto LAB25;

LAB26:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 9076);
    t4 = (t0 + 5432);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t21 = (t5 + 1);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t21;

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 9060);
    t8 = (t0 + 5432);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 5496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t21 = (t5 + 1);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t21;
    goto LAB17;

LAB19:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 9064);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t21 = (t5 + 1);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t21;
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t13 = (4 - 3);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t4 = (t0 + 2632U);
    t7 = *((char **)t4);
    t5 = (4 - 4);
    t18 = (t5 * -1);
    t22 = (1U * t18);
    t23 = (0 + t22);
    t4 = (t7 + t23);
    t2 = *((unsigned char *)t4);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t17 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 3;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t21 = (0 - 3);
    t24 = (t21 * -1);
    t24 = (t24 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t24;
    t8 = xsi_base_array_concat(t8, t16, t9, (char)97, t1, t17, (char)99, t2, (char)101);
    t24 = (4U + 1U);
    t6 = (5U != t24);
    if (t6 == 1)
        goto LAB21;

LAB22:    t11 = (t0 + 5624);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = (t19 + 56U);
    t25 = *((char **)t20);
    memcpy(t25, t8, 5U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t5 = (4 - 4);
    t13 = (t5 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t3 + t15);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 5560);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB17;

LAB21:    xsi_size_not_matching(5U, t24, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 9068);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 5560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t21 = (t5 + 1);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t21;
    goto LAB17;

LAB25:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 9072);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5496);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB17;

}


extern void work_a_2525893486_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2525893486_3212880686_p_0,(void *)work_a_2525893486_3212880686_p_1,(void *)work_a_2525893486_3212880686_p_2};
	xsi_register_didat("work_a_2525893486_3212880686", "isim/adc_tb.exe.sim/work/a_2525893486_3212880686.didat");
	xsi_register_executes(pe);
}
