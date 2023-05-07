#include<iostream>
#include<stack>
#include<memory>
int main() {
	int n=0,lp=0;
	std::unique_ptr<std::stack<int>> data=std::make_unique<std::stack<int>>();
	std::cin >> n;
	while (lp < n) {
		std::string command;
		std::cin >> command;
		if (command.compare("push") == 0) {
			auto num=0;
			std::cin >> num;
			(*data).push(num);
		}
		else if (command.compare("top") == 0) {
			if ((*data).size() > 0) {
			std::cout << (*data).top() << '\n';
			}
			else {
				std::cout << -1 << '\n';
			}
		}
		else if (command.compare("size") == 0) {
			std::cout << (*data).size() << '\n';
		}
		else if (command.compare("empty") == 0) {
			bool temp=false;
			((*data).size() > 0) ? temp = false : temp = true;
			std::cout << temp << '\n';
		}
		else if (command.compare("pop") == 0) {
			if ((*data).size() > 0) {
				std::cout << (*data).top()<<'\n';
				(*data).pop();
			}
			else {
				std::cout << "-1" << '\n';
			}
		}
		lp++;
	}
	return 0;
}