#include<iostream>
#include<vector>
int main() {
	const int num = 5;
	int max =-1 ;
	std::vector<std::string> data;
	for (int i = 0; i < num; i++) {
		std::string temp;
		std::cin >> temp;
		data.push_back(temp);
		if (static_cast<int>(temp.size()) > max) {
			max = temp.size(); 
		}
	}
	int vector_num=0;
	while (vector_num < max) {
		for (int j = 0; j < num; j++) {
			if (data[j].size() > vector_num) {
				std::cout << data[j][vector_num];
			}
		}
		vector_num++;
	}


	return 0;
}