#include "cl_solution.h"

void cl_solution::fn_run(int score){
	if (score >= 0 && score<=100) {
		if (score >= 90)
			std::cout << "A" << std::endl;
		else if(score>=80&& score<=89)
			std::cout << "B" << std::endl;
		else if (score >= 70 && score <= 79)
			std::cout << "C" << std::endl;
		else if (score >= 60 && score <= 69)
			std::cout << "D" << std::endl;
		else 
			std::cout << "F" << std::endl;
	}
}
