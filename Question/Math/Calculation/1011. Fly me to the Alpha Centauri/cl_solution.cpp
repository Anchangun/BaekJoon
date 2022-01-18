#include "cl_solution.hpp"

void cl_solution::fn_run(int test_case)
{
	int lp = 0;
	while (lp < test_case) {
		long long x = 0, y = 0;
		int result =0;
		std::cin >> x >> y;
		if ((0 <= x) && (x < y) && y < pow(2, 31)) {
			double distance = y - x;
			double dis_s=0,dis_sc=0;
			dis_s = std::sqrt(distance);
			dis_sc = std::round(std::sqrt(distance));
			result = (dis_s <= dis_sc) ? 2 * dis_sc - 1 : 2 * dis_sc;
		}
		std::cout << result<<'\n';
		lp++;
	}
}
