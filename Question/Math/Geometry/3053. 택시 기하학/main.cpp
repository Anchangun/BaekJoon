#include"cl_solution.hpp"

int main() {
	cl_solution sol;
	double r = 0;

	std::cin >> r;
	if (r <= 10000)
		sol.fn_run(r);

	return 0;
}