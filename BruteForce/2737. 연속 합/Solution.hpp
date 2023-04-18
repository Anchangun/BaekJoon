#pragma once
#include<iostream>
#include<memory.h>
#include <vector>
class Solution{
private :
	int user_num ;
	int* m_user_data;
	void fn_user_input();
public :
	Solution();
	virtual ~Solution();
	void fn_run();
};

