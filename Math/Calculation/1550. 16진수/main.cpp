#include"cl_solution.hpp"
int main() {
	std::string test_data;
	cl_solution sol;
	std::cin >> std::hex>>test_data;
	if (test_data.length() <= 6 && test_data.length() > 0) {
		std::cout << sol.fn_run(test_data) << '\n';
	}
	return 0;
}