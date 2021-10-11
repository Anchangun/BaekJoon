#include"cl_solution.h"

int main() {
	cl_solution sol;
	int num = 0;
	std::cin >> num;
	if (num >= 1&& num <= 10000) {
		std::cout<<sol.fn_sum(num)<<std::endl;
	}
	return 0;
}