#include"cl_solution.h"
int main() {
	cl_solution sol;
	int year = 0;
	std::cin >> year;
	std::cout << sol.fn_run(year) << std::endl;
	return 0;
}