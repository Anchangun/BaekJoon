#pragma once
#include <iostream>
#include <cstring>
class cl_solution
{
	private : 
		int* arr_data;
		double* arr_trans_data;
		int num_size, max_num, sum;
		double result;
		void fn_user_input();
	public :
		cl_solution();
		double fn_run(int num_size);

};

