#include "cl_solution.hpp"

void cl_solution::fn_run(){
	int n = 0, cnt=0;
	int lp = 0, lp_double=0;
	do {
		std::cin >> n;
		if (1 <= n && n <= 123456) {
		
			lp_double = n * 2;
			lp = n + 1;
			cl_sieve_of_eratosthenes m_sieve(lp_double);
			bool* result = m_sieve.fn_run();
			int size = m_sieve.fn_get_size();
			while (lp <= (size)) {

				if (result[lp] && (lp_double) >= lp)
					cnt++;
				lp++;
			}
			std::cout << cnt << '\n';
			cnt = 0;
		}
	} while (n != 0);

}
