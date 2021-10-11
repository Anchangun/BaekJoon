#include "cl_solution.h"

void cl_solution::fn_run(int num){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int i = 0, cnt = 1;
	int a = 0, b = 0;

	while (i<num) {
		std::cin >> a;
		std::cin >> b;
		if (0 < a && b < 10) {
			std::cout << "Case #" << cnt << ": " << a + b<<"\n";
			i++;
			cnt++;
		}
	}
}
