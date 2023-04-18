#include "cl_solution.h"
void cl_solution::fn_run(int num)
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	if (num <= 100000 && num > 0) {
		int i = 1;
		while (i <= num) {
			std::cout << num << "\n";
			num--;
		}
	}
}
