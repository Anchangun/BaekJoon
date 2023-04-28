#include "cl_solution.h"

void cl_solution::fn_run(int a, int b, int c){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int result = 0,i=0;
	int* result_data = new int[SIZE];
	memset(result_data, 0, sizeof(int)* SIZE);
	result = a * b * c;
	while (result > 0) {
		result_data[result % 10] += 1;
		result /= 10;
	}
	while (i < SIZE) {
		std::cout << result_data[i] << "\n";
		i++;
	}

}
