#include<iostream>

int main() {
	std::string jaehwan;
	std::string doctor;
	std::cin >> jaehwan;
	std::cin >> doctor;
	std::string result;
	(jaehwan.length() < doctor.length()) ? result = "no" : result="go";
	std::cout << result << '\n';
	return 0;
}