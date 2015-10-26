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
static const char *ng0 = "/opt/Xilinx/14.7/ISE_DS/PlanAhead/bin/project_5/project_5.srcs/sim_1/new/adc_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_3755959177_1446275585_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 / 2);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 5816);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t12 = (t0 + 5816);
    xsi_driver_intertial_reject(t12, t4, t4);

LAB2:    t13 = (t0 + 5592);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3755959177_1446275585_p_1(char *t0)
{
    char t18[16];
    char t23[16];
    char t25[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    int64 t9;
    unsigned char t10;
    int t11;
    int t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t26;
    char *t27;
    int64 t28;
    int64 t29;

LAB0:    t1 = (t0 + 5272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);

LAB6:    t2 = (t0 + 5608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 5608);
    *((int *)t4) = 0;
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 5080);
    xsi_process_wait(t2, t9);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    t3 = (t0 + 2112U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3088U);
    t4 = *((char **)t2);
    t9 = *((int64 *)t4);
    t2 = (t0 + 5080);
    xsi_process_wait(t2, t9);

LAB13:    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB9:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(100, ng0);

LAB30:    t2 = (t0 + 5640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB11:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)2);
    if (t8 == 0)
        goto LAB15;

LAB16:    goto LAB9;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

LAB15:    t2 = (t0 + 9980);
    xsi_report(t2, 109U, (unsigned char)2);
    goto LAB16;

LAB17:    goto LAB9;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    xsi_set_current_line(95, ng0);

LAB26:    t2 = (t0 + 5624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB24:    t5 = (t0 + 5624);
    *((int *)t5) = 0;
    goto LAB22;

LAB25:    t4 = (t0 + 1472U);
    t10 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t4, 0U, 0U);
    if (t10 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t4 = (t0 + 5640);
    *((int *)t4) = 0;
    xsi_set_current_line(101, ng0);

LAB34:    t2 = (t0 + 5656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    t4 = (t0 + 5656);
    *((int *)t4) = 0;
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)1;

LAB37:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 10089);
    *((int *)t2) = 2;
    t3 = (t0 + 10093);
    *((int *)t3) = 0;
    t11 = 2;
    t12 = 0;

LAB39:    if (t11 >= t12)
        goto LAB40;

LAB42:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    if (t7 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 10138);
    t4 = ((STD_STANDARD) + 384);
    t5 = (t0 + 4048U);
    t6 = *((char **)t5);
    t5 = (t0 + 9824U);
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t6, t5);
    t19 = xsi_int_to_mem(t11);
    t20 = xsi_string_variable_get_image(t18, t4, t19);
    t22 = ((STD_STANDARD) + 984);
    t24 = (t25 + 0U);
    t26 = (t24 + 0U);
    *((int *)t26) = 1;
    t26 = (t24 + 4U);
    *((int *)t26) = 41;
    t26 = (t24 + 8U);
    *((int *)t26) = 1;
    t12 = (41 - 1);
    t15 = (t12 * 1);
    t15 = (t15 + 1);
    t26 = (t24 + 12U);
    *((unsigned int *)t26) = t15;
    t21 = xsi_base_array_concat(t21, t23, t22, (char)97, t2, t25, (char)97, t20, t18, (char)101);
    t26 = (t18 + 12U);
    t15 = *((unsigned int *)t26);
    t16 = (41U + t15);
    xsi_report(t21, t16, 0);

LAB49:    xsi_set_current_line(118, ng0);

LAB53:    t2 = (t0 + 5688);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB33:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB32;
    else
        goto LAB34;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    goto LAB37;

LAB40:    xsi_set_current_line(108, ng0);

LAB45:    t4 = (t0 + 5672);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB41:    t2 = (t0 + 10089);
    t11 = *((int *)t2);
    t3 = (t0 + 10093);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB42;

LAB47:    t13 = (t11 + -1);
    t11 = t13;
    t4 = (t0 + 10089);
    *((int *)t4) = t11;
    goto LAB39;

LAB43:    t6 = (t0 + 5672);
    *((int *)t6) = 0;
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t2 = (t0 + 4048U);
    t4 = *((char **)t2);
    t2 = (t0 + 10089);
    t13 = *((int *)t2);
    t14 = (t13 - 2);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(2, 0, -1, *((int *)t2));
    t16 = (1U * t15);
    t17 = (0 + t16);
    t5 = (t4 + t17);
    *((unsigned char *)t5) = t7;
    goto LAB41;

LAB44:    t5 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t7 == 1)
        goto LAB43;
    else
        goto LAB45;

LAB46:    goto LAB44;

LAB48:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 10097);
    t5 = ((STD_STANDARD) + 384);
    t6 = (t0 + 4048U);
    t19 = *((char **)t6);
    t6 = (t0 + 9824U);
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t19, t6);
    t20 = xsi_int_to_mem(t11);
    t21 = xsi_string_variable_get_image(t18, t5, t20);
    t24 = ((STD_STANDARD) + 984);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((int *)t27) = 41;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t12 = (41 - 1);
    t15 = (t12 * 1);
    t15 = (t15 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t15;
    t22 = xsi_base_array_concat(t22, t23, t24, (char)97, t2, t25, (char)97, t21, t18, (char)101);
    t27 = (t18 + 12U);
    t15 = *((unsigned int *)t27);
    t16 = (41U + t15);
    xsi_report(t22, t16, 0);
    goto LAB49;

LAB51:    t4 = (t0 + 5688);
    *((int *)t4) = 0;
    xsi_set_current_line(119, ng0);

LAB57:    t2 = (t0 + 5704);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB52:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB51;
    else
        goto LAB53;

LAB54:    goto LAB52;

LAB55:    t4 = (t0 + 5704);
    *((int *)t4) = 0;
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3328U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 5080);
    xsi_process_wait(t2, t9);

LAB61:    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB56:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB55;
    else
        goto LAB57;

LAB58:    goto LAB56;

LAB59:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 10179);
    *((int *)t2) = 9;
    t3 = (t0 + 10183);
    *((int *)t3) = 0;
    t11 = 9;
    t12 = 0;

LAB63:    if (t11 >= t12)
        goto LAB64;

LAB66:    xsi_set_current_line(136, ng0);

LAB80:    t2 = (t0 + 5736);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB60:    goto LAB59;

LAB62:    goto LAB60;

LAB64:    xsi_set_current_line(127, ng0);

LAB69:    t4 = (t0 + 5720);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB65:    t2 = (t0 + 10179);
    t11 = *((int *)t2);
    t3 = (t0 + 10183);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB66;

LAB77:    t13 = (t11 + -1);
    t11 = t13;
    t4 = (t0 + 10179);
    *((int *)t4) = t11;
    goto LAB63;

LAB67:    t6 = (t0 + 5720);
    *((int *)t6) = 0;
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 5080);
    xsi_process_wait(t2, t9);

LAB73:    *((char **)t1) = &&LAB74;
    goto LAB1;

LAB68:    t5 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t7 == 1)
        goto LAB67;
    else
        goto LAB69;

LAB70:    goto LAB68;

LAB71:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t0 + 10179);
    t13 = *((int *)t2);
    t14 = (t13 - 9);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(9, 0, -1, *((int *)t2));
    t16 = (1U * t15);
    t17 = (0 + t16);
    t4 = (t3 + t17);
    t7 = *((unsigned char *)t4);
    t5 = (t0 + 5880);
    t6 = (t5 + 56U);
    t19 = *((char **)t6);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t7;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)2);
    if (t8 == 0)
        goto LAB75;

LAB76:    goto LAB65;

LAB72:    goto LAB71;

LAB74:    goto LAB72;

LAB75:    t2 = (t0 + 10187);
    xsi_report(t2, 62U, (unsigned char)1);
    goto LAB76;

LAB78:    t4 = (t0 + 5736);
    *((int *)t4) = 0;
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 5080);
    xsi_process_wait(t2, t9);

LAB84:    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB79:    t3 = (t0 + 2112U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB78;
    else
        goto LAB80;

LAB81:    goto LAB79;

LAB82:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t28 = *((int64 *)t4);
    t29 = (t9 - t28);
    t2 = (t0 + 5080);
    xsi_process_wait(t2, t29);

LAB88:    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB83:    goto LAB82;

LAB85:    goto LAB83;

LAB86:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 0)
        goto LAB90;

LAB91:    goto LAB2;

LAB87:    goto LAB86;

LAB89:    goto LAB87;

LAB90:    t2 = (t0 + 10249);
    xsi_report(t2, 111U, (unsigned char)2);
    goto LAB91;

}


extern void work_a_3755959177_1446275585_init()
{
	static char *pe[] = {(void *)work_a_3755959177_1446275585_p_0,(void *)work_a_3755959177_1446275585_p_1};
	xsi_register_didat("work_a_3755959177_1446275585", "isim/adc_tb.exe.sim/work/a_3755959177_1446275585.didat");
	xsi_register_executes(pe);
}
