#include"cl_solution.h"

int main() {
		cl_solution sol;
		int hour = 0, min = 0;
		std::cin >> hour;
		std::cin >> min;
		sol.fn_run(hour, min);
	return 0;
}