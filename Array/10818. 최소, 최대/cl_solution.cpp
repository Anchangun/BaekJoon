#include "cl_solution.h"

void cl_solution::fn_run(int num){
	if(1<=num&&num<=1000000){
	int i = 0, max=-1000001,min= 1000001;
	int*arr_data = new int[num];
	while (i < num) {
		std::cin >> arr_data[i];
		i++;
	}
	i = 0;
	while (i < _msize(arr_data)) {
		if (min > arr_data[i])
			min = arr_data[i];
		if (max < arr_data[i])
			max = arr_data[i];
		i++;
	}
	std::cout << min << " " << max << std::endl;
	}
}
