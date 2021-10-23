#include "cl_solution.hpp"

void cl_solution::fn_run(int num){
	int i = 0, j = 0, user_data_size = 0, sum = 0, result_cnt= 0 ;
	double avg=0, result=0;

	while (i < num) {
		std::cin >> user_data_size;
		if(1<=user_data_size&&user_data_size<=1000){
			int* arr_data = new int[user_data_size];
			memset(arr_data, 0, sizeof(int) * user_data_size);
			while (j < user_data_size) {
				std::cin>>arr_data[j];
					if(0<=arr_data[j]&&arr_data[j]<=100){
					sum += arr_data[j];
					j++;
				}
			}
			j = 0;
			avg = (double)sum / (double)user_data_size;
			while (j < user_data_size) {
				if (arr_data[j] > avg) {
					result_cnt++;
				}
				j++;
			}
			std::cout <<std::fixed;
			std::cout.precision(3);
			std::cout << ((double)result_cnt / (double)user_data_size) * 100 <<"%\n";

			sum=result_cnt=j= sum = 0;
			avg = 0;
			delete arr_data;
			i++;
		}
	}
}
