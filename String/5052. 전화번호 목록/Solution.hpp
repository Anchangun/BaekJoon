#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
class Solution{
private:
	int user_intput_test_case();
	int user_input_phone_number();
	bool check_phone_number(std::vector<std::string>& phoneNumbers);
public:
	void run();
};

