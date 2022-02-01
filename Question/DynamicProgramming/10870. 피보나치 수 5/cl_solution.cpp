#include "cl_solution.hpp"

int cl_solution::fn_run(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	return fn_run(n-1)+fn_run(n-2);
}
