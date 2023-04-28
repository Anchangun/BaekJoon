#include "cl_solution.h"
#include "cl_solution.hpp"

long long sum(std::vector<int>& a)
{
	int i = 0;
	long long sum = 0;
	while (i < a.size()) {
		sum += a[i];
		i++;
	}
	return sum;
}