#include "Solution.hpp"

void Solution::run() {
	int user_num[6] = {0,};
	int answer[6] = { 1,1,2,2,2,8 };
	for (size_t i = 0; i < 6 ; i++)
	{
		int num = 0;
		std::cin >> num;
		if (num >= 0 && num <= 10) {
			user_num[i] = num;
		}
		else {
			i--;
		}	
	}
	for (size_t i = 0; i < 6; i++){
			std::cout << answer[i] - user_num[i]<<' ';
	}
	std::cout << std::endl;

}