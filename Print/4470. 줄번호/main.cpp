#include<iostream>
#include <string>
int main() {
	int n = 0;
	std::cin >> n;
	std::cin.ignore();
	for (int i = 1; i <= n; i++) {
		std::string temp;
		std::getline(std::cin, temp);
		
		std::cout << i << ". " << temp<<'\n';
	}

	return 0;
}