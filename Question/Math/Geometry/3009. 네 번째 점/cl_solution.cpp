#include "cl_solution.hpp"

void cl_solution::fn_run()
{
	int size = 3;
	int lp = 0;
	int x = 0, y = 0;

	std::vector<int> v_x;
	std::vector<int> v_y;
	int result_x=0, result_y=0;
	while (lp < size) {
		std::cin>>x>>y;
		if(x>=1 && x<=1000 && y>=1 && y<=1000){
			v_x.push_back(x);
			v_y.push_back(y);
			lp++;
		}
	}
	std::sort(v_x.begin(), v_x.end());
	std::sort(v_y.begin(), v_y.end());
	result_x = (v_x[1] == v_x[0]) ? v_x[2] : v_x[0];
	result_y = (v_y[1] == v_y[0]) ? v_y[2] : v_y[0];
	std::cout << result_x << ' ' << result_y;
}
