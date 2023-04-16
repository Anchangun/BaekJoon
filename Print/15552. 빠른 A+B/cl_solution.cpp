#include "cl_solution.h"

void cl_solution::fn_run(int num){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int i = 0,a =0 ,b=0;

	while (i < num) {
		std::cin >> a;
		std::cin >> b;
		if (a >= 1 && a <= 1000 && b >= 1 && b <= 1000) {
			std::cout << a + b << "\n";
			i++;
		}
	
	}
}
