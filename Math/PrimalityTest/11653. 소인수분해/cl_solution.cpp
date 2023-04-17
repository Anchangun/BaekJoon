#include "cl_solution.hpp"

void cl_solution::fn_run(int n){
	if (n != 1) {
		int prime_num=2;
		while (prime_num <= n) {
			while (n % prime_num == 0) {
				std::cout << prime_num <<'\n';
				n /= prime_num;
			}
			prime_num++;
		}
	}
}
