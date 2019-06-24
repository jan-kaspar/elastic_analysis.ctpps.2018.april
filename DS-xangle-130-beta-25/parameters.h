#include "parameters_global.h"

void Init_base()
{
	// load global settings
	Init_global();

	// alignment periods
	anal.alignment_t0 = 98038;				// beginning of the first time-slice
	anal.alignment_ts = 105295 - 98038;		// time-slice in s
}

//----------------------------------------------------------------------------------------------------

void Init_45b_56t()
{
	Init_global_45b_56t();

	// analysis settings
	//anal.cut1_a = 1.; anal.cut1_c = -240E-6; anal.cut1_si = 150E-6;
	//anal.cut2_a = 1.; anal.cut2_c = +435E-6; anal.cut2_si = 40E-6;

	//anal.cut3_c = 0.49; anal.cut3_si = 0.055;
	//anal.cut4_c = -0.03; anal.cut4_si = 0.033;

	anal.cut5_a = -0.100; anal.cut5_c = +0.05; anal.cut5_si = 0.04;
	anal.cut6_a = -0.099; anal.cut6_c = -0.093; anal.cut6_si = 0.04;

	//anal.cut7_a = 0.0; anal.cut7_c = 0.55; anal.cut7_si = 10.0;
}

//----------------------------------------------------------------------------------------------------

void Init_45t_56b()
{
	Init_global_45t_56b();

	// analysis settings
	//anal.cut1_a = 1.; anal.cut1_c = -290E-6; anal.cut1_si = 150E-6;
	//anal.cut2_a = 1.; anal.cut2_c = +425E-6; anal.cut2_si = 40E-6;

	//anal.cut3_c = 0.43; anal.cut3_si = 0.023;
	//anal.cut4_c = -0.055; anal.cut4_si = 0.031;

	anal.cut5_a = -0.134; anal.cut5_c = -0.05; anal.cut5_si = 0.04;
	anal.cut6_a = -0.091; anal.cut6_c = +0.115; anal.cut6_si = 0.04;

	//anal.cut7_a = 0.0; anal.cut7_c = 0.8; anal.cut7_si = 10.0;
}
