#include "cl_solution.h"

cl_solution::cl_solution():upper_a(UPPERCASE_A), upper_z(UPPERCASE_Z), lower_a(LOWERCASE_A), lower_z(LOWERCASE_Z),
ori_zero(ORIGIN_ZERO){
	memset(arr, 0, sizeof(arr));
	max_num=0;
	max_num_char = 0;
}


std::string cl_solution::input_user_data(){
	std::string temp;
	std::cin >> temp;
	return temp;
}


char cl_solution::fn_run(){
	user_data = input_user_data();

	int lp_split = 0;
	while (lp_split < user_data.length()) {
		int temp=user_data.at(lp_split);
		if (temp>= upper_a &&temp<= upper_z) {
			arr[temp - upper_a]++;
		}
		else if (temp >= lower_a && temp <= lower_z) {
			arr[temp - (upper_a + ori_zero)]++;
		}
		lp_split++;
	}
	int lp_max= 0;
	while (lp_max < sizeof(arr)/sizeof(int)) {
		if (max_num < arr[lp_max])
			max_num = arr[lp_max];
		lp_max++;
	}
	lp_max = 0;
	bool max_overlap = false;
	while (lp_max < sizeof(arr)/sizeof(int)) {
		if (max_num == arr[lp_max]) {
			if (max_overlap)
				return '?';
			else{
				max_overlap = true;
				max_num_char = lp_max+ upper_a;
			}
		}
		lp_max++;
	}
	return max_num_char;
}
