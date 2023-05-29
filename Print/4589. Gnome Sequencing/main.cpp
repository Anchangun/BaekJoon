#include<iostream>
#include<vector>
#include<algorithm>
bool check_sort(std::vector<int> t);

int main() {
	int n=0;
	const std::string ordered = "Ordered";
	const std::string unordered = "Unordered";
	std::cin >> n;
	std::cout << "Gnomes:" <<'\n';
	std::vector<int> vector;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			int temp = 0;
			std::cin >> temp;
			vector.push_back(temp);
		}
		if (check_sort(vector)) {
			std::cout << ordered << '\n';
		}
		else {
			std::cout << unordered << '\n';
		}
		vector.clear();
	}


	return 0;
}

bool check_sort(std::vector<int> t) {
	return((t[1] - t[0]) * (t[2] - t[1]) > 0) ?true : false;
}
