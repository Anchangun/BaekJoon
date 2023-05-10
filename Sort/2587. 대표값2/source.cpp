#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> arr;
	int agv = 0;
	for (int i = 0; i < 5; i++) {
		int num = 0;
		std::cin >> num;
		arr.push_back(num);
		agv += num;
	}
	agv /= 5;
	std::cout << agv << '\n';
	std::sort(arr.begin(), arr.end());
	std::cout << arr[2] << '\n';

	
	return 0;
}