#include<memory>
#include<iostream>
#include<functional>
#include<queue>

int main() {
	int n = 0;
	std::cin>>n;
	std::unique_ptr<std::queue<int>> queue = std::make_unique<std::queue<int>>();
	int lp = 0;


	auto push = [&queue](int num) {
		(*queue).push(num);
	};

	auto pop = [&queue]() {
		if ((*queue).size() > 0) {
			std::cout << (*queue).front() << '\n';
			(*queue).pop();
		}
		else {
			std::cout << "-1" << '\n';
		}
	};

	auto size = [&queue]() {
		std::cout << (*queue).size() << '\n';
	};

	auto empty = [&queue]() {
		if ((*queue).size() == 0) {
			std::cout << "1" << '\n';
		}
		else {
			std::cout << "0" << '\n';
		}
	};
	auto front = [&queue]() {
		if ((*queue).size() > 0) {
			std::cout << (*queue).front() << '\n';
		}
		else {
			std::cout << "-1" << '\n';
		}
	};
	auto back = [&queue]() {
		if ((*queue).size() > 0) {
			std::cout << (*queue).back() << '\n';
		}
		else {
			std::cout << "-1" << '\n';
		}
	};

	while (lp < n) {
		std::string command;
		std::cin >> command;
		if (command.compare("push") == 0) {
			auto num = 0;
			std::cin >> num;
			push(num);
		}
		else if (command.compare("pop") == 0) {
			pop();
		}
		else if (command.compare("size") == 0) {
			size();
		}
		else if (command.compare("empty") == 0) {
			empty();
		}
		else if (command.compare("front") == 0) {
			front();
		}
		else if (command.compare("back") == 0) {
			back();
		}

		lp++;
	}
	return 0;
}