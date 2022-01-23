#include "cl_solution.hpp"

void cl_solution::fn_run(int test_case)
{
	int lp = 0;
	while (lp < test_case) {
		int n = 0;

		std::cin >> n;
		if (n >= 4 && n <= 10000) {
			cl_sieve_of_eratosthenes soe(n);
			bool* arr_prime = soe.fn_run();
			int lp_arr=0;
			int size = soe.fn_get_size();
	
			int lp_half =n / 2;
				while (lp_half >= 2) {
					if (arr_prime[lp_half] && arr_prime[n - lp_half]) {
						std::cout << lp_half << ' ' << n-lp_half<<' ' << '\n';
						break;
					}
					lp_half--;
				}
		}
		lp++;
	}

}
