#include "cl_solution.hpp"

void cl_solution::fn_run()
{
	int lp=0;
	int sum=0 ,num=0;
	while (lp < 5) {
		std::cin >> num;
		if(num<=9 && num >=0){
			sum += std::pow(num, 2);
			lp++;
		}
	}
	std::cout << sum % 10 << '\n';
}
