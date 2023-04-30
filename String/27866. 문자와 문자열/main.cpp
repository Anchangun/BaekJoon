#include<iostream>

int main() {
	std::string str;
	std::cin >> str;
	char* temp = const_cast<char*>(str.c_str());
	int i=0;
	std::cin >> i;

	std::cout << temp[i-1] << '\n';
	return 0;
}