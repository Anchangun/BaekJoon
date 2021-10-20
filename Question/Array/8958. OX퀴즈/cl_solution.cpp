#include "cl_solution.h"

void cl_solution::fn_run(int num){
	int i = 0, j=0 , sum=0, score=0;
	std::string* arr_data=new std::string[num];


	while (i < num) {
		sum = 0, score=0;
		std::cin >> arr_data[i];
	
		while (j < arr_data[i].length()) {
			if (arr_data[i][j] == 'O') {
				score++;
				sum += score;
			}
			else
				score=0;
			j++;
		}
		j = 0;
		std::cout << sum << "\n";
		i++;
	}
	std::exit(1);
}
