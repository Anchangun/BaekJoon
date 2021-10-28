#include "cl_solution.h"

int cl_solution::self_num(int num){
	int result = 0;
	result += num;
	while (num > 0) {
		result += num % 10;
		num /= 10;
	}
	return result;
}

void cl_solution::fn_run(){
	std::ios_base::sync_with_stdio(false); 
	std::cin.tie(NULL);
	int i = 1 ,temp =0;

	vec_num = new std::vector<bool>(10001,true);

	while (i <= vec_num->size()) {
		temp = self_num(i);
		if(temp<=10000)
		(*vec_num)[temp] = false;
		i++;
	}
	i = 1;
	while (i < vec_num->size()) {
		
		if ((*vec_num)[i] == true) {
			std::cout << i << "\n";
		}
		i++;
	}
	delete vec_num;
}
