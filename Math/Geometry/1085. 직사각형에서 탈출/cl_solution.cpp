#include "cl_solution.hpp"

int cl_solution::fn_run()
{
	int x = 0, y = 0, w = 0, h = 0;
	int max_x=0, max_y=0;
	std::cin >> x >> y >> w >> h;
	if (1 <= w && h <= 1000 && 1 <= x && x <= w - 1 && 1 <= y && y <= h - 1) {
		max_x = (w / 2) >= x ?  max_x = x : max_x = (w - x);
		max_y = (h / 2) >= y ? max_y = y: max_y = (h - y);
	}
	return max_x<=max_y? max_x: max_y;
}
