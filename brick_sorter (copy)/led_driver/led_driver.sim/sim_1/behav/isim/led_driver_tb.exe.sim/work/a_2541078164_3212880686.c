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
static const char *ng0 = "/home/student/Embedded/brick_sorter (copy)/led_driver/led_driver.srcs/sources_1/new/led_driver.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2541078164_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;

LAB3:    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 992U);
    t5 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t6 = (t0 + 2288U);
    t7 = *((char **)t6);
    t8 = *((int *)t7);
    t9 = (t8 + 1);
    t6 = (t0 + 2288U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t9;
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB23;

LAB24:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4048);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 4112);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2288U);
    t6 = *((char **)t1);
    t8 = *((int *)t6);
    t5 = (t8 < 7);
    if (t5 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 == 10);
    if (t3 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4048);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4112);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4048);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4112);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2288U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = 0;
    goto LAB12;

LAB16:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2288U);
    t6 = *((char **)t1);
    t8 = *((int *)t6);
    t5 = (t8 < 7);
    if (t5 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 == 10);
    if (t3 != 0)
        goto LAB21;

LAB22:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4048);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 4112);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB19:    goto LAB9;

LAB18:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4048);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 4112);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB21:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2288U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = 0;
    goto LAB19;

LAB23:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2288U);
    t6 = *((char **)t1);
    t8 = *((int *)t6);
    t5 = (t8 < 7);
    if (t5 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 == 10);
    if (t3 != 0)
        goto LAB28;

LAB29:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 4048);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 4112);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB26:    goto LAB9;

LAB25:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4048);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4112);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 4176);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2288U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = 0;
    goto LAB26;

}

static void work_a_2541078164_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    static char *nl0[] = {&&LAB15, &&LAB16, &&LAB17};

LAB0:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB2:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 2408U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 + 1);
    t3 = (t0 + 2408U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = t6;
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (250 + 650);
    t2 = (t5 < t6);
    if (t2 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (250 + 650);
    t10 = (t6 + 250);
    t11 = (t10 + 650);
    t2 = (t5 < t11);
    if (t2 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (250 + 650);
    t10 = (t6 + 250);
    t11 = (t10 + 650);
    t12 = (t11 + 250);
    t13 = (t12 + 650);
    t2 = (t5 < t13);
    if (t2 != 0)
        goto LAB10;

LAB11:    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (250 + 650);
    t10 = (t6 + 250);
    t11 = (t10 + 650);
    t12 = (t11 + 250);
    t13 = (t12 + 650);
    t14 = (t13 + 250);
    t15 = (t14 + 650);
    t2 = (t5 < t15);
    if (t2 != 0)
        goto LAB12;

LAB13:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 4240);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 4240);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB10:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4240);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB12:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2408U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB14:    t1 = (t0 + 3968);
    *((int *)t1) = 1;

LAB1:    return;
LAB15:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 2408U);
    t7 = *((char **)t4);
    t5 = *((int *)t7);
    t16 = (t5 < 650);
    if (t16 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 >= 650);
    if (t2 != 0)
        goto LAB21;

LAB22:
LAB19:    goto LAB14;

LAB16:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (650 + 250);
    t10 = (t6 + 650);
    t2 = (t5 < t10);
    if (t2 != 0)
        goto LAB26;

LAB28:    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (650 + 250);
    t10 = (t6 + 650);
    t2 = (t5 >= t10);
    if (t2 != 0)
        goto LAB29;

LAB30:
LAB27:    goto LAB14;

LAB17:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (650 + 250);
    t10 = (t6 + 650);
    t11 = (t10 + 250);
    t12 = (t11 + 650);
    t2 = (t5 < t12);
    if (t2 != 0)
        goto LAB34;

LAB36:    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (650 + 250);
    t10 = (t6 + 650);
    t11 = (t10 + 250);
    t12 = (t11 + 650);
    t2 = (t5 >= t12);
    if (t2 != 0)
        goto LAB37;

LAB38:
LAB35:    goto LAB14;

LAB18:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 4304);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB21:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 2408U);
    t4 = *((char **)t1);
    t6 = *((int *)t4);
    t10 = (650 + 250);
    t16 = (t6 < t10);
    if (t16 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB19;

LAB23:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 4304);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 4304);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB27;

LAB29:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2408U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t12 = (650 + 250);
    t13 = (t12 + 650);
    t14 = (t13 + 250);
    t16 = (t11 < t14);
    if (t16 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB27;

LAB31:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 4304);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 4304);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 2408U);
    t4 = *((char **)t1);
    t13 = *((int *)t4);
    t14 = (650 + 250);
    t15 = (t14 + 650);
    t19 = (t15 + 250);
    t20 = (t19 + 650);
    t21 = (t20 + 250);
    t16 = (t13 < t21);
    if (t16 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB35;

LAB39:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 4304);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB40;

}


extern void work_a_2541078164_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2541078164_3212880686_p_0,(void *)work_a_2541078164_3212880686_p_1};
	xsi_register_didat("work_a_2541078164_3212880686", "isim/led_driver_tb.exe.sim/work/a_2541078164_3212880686.didat");
	xsi_register_executes(pe);
}
