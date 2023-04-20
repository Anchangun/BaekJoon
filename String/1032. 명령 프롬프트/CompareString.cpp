#include "CompareString.hpp"

CompareString::CompareString(std::vector<std::string>& data,int size,int test_case):data(data), size(size),test_case(test_case) {
}

void CompareString::run(){
	std::vector<char*> c_data;
	std::queue<int> index;
	if (test_case == 1) {
		std::cout << data[0] << '\n';
		return;
	}
	for (int i = 0; i < data.size(); i++) {
		c_data.push_back(const_cast<char*>(data[i].c_str()));
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < test_case; j++) {
			if (j + 1 == test_case) {
				continue;
			}
			if (c_data[j][i] != c_data[j+1][i]) {
				index.push(i);
				j= test_case;
			}
		}
	}
	if (index.size() == 0) {
		std::cout << c_data[0] << '\n';
		return;
	}
	else {
		std::string result;
		
		for (int i = 0; i < size; i++) {
			if (index.size() == 0) {
				result += c_data[0][i];
				continue;
			}
			if (i == index.front()) {
				result += '?';
				index.pop();
			}
			else {
				result+= c_data[0][i];
			}
		}
		std::cout << result << '\n';
	}

}
