#include "cl_solution.h"


cl_solution::cl_solution(){
	arr_data = new int[REM_NUM];
	memset(arr_data, 0, sizeof(int) * REM_NUM);
}

int cl_solution::fn_run()
{
	int i = 0, temp = 0, cnt=0;
	while (i < SIZE) {
		std::cin >> temp;
		if (temp <= 1000 && temp >= 0) {
			if (0==arr_data[temp % REM_NUM]++)
				cnt++;
			i++;
		}
	}
	return cnt;
}
