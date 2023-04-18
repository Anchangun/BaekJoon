#include"cl_solution.hpp"

int main() {
	cl_solution sol;
	int n = 0;
	std::cin >> n;
	if (2 <= n && 2 <= 50)
		sol.fn_run(n);
	return 0;
}