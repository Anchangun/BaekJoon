#include "cl_solution.h"

void cl_solution::fn_run(int a, int b){
	if (-10000 <= a && b <= 10000) {
		if (a < b)
			std::cout << "<" << std::endl;
		else if(a>b)
			std::cout << ">" << std::endl;
		else
			std::cout << "==" << std::endl;
	}

}
