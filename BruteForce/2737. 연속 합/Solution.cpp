#include "Solution.hpp"

void Solution::fn_user_input(){

	std::cin >> user_num;
	if (user_num > 0) {
		m_user_data = (int*)malloc(sizeof(int) * user_num);
		memset(m_user_data, 0, sizeof(int) * user_num);
	}

}

Solution::Solution():user_num(0),m_user_data(nullptr){
		std::ios::sync_with_stdio(0);
		fn_user_input();
}

Solution::~Solution() {
	if (user_num > 0){
		free(m_user_data);
	}
}

void Solution::fn_run()
{
	std::vector<int> result;
	int lp = 0;
	while (lp < user_num) {
		int&& num=0;
		int cnt = 0, dis_lp=2;
		std::cin >> num;
		num--;
		
		while (dis_lp <= num) {
			num -= dis_lp;
			cnt += (num % dis_lp) == 0 ? true : false;
			dis_lp++;
		}
		result.push_back(cnt);
		lp++;
	}
	std::vector<int>::iterator iter= result.begin();
	for (iter; iter != result.end(); iter++) {
		std::cout << *iter << std::endl;
	}

}

