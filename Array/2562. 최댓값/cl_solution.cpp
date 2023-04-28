#include "cl_solution.h"

void cl_solution::fn_run(){
	int i = 0, size = 9, max=-1, max_cnt=-1;
	int* arr_data=new int[size];
	while (i < size) {
		std::cin >> arr_data[i];
		i++;
	}
	i = 0;
	while (i < size) {
		if (max < arr_data[i]){
			max = arr_data[i];
			max_cnt = i+1;
		}
		i++;
	}
	std::cout << max << "\n";
	std::cout << max_cnt;

}
