#include"cl_solution.hpp"

int main() {
	int user_data=0;
	cl_solution sol;
	std::cin >> user_data;
	if(user_data>=1&&user_data<=10000000)
	sol.fn_run(user_data);
	return 0;
}