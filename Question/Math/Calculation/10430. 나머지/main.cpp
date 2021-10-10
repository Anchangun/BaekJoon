#include"cl_solution.h"

int main() {
	cl_solution* sol = new cl_solution();
	int a = 0, b = 0,c = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	sol->fn_run(a, b,c );

	delete sol;
	return 0;
}