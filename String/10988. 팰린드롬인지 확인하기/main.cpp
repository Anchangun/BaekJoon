#include <iostream>
#include <algorithm>
int main() {
	std::string origin_str, reverse_str;
	std::cin >> origin_str;
	reverse_str = origin_str;
	std::reverse(reverse_str.begin(), reverse_str.end());
	if (origin_str.compare(reverse_str) == 0) {
		std::cout << 1;
	}
	else {
		std::cout << 0;
	}
	return 0;
}