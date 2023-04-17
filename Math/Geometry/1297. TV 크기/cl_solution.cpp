#include "cl_solution.hpp"

void cl_solution::fn_run(){
	int d = 0, h = 0, w = 0;
	std::cin >> d >> h >> w;
	if (5 <= d && d <= 1000 && 1 <= h && h <= 99 && 2 <= w && w <= 100 && h < w) {
		double ratio_h = 0, ratio_w = 0, ratio_d=0;
		ratio_h = std::pow(h,2);
		ratio_w = std::pow(w, 2);
		ratio_d = std::sqrt(ratio_h + ratio_w);

		double size_w = ((double)d*w)/ratio_d;
		double size_h = ((double)d*h) / ratio_d;
		size_w=std::floor(size_w);
		size_h=std::floor(size_h);
		std::cout << size_h << " "<< size_w;
	}
}
