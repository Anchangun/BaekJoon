#include <iostream>
int fn_user_data(int&);

int main() {
	int num=0,lp=0;
	if (fn_user_data(num) == 1) {
		while (lp < num / 4) {
			std::cout << "long ";
			lp++;
		}
		std::cout << "int";
	}
	return 0;
}

int fn_user_data(int& num){
	std::cin >> num;
	if (num < 4 || num>1000 || (num % 4 != 0)) {
		return -1;
	}
	else {
		return 1;
	}
}
