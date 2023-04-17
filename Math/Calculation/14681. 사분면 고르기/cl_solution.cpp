#include "cl_solution.h"

int cl_solution::fn_quadrant(int x,int y){
	if ((x <= 1000 && x >= -1000 && x != 0) && (y <= 1000 && y >= -1000 && y != 0)) {
		if (x > 0 && y > 0)
			return 1;
		else if (x < 0 && y > 0)
			return 2;
		else if (x < 0 && y < 0)
			return 3;
		else if (x > 0 && y < 0)
			return 4;
	}
	else
		return -1;
}
