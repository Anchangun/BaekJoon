#include"cl_solution.h"
int main() {
	cl_solution* sol = new cl_solution();
	double a = 0, b = 0;
	std::cin >> a;
	std::cin >> b;
	std::cout.precision(12);
	std::cout << sol->fn_mul(a, b) << std::endl;
	delete sol;
	return 0;
}