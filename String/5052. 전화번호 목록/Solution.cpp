#include "Solution.hpp"

int Solution::user_intput_test_case(){
	int test_case = 0;
	std::cin >> test_case;
	if (test_case < 1 || test_case>50) {
		return -1;
	}
	return test_case;
}

int Solution::user_input_phone_number(){
	int number = 0;
	std::cin >> number;
	if (number < 1 || number>10000) {
		return -1;
	}
	return number;
}

bool Solution::check_phone_number(std::vector<std::string>& phone_numbers)
{
	std::sort(phone_numbers.begin(), phone_numbers.end());
	for (int i = 0; i < phone_numbers.size() - 1; i++) {
		if (phone_numbers[i + 1].find(phone_numbers[i]) == 0) {
			return false;
		}
	}
	return true;
}

void Solution::run(){
	int test_case = user_intput_test_case();
	if (test_case == -1) {
		return;
	}
	while (test_case>=1) {
		int num = user_input_phone_number();
		if (num == -1) {
			return;
		}
		std::vector<std::string> phone_numbers(num);
		int lp = 0;
		while (lp < num) {
			std::cin >> phone_numbers[lp];
			lp++;
		}

		if(check_phone_number(phone_numbers)==true) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
		test_case--;
	}
}
