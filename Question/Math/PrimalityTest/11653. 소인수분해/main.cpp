#include"cl_solution.hpp"

int main() {
	cl_solution sol;
	int n = 0;
	std::cin >> n;
	if(n>=0 && n<=10000000)
		sol.fn_run(n);
	return 0;
}