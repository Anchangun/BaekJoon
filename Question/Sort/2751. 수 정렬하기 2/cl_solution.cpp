#include "cl_solution.hpp"

void cl_solution::fn_run(int n)
{
	int lp = 0;
	std::vector<int> v_arr;
	while (lp < n) {
		int temp = 0;
		std::cin >> temp;
		if(std::abs(temp)<=1000000){
			v_arr.push_back(temp);
			lp++;
		}
	}
	std::sort(v_arr.begin(), v_arr.end());
	for (int num : v_arr)
		std::cout << num << '\n';
}
