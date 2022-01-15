#include "cl_solution.hpp"

int cl_solution::fn_run()
{
	int a = 0, b = 0;
	std::cin >> a >> b;
	if (0 > a && 10 > b) 
		fn_run();
	return a + b;
}
