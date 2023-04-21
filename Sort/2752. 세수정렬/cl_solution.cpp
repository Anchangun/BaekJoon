#include "cl_solution.hpp"

void cl_solution::fn_run()
{
	std::vector<int> v_data;
	int a = 0, b = 0, c = 0;
	std::cin >> a>>b>>c;
	if (a >= 1 && a <= 1000000 && b >= 1 && b <= 1000000 && c >= 1 && c <= 1000000) {
		v_data.push_back(a);
		v_data.push_back(b);
		v_data.push_back(c); 
		std::sort(v_data.begin(), v_data.end());
		for (int num : v_data)
			std::cout << num<<' ';
	}


}
