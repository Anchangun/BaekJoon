#include "cl_solution.h"

void cl_solution::fn_run(int num_size, int target){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	if (num_size >= 1 && target <= 10000) {
		int i = 1,temp_data =0;

		while (i <= num_size) {
			std::cin >> temp_data;
			if (temp_data < target) {
				std::cout << temp_data << " ";
			}
			i++;
		}
		
	}
}
