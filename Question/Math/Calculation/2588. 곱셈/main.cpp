#include"cl_solution.h"
int main() {
		cl_solution* sol = new cl_solution();
		int a = 0, b = 0;
		std::cin >> a;
		std::cin >> b;
		sol->fn_run(a,b);
		delete sol;
	return 0;
}