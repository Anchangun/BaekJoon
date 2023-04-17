#include "cl_solution.h"

int cl_solution::fn_add(int a, int b){
	return a+b;
}

int cl_solution::fn_sub(int a, int b){
	return a-b;
}

int cl_solution::fn_mul(int a, int b){
	return a*b;
}

int cl_solution::fn_div(int a, int b){
	return a/b;
}

int cl_solution::fn_rem(int a, int b){
	return a%b;
}

bool cl_solution::fn_run(int a, int b){
	if (1 <= a && b <= 10000) {
		std::cout << fn_add(a, b) << std::endl;
		std::cout << fn_sub(a, b) << std::endl;
		std::cout << fn_mul(a, b) << std::endl;
		std::cout << fn_div(a, b) << std::endl;
		std::cout << fn_rem(a, b);
	}
	else
		return false;
}
