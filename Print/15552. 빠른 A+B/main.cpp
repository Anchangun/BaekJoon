#include"cl_solution.h"

int main() {
	cl_solution sol;
	int num_size=0;
	std::cin >> num_size;
	if(num_size<=1000000){
		sol.fn_run(num_size);
	}

}