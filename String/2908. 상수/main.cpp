#include"cl_solution.hpp"

int main() {
	std::string user_data;
	cl_solution sol;
	std::getline(std::cin, user_data);

	std::cout<<sol.fn_run(user_data);
	return 0;
}