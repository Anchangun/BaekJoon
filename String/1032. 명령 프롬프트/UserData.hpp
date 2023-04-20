#pragma once
#include<iostream>
#include<vector>
class UserData{
public :
	UserData();
	std::vector<std::string> get_data();
	int get_size();
	int get_testcase();
private:
	int m_test_case;
	std::vector<std::string> string_data;
	int string_size;
	void insert();
};

