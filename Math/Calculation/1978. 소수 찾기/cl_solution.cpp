#include "cl_solution.hpp"

int cl_solution::fn_run(int test_case){
	int lp = 0;
	int result = 0;
	while (lp < test_case) {
		int num = 0;
		std::cin >> num;
	
		if (num <= 1000 && num > 0) {	
			int prime_num=2;
			bool prime_num_check=true;
			while (prime_num < num) {
				if (num % prime_num == 0)
					prime_num_check = false;
				prime_num++;
			}
			if (prime_num_check&&num!=1)
				result++;
		}
		lp++;
	}

	return result;
}
