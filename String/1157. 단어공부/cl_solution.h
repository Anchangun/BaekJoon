#pragma once
#include<iostream>
#include<cstring>
#define UPPERCASE_A 65
#define UPPERCASE_Z 90
#define LOWERCASE_A 97
#define LOWERCASE_Z 122
#define ORIGIN_ZERO 32

class cl_solution{
	private :
		std::string user_data;
		int arr[26];
		int max_num;
		char max_num_char;

		const int upper_a;
		const int upper_z;
		const int lower_a;
		const int lower_z;
		const int ori_zero;
		std::string input_user_data();
	public :
		cl_solution();
		char fn_run();
};

