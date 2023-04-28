#include "cl_solution.hpp"

void cl_solution::fn_print(int n, int i, int j)
{
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1)
		std::cout << ' ';
	else if (n / 3 == 0) 
		std::cout << '*';
	else
		fn_print(n/3, i, j);
	
}

void cl_solution::fn_run(int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) 
			fn_print(n, i, j);
		std::cout << '\n';
	}
}
