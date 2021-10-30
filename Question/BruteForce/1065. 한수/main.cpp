#include"cl_solution.hpp"

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int num = 0;
	cl_solution sol;
	std::cin >> num;
	std::cout<<sol.fn_run(num);

	return 0;
}