#include<iostream>
#include<map>
int main() {
	int n = 0;
	std::map<int, int> user_data;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		std::cin >> temp;
		auto it = user_data.find(temp);
		if ( it != user_data.end()) {
			user_data[temp] = (it->second)+1;
		}
		else {
			user_data.insert({ temp, 1 });
		}
	}
	int v = 0;
	std::cin >> v;
	auto it = user_data.find(v);
	if (it != user_data.end()) {
		std::cout << it->second << '\n';
	}
	else {
		std::cout << '0' << '\n';
	}

	return 0;
}