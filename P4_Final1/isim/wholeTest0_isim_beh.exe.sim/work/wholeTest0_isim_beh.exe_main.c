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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001906149251_1733832700_init();
    work_m_00000000003532022828_0467708899_init();
    work_m_00000000004075512065_0757879789_init();
    work_m_00000000001013979000_4144471541_init();
    work_m_00000000004014979680_2517383613_init();
    work_m_00000000000790939190_1213024400_init();
    work_m_00000000004200536954_1785967555_init();
    work_m_00000000001611468267_3088014351_init();
    work_m_00000000004236336575_0886308060_init();
    work_m_00000000003391280929_2924402094_init();
    work_m_00000000000604345428_2973510161_init();
    work_m_00000000004083522296_0062788502_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004083522296_0062788502");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
