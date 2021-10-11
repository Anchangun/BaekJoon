#include "cl_solution.h"

void cl_solution::fn_run(int num) {
	int i = 1, j = 0;
	if (num >= 1 && num <= 100) {
		char star = '*', space = ' ';
		while (i <= num) {
			while (i < num - j) {
				std::cout << space;
				j++;
			}
			while (j < num) {
				std::cout << star;
				j++;
			}
			std::cout << "\n";
			j = 0;
			i++;
		}
	}
}
