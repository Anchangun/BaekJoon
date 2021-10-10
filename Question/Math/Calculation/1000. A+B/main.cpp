#include"cl_solution.h"

int main() {
	cl_solution* sol = new cl_solution();
	int a = 0, b = 0;
	std::cin >> a;
	std::cin >> b;
	std::cout<<sol->fn_add(a, b)<<std::endl;
	return 0;
}