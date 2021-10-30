#include "cl_solution.hpp"

bool cl_solution::fn_arithmetic_progression(int num){
	int first_num=0 ,second_num = 0, old_difference =0,difference_num = 0;
	bool check=false;
	if (num < 100) {
		return true;
	}
	while (num>=10) {
		first_num = num % 10;
		second_num = (num/10) % 10;
		difference_num = first_num - second_num;
		if (check) {
			if (difference_num != old_difference)
				return false;
		}
		check = true;
		old_difference = difference_num;
		num /= 10;
	}
	return true;
}

int cl_solution::fn_run(int num){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int i = 1, cnt = 0;
	if (num <= 1000 && num >= 0) {
		if (num < 100)
			cnt=num;
		else {
			while (i <= num) {
				if (fn_arithmetic_progression(i))
					cnt++;
				i++;
			}
		}
		return cnt;
	}
}
