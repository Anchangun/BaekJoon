#include<iostream>
#include<algorithm> 
#include<vector>
#include <cstring>

int main(){
	const int max = 30;
	bool result[max+1];

	memset(result, true, sizeof(bool) * max+1);
	result[0] = false;
	for (auto i = 1; i < max-1;i++) {
		int num = 0;
		std::cin >> num;
		result[num] = false;
	}
	std::vector<int> support;
	for (auto a=0; a < max+1;a++) {
		if (result[a] == true) {
			support.push_back(a);
		}
	}
	std::sort(support.begin(), support.end());
	for (auto p : support) {
		std::cout << p << '\n';
	}

	return 0;
}