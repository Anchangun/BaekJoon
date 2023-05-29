#include<iostream>
#include<vector>
#include<algorithm>
bool check_sort(std::vector<int> t);

int main() {
	int n = 0;
	const std::string ordered = "Ordered";
	const std::string unordered = "Unordered";
	std::cin >> n;
	std::vector<int> vector;
	std::cout << "Gnomes:" << '\n';
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
	bool result = true;
	std::vector<int> copy = t;
	std::vector<int> reverse = t;
	std::reverse(reverse.begin(), reverse.end());
	std::sort(t.begin(), t.end());
	for (int i = 0; i < t.size(); i++) {
		if (t[i] != copy[i]) {
			result = false;
		}
	}
	if (result == false) {
		result = true;
		for (int i = 0; i < t.size(); i++) {
			if (t[i] != reverse[i]) {
				result = false;
			}
		}
		if (result == false) {
			return false;
		}
	}
	else {
		return true;
	}
	return true;
}
