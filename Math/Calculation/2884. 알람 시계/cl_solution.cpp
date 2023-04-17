#include "cl_solution.h"

void cl_solution::fn_run(int hour, int min){
	if((0<=hour&&23>=hour) &&(0<=min&&59>=min)){
		if (min < 45) {
			min += 15;
			if (--hour < 0)
				hour = 23;
		}
		else
			min -= 45;
		std::cout << hour << " " <<min << std::endl;
	}
}
