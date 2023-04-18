#include "cl_solution.h"

void cl_solution::fn_run(int num_size){
	int i = 0;
	int a = 0, b = 0;
	while (num_size > i) {

		std::cin >> a;
		std::cin >> b;
		if(0<a&&b<10){
		std::cout << a + b << std::endl;
		i++;
		}
	}
}
