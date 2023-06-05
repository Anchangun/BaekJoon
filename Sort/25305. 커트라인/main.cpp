#include<iostream>
#include<vector>
#include<algorithm>
int main() {
	int n = 0, k = 0;
	std::cin >> n>>k;
	std::vector<int> vec;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		std::cin >> temp;
		vec.push_back(temp);
	}
	std::sort(vec.begin(), vec.end());
	std::reverse(vec.begin(), vec.end());
	if (n < k) {
		return 0;
	}
	std::cout << vec[k-1];
	return 0;
}