#include "cl_solution.h"

int cl_solution::fn_sub(int a, int b){
	if (0 < a && b < 10)
		return a - b;
	else
		return -1;
}
