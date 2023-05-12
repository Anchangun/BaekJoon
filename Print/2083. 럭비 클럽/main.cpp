#include<iostream>

#include"Member.hpp"
#include<vector>
#include<memory>
int main() {
	std::unique_ptr<std::vector<Gold::Member>> result = std::make_unique<std::vector<Gold::Member>>();
	while (1) {
		std::string name;
		std::cin >> name;
		int age = 0, weight = 0;
		std::cin >> age >> weight;
		if (name.compare("#") == 0 && age == 0 && weight == 0) {
			break;
		}
		else {
			Gold::Member temp;
			temp.set_name(name);
			temp.set_age(age);
			temp.set_weight(weight);
			(*result).push_back(temp);
		}
	}

	std::vector<Gold::Member>::iterator iter;
	for (iter = (*result).begin(); iter != (*result).end(); iter++) {
		if ((*iter).get_age() > 17 || (*iter).get_wight() >= 80) {
			std::cout << (*iter).get_name() << " Senior" << '\n';
		}
		else {
			std::cout << (*iter).get_name() << " Junior" << '\n';
		}
	}
	return 0;
}