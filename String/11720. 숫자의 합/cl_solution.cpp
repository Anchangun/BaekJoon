#include "cl_solution.h"

int cl_solution::fn_run(int num_size)
{
	char msg=NULL;
	int result=0, i=0;
	while (i < num_size) {
		std::cin >> msg;
		result += (msg - '0');
		i++;
	}
	return result;
}
