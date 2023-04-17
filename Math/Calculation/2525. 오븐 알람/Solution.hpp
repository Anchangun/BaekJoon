#pragma once
#include <iostream>
#include <vector>
#define USER_MAX 3
#define MAX_ADD 1000

#define MAX_HOUR 24
#define MAX_MIN 60
enum TIME {
	HOUR,
	MIN,
	ADD
};
class Solution{
private :
	int *m_user_data;
	const int m_user_max;

	const int m_max_hour;
	const int m_max_min;
	const int m_max_add;
	void fn_user_input();

public :
	Solution();
	virtual ~Solution();
	void fn_run();
	
};

