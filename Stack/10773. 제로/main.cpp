#include<iostream>
#include<stack>
int main() {
	int k = 0;
	std::cin >> k;
	if (1 > k || 1000000 < k) {
		return 0;
	}
	int lp = 0;
	std::stack<int> jaemin_stack;
	while (lp < k) {
		int num=0;
		std::cin >> num;
		if (num == 0 && jaemin_stack.size() != 0) {
			jaemin_stack.pop();
		}
		else if (num == 0 && jaemin_stack.size() == 0) {
			lp++;
			continue;
		}
		else {
			jaemin_stack.push(num);
		}
		lp++;
	}
	int sum=0;
	while (!jaemin_stack.empty()) {
		sum += jaemin_stack.top();
		jaemin_stack.pop();
	}
	std::cout << sum;

	return 0;
}