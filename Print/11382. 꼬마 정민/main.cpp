#include <iostream>

long long fn_user_data();

int main() {
	long long (*pf)(void)= fn_user_data;

	long long a = pf(), b = pf(), c = pf();
	std::cout << a + b + c;
	return 0;
}

long long fn_user_data()
{
	long long num = 0;
	std::cin >> num;
	return num;
}
