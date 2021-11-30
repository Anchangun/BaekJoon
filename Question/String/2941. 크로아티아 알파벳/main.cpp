#include"cl_solution.hpp"

int main() {
	cl_solution sol;
	std::string user_data;
	std::cin >> user_data;
	std::cout<<sol.fn_run(user_data);
	return 0;
}