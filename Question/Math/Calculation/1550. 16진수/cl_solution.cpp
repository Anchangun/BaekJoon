#include "cl_solution.hpp"

int cl_solution::fn_run(std::string test_data){
	int hex=0;
	int lp = 0;
	while (lp < test_data.length()) {
		hex *= 16;
		if (test_data[lp] >= 'A' && test_data[lp] <= 'F') {
			hex += test_data[lp] - 'A' + 10;
		}
		else if(test_data[lp] >= '1' && test_data[lp] <= '9') {
			hex += test_data[lp] - '1' + 1;
		}	
		lp++;
	}
	
	return hex;
}
