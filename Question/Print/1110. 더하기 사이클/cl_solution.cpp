#include "cl_solution.h"

int cl_solution::fn_run(int num){
	if (num >= 0 && num <= 99) {
		int first_num = 0, second_num = 0, cnt=0, result=0;
		std::map<int,int> save_nums;

		while (1) {			
			first_num = num%10;
			second_num = num / 10;
			result = first_num + second_num;
			num = (first_num*10) + (result % 10);
			if (save_nums.find(num) != save_nums.end())
				break;
			save_nums.insert(std::pair<int,int>(num, cnt));
			cnt++;
		}
		return cnt;
	}
	
	return -1;
}
