#include "cl_solution.hpp"

int cl_solution::fn_sum(int k, int n)
{
	if (n == 1)
		return 1;
	else if (k == 0)
		return n;
	else
		return fn_sum(k,n-1)+ fn_sum(k-1,n);
}

void cl_solution::fn_run(int test_case){
	int k =0 ,n=0;
	int result = 0 ,lp=0;
	while(lp<test_case){
		std::cin >> k>> n;
		if (1 <= k && n <= 14) {
			result = fn_sum(k, n);
			std::cout << result << '\n';
			lp++;
		}
	}

}
