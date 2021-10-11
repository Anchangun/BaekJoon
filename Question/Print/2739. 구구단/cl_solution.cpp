#include "cl_solution.h"

void cl_solution::fn_run(int num){
	int cnt = 1;
	if (num >= 1 && num <= 9) {
		while (cnt <= 9) {
			std::cout << num << " * " << cnt << " = " << num * cnt << std::endl;
			cnt++;
		}
	}
}
