#include"cl_solution.hpp"
int main() {
	cl_solution sol;
	int user_data=0;
	std::cin >> user_data;
	if (3 <= user_data && user_data <= 5000)
		std::cout<<sol.fn_run(user_data);
	else
		std::cout << -1;
	return 0;
}