#include <iostream>

int main() {
	int result = 0, max_lp=0,lp=0;
	int money = 0, cnt = 0 , sum_money=0;
	std::string print;
	std::cin >> result;
	if (result < 1 || result>1000000000) {
		return 0;
	}
	std::cin >> max_lp;
	if (max_lp < 1 || max_lp>100) {
		return 0;
	}
	while (lp < max_lp) {
		std::cin >> money >> cnt;
		if (money < 1 || money>1000000 || cnt < 1 || cnt>10) {
			return 0;
		}
		sum_money += (money*cnt);
		lp++;
	}
	
	(sum_money == result) ? print = "Yes" : print = "No";
	std::cout << print;
	return 0;
}