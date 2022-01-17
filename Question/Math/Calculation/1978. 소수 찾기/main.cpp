#include"cl_solution.hpp"
int main() {
	int test_case = 0;
	cl_solution sol;
	std::cin >> test_case;
	if(test_case<=100)
		std::cout<<sol.fn_run(test_case)<<'\n';
	
	return 0;
}