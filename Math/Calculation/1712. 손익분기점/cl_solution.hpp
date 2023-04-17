#pragma once
#include<iostream>
#define MAX_NUM 2100000000
class cl_solution{
private :
	int m_fixed_cost;
	int m_variable_cost;
	int m_selling_cost;
	const int m_c_max_num;
	void fn_user_data_input();
public :
	cl_solution();
	int fn_run();
};

