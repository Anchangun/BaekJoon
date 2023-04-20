#include"cl_solution.hpp"

int main() {

	cl_solution sol;
	int user_data;
	std::cin >> user_data;
	if (user_data >= 0 && user_data <= 100) {
		std::cout<<sol.fn_run(user_data)<<"\n";
	}
	return  0;
}