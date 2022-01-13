#include "cl_solution.hpp"

void cl_solution::fn_run(){
	int test_case=0, height=0,width=0, number=0;
	std::cin >> test_case;
	//std::cout << "\n";
	for(int i=0; i<test_case;i++){
		std::cin >> height >> width >> number;
		int floor=0, address=0;
		floor = number%height;
		if (floor == 0){
				floor = height;
				address = number / height;
		}
		else
			address = (number / height) +1;
		std::cout << (floor * 100) + address << std::endl;
	}
}
