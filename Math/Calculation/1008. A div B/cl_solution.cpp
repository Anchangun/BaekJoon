#include "cl_solution.h"

double cl_solution::fn_mul(double a, double b)
{
	if (0 < a && b < 10) {
		double d_a = 0, d_b = 0;
		
		d_a = a;
		d_b = b;
		
		return d_a / d_b;
	}
	else
		return -1;
}
