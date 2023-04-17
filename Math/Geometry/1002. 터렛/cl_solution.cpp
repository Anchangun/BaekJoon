#include "cl_solution.h"

void cl_solution::fn_run(int test_case){
	int x_1=0, y_1 = 0 ;
	int x_2= 0, y_2 = 0;
	int r_1=0,r_2=0;
	int result = 0;
	int lp = 0;
	int distance = 0 , d_case_1=0, d_case_2=0;
	while (lp < test_case) {
		std::cin >> x_1 >> y_1 >> r_1 >> x_2 >> y_2 >> r_2;
		if (x_1 >= -10000 && x_1 <= 10000 && y_1 >= -10000 && y_1 <= 10000 && x_2 >= -10000 && x_2 <= 10000 && y_2 >= -10000 && y_2 <= 10000 && r_1 <= 10000 && r_2 <= 10000) {

			distance = (x_1 - x_2) * (x_1 - x_2) + (y_1 - y_2) * (y_1 - y_2);
			d_case_1 = (r_1 - r_2) * (r_1 - r_2);
			d_case_2 = (r_1 + r_2) * (r_1 + r_2);

			if (distance == 0)
				result = d_case_1 == 0 ? -1 : 0;
			else if (distance == d_case_1 || distance == d_case_2)
				result = 1;
			else if (distance > d_case_1&& distance < d_case_2)
				result = 2;
			else
				result = 0;
			std::cout << result << "\n";
			lp++;
		}
	}
}
