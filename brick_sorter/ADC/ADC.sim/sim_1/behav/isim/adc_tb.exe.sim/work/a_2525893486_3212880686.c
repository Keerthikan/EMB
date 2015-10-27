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
static const char *ng0 = "/home/student/Embedded/brick_sorter/ADC/ADC.srcs/sources_1/new/pwm.vhd";
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
LAB3:    t1 = (t0 + 5496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 < 7);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 5640);
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
    t1 = (t0 + 5704);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5512);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_2(char *t0)
{
    char t19[16];
    char t20[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2432U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2432U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB18;

LAB20:
LAB19:    t1 = (t0 + 5528);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 3208U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 >= 9);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 > 2);
    if (t2 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 9578);
    t4 = (t0 + 5768);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 3208U);
    t7 = *((char **)t3);
    t8 = *((int *)t7);
    t9 = (t8 < 19);
    if (t9 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 9564);
    t11 = (t0 + 5768);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 2U);
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t16 = (9 - 8);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t2 = *((unsigned char *)t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t11 = (t20 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 8;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t5 = (0 - 8);
    t21 = (t5 * -1);
    t21 = (t21 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t21;
    t4 = xsi_base_array_concat(t4, t19, t10, (char)97, t1, t20, (char)99, t2, (char)101);
    t21 = (9U + 1U);
    t6 = (10U != t21);
    if (t6 == 1)
        goto LAB11;

LAB12:    t12 = (t0 + 5832);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t22 = *((char **)t15);
    memcpy(t22, t4, 10U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    xsi_size_not_matching(10U, t21, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t8 = *((int *)t4);
    t6 = (t8 < 5);
    if (t6 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB6;

LAB15:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 9566);
    t10 = (t0 + 5768);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 2U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 9568);
    t4 = (t0 + 5832);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 10U);
    xsi_driver_first_trans_fast(t4);
    goto LAB16;

LAB18:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 3208U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB21;

LAB23:    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 < 6);
    if (t2 != 0)
        goto LAB24;

LAB25:    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 < 8);
    if (t2 != 0)
        goto LAB28;

LAB29:    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 18);
    if (t2 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 9596);
    t4 = (t0 + 5896);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 + 1);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t8;

LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 9580);
    t10 = (t0 + 5896);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 4U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 5960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 6024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 + 1);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t8;
    goto LAB22;

LAB24:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 9584);
    t7 = (t0 + 5896);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 + 1);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t8;
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t16 = (4 - 3);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    t4 = (t0 + 2632U);
    t7 = *((char **)t4);
    t5 = (4 - 4);
    t21 = (t5 * -1);
    t23 = (1U * t21);
    t24 = (0 + t23);
    t4 = (t7 + t24);
    t2 = *((unsigned char *)t4);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t20 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 3;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t8 = (0 - 3);
    t25 = (t8 * -1);
    t25 = (t25 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t25;
    t10 = xsi_base_array_concat(t10, t19, t11, (char)97, t1, t20, (char)99, t2, (char)101);
    t25 = (4U + 1U);
    t6 = (5U != t25);
    if (t6 == 1)
        goto LAB26;

LAB27:    t13 = (t0 + 6088);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t22 = (t15 + 56U);
    t26 = *((char **)t22);
    memcpy(t26, t10, 5U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t5 = (4 - 4);
    t16 = (t5 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6024);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB22;

LAB26:    xsi_size_not_matching(5U, t25, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 9588);
    t7 = (t0 + 5896);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 6024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t8 = (t5 + 1);
    t1 = (t0 + 3208U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t8;
    goto LAB22;

LAB30:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 9592);
    t7 = (t0 + 5896);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 5960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 6024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3208U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB22;

}

static void work_a_2525893486_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(125, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 6152);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5544);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_4(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1632U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t3 = (t0 + 9600);
    t6 = 1;
    if (10U == 10U)
        goto LAB8;

LAB9:    t6 = 0;

LAB10:    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 9612);
    t2 = 1;
    if (10U == 10U)
        goto LAB16;

LAB17:    t2 = 0;

LAB18:    if (t2 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 9624);
    t4 = (t0 + 6216);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(132, ng0);
    t10 = (t0 + 9610);
    t12 = (t0 + 6216);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 2U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB6;

LAB8:    t7 = 0;

LAB11:    if (t7 < 10U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t8 = (t4 + t7);
    t9 = (t3 + t7);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB9;

LAB13:    t7 = (t7 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(134, ng0);
    t9 = (t0 + 9622);
    t11 = (t0 + 6216);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t9, 2U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB6;

LAB16:    t7 = 0;

LAB19:    if (t7 < 10U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t5 = (t3 + t7);
    t8 = (t1 + t7);
    if (*((unsigned char *)t5) != *((unsigned char *)t8))
        goto LAB17;

LAB21:    t7 = (t7 + 1);
    goto LAB19;

}


extern void work_a_2525893486_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2525893486_3212880686_p_0,(void *)work_a_2525893486_3212880686_p_1,(void *)work_a_2525893486_3212880686_p_2,(void *)work_a_2525893486_3212880686_p_3,(void *)work_a_2525893486_3212880686_p_4};
	xsi_register_didat("work_a_2525893486_3212880686", "isim/adc_tb.exe.sim/work/a_2525893486_3212880686.didat");
	xsi_register_executes(pe);
}
