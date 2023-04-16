#include "cl_solution.h"

void cl_solution::fn_run(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int a = 0, b = 0;
	while(true){
		std::cin >> a;
		std::cin >> b;
		if (a == 0 && b == 0)
			break;
		else if ((0 < a && b < 10)) {
			std::cout << a + b << "\n";
		}
		
	}
}
