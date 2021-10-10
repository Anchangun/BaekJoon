#include "cl_solution.h"

void cl_solution::fn_run(int a, int b){
	int result = 0, cnt=1;
	if (a == 0 && b == 0) {
		std::cout << "0" << std::endl;
	}
	while (b > 0) {
		result+=((a* (b % 10))*cnt);
		std::cout << (a * (b % 10))<<std::endl;
		b /= 10;
		cnt *= 10;
	}
	std::cout << result << std::endl;
}
