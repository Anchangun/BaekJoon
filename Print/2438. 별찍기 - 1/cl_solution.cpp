#include "cl_solution.h"

void cl_solution::fn_run(int num){
	int i = 0, j=0;
	if (num >= 1 && num <= 100) {
		char star = '*',space= ' ';
		while (i < num) {
			while (j < num) {
				if (i >= j)
					std::cout << star;
				/*else
					std::cout << space;*/
				j++;
			}
			std::cout << "\n";
			j = 0;
			i++;
		}
	}
}
