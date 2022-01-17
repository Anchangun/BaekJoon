#include "cl_solution.hpp"

void cl_solution::fn_run(){
	int m=0, n=0;
	int sum = 0, min=0;
	int lp = 2;

	bool prime_num_check = true;
	std::cin >> m >> n;
	if (m > 0 && m <= 10000 && n > 0 && n <= 10000 && m<=n) {
		while (m <= n) {
			lp = 2;
			prime_num_check = true;
			while (lp < m) {
				if (m % lp == 0)
					prime_num_check = false;
				lp++;
			}
			if (prime_num_check && m != 1){
				if (sum == 0)
					min = m;
				sum += m;
			}
			m++;
		}
		if (sum != 0) 
			std::cout << sum << '\n' << min << '\n';
		else
			std::cout << -1 << '\n';
	
	}
}
