#include <memory>
#include <iostream>
#include <functional>
#include <stack>

int main() {
	int n = 0, lp = 0;
	std::unique_ptr<std::stack<int>> data = std::make_unique<std::stack<int>>();
	std::cin >> n;
	auto push = [&data](int num) {
		(*data).push(num);
	};
	
	auto top = [&data]() {
		if ((*data).size() > 0) {
			std::cout << (*data).top() << '\n';
		}
		else {
			std::cout << -1 << '\n';
		}
	};

	auto pop = [&data]() {
		if ((*data).size() > 0) {
			std::cout << (*data).top() << '\n';
			(*data).pop();
		}
		else {
			std::cout << "-1" << '\n';
		}
	};

	auto empty = [&data]() {
		bool temp = false;
		((*data).size() > 0) ? temp = false : temp = true;
		std::cout << temp << '\n';
	};

	auto size = [&data]() {
		std::cout << (*data).size() << '\n';
	};

	while (lp < n) {
		std::string command;
		std::cin >> command;
		if (command.compare("push") == 0) {
			auto num = 0;
			std::cin >> num;
			push(num);
		}
		else if (command.compare("top") == 0) {
			top();
		}
		else if (command.compare("size") == 0) {
			size();
		}
		else if (command.compare("empty") == 0) {
			empty();
		}
		else if (command.compare("pop") == 0) {
			pop();
		}
		lp++;
	}

	return 0;
}
