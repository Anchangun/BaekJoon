#include "cl_solution.h"

int cl_solution::fn_run(int a, int b, int c){
	if (2 <= a && b <= 10000 && c <= 10000) {
		std::cout << ((a + b) % c) << std::endl;
		std::cout << (((a % c) + (b % c)) % c) << std::endl;
		std::cout << ((a * b) % c) << std::endl;
		std::cout << (((a % c) * (b % c)) % c) << std::endl;
		return 0;
	}
	else
		return -1;
}
