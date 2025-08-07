#include<iostream>
#include<memory>
#include <cstring>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)
int main() {
	std::string n;
	std::cin >> n;
	std::shared_ptr<std::vector<int>> sp = std::make_shared<std::vector<int>>();
	std::shared_ptr<char> sp_c(new char[n.size() + 1],
								[](char* p) {delete p; });
	std::strcpy(sp_c.get(), n.c_str());


	for (size_t i = 0; i < n.length(); ++i) {
		int ascii_code = static_cast<int>(sp_c.get()[i]-'0');
		sp->push_back(ascii_code); 
	}

	std::sort((*sp).begin(), (*sp).end());
	std::reverse((*sp).begin(), (*sp).end());
	for (const auto& t: *sp) {
		std::cout << t;
	}

	return 0;
}