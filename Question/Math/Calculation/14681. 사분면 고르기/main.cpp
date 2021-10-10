#include"cl_solution.h"
int main() {
	cl_solution sol;
	int x = 0, y = 0;
	std::cin >> x;
	std::cin >> y;
	std::cout<<sol.fn_quadrant(x, y)<<std::endl;
	return 0;

}