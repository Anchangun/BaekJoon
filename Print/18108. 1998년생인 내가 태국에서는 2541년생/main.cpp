#include"cl_solution.hpp"

int main() {
	cl_solution sol;
	int year = 0;
	std::cin >> year;
	if (year >= 1000 && year <= 3000)
		std::cout<<sol.fn_run(year);
	return 0;
}