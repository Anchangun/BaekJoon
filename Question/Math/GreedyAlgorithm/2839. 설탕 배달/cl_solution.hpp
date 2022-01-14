#pragma once
#include<iostream>
#define MAX_WEIGHT 5
#define MIN_WEIGHT 3

class cl_solution{
private :
	const int max_weight;
	const int min_weight;
public :
	cl_solution();
	int fn_run(int user_data);
};

