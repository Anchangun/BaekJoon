#include "cl_solution.h"

void cl_solution::fn_user_input()
{
	int i = 0, temp=0;
	arr_data = new int[num_size];
	memset(arr_data, 0, sizeof(int) * num_size);
	while (i < num_size) {
		std::cin >> temp;
		if (temp <= 100 && temp >= 0) {
			*(arr_data+i) = temp;
			if (max_num < *(arr_data + i))
				max_num = *(arr_data + i);
			
			i++;
		}
	}
}

cl_solution::cl_solution()
{
	arr_data = NULL;
	arr_trans_data = NULL;
	num_size = 0;
	max_num = 0;
	sum = 0;
	result = 0;
}

double cl_solution::fn_run(int num_size){
	this->num_size = num_size;
	if (num_size <= 1000 && num_size >= 1) {
		int i = 0;
		fn_user_input();
		arr_trans_data = new double[num_size];
		memset(arr_trans_data, 0, sizeof(double) * num_size);
		while (i < num_size) {
			*(arr_trans_data + i) = (double)(*(arr_data + i)) / (double)max_num * 100.0;
			result += *(arr_trans_data + i);
			i++;
		}
		delete arr_data;
		result /= (double)num_size;
		return result;
	}
	
	return 0.0;
}
