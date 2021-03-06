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
    work_m_00000000002163759346_2468648760_init();
    work_m_00000000004143872448_0757879789_init();
    work_m_00000000003432468199_4144471541_init();
    work_m_00000000004014979680_2517383613_init();
    work_m_00000000000790939190_1213024400_init();
    work_m_00000000004200536954_1785967555_init();
    work_m_00000000001611468267_3088014351_init();
    work_m_00000000004236336575_0886308060_init();
    work_m_00000000002519648259_1806979977_init();
    work_m_00000000001298497852_0219953979_init();
    work_m_00000000001590410049_3877310806_init();
    work_m_00000000000163443182_4084700185_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000163443182_4084700185");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
