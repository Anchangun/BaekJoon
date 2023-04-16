#include "cl_solution.h"

int cl_solution::fn_sum(int num){
	int i = 1, result = 0;
	while (num >= i) {
		result += i;
		i++;
	}
	return result;
}
