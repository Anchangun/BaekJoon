#include "cl_solution.h"

int cl_solution::fn_run(int year){
	if (1 <= year && 4000 >= year) {
		if (year % 4 == 0) {
			if (((year % 100) != 0 || year % 400 == 0))
				return 1;
			else
				return 0;
		}
		else 
			return 0;
	}
	return -1;
}
