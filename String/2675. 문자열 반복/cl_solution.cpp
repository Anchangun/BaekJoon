#include "cl_solution.h"

void cl_solution::fn_run(int num_size){
	if (num_size <= 1000 && num_size >= 1) {
		int i = 0;
		while(i<num_size){
		int loop_data=0;
		std::cin >> loop_data;
			if (loop_data <= 8 && loop_data >= 1) {
				std::string st_data;
				std::cin >> st_data;
				if (st_data.length() <= 20&&st_data.length()>=1) {
					std::vector<char> split_data;
					int j = 0, loop_check = 0;
					while (j<st_data.length()) {
						split_data.push_back(st_data.at(j));
						j++;
					}
					j = 0;
					std::string temp_data;
					temp_data.empty();
					while (j < split_data.size()) {
						while (loop_check < loop_data) {
							temp_data += split_data[j];
							loop_check++;
						}
						loop_check = 0;
						j++;
					}

					std::cout << temp_data<<"\n";
				}
				else
					fn_run(num_size);
				i++;			
			}
	
		}
	}
}
