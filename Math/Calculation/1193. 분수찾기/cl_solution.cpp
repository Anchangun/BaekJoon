#include "cl_solution.hpp"

void cl_solution::fn_run(int user_data){
	int diagonal=0,sum=0, key=0;
	while (sum < user_data) {
		diagonal++;
		sum+= diagonal;
	}
	key = sum - user_data;

	if (diagonal % 2==1 )
		std::cout << key + 1 << '/'<< diagonal - key << "\n";
	else
		std::cout << diagonal - key << '/' << key + 1 << "\n";
}
