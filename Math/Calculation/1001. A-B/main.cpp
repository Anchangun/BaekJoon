#include"cl_solution.h"

int main() {
	cl_solution* sol = new cl_solution();
	int a = 0, b = 0;
	std::cin >> a;
	std::cin >> b;
	std::cout<<sol->fn_sub(a, b)<<std::endl;
	delete sol;
	return 0;
} 