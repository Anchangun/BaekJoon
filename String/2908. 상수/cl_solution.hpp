#pragma once
#include<iostream>
#include<vector>
#include<sstream>
class cl_solution{
private:
	std::vector<std::string> return_msg;
	void split_space(std::string origin_msg);

public :
	int fn_run(std::string user_data);
};

