#include "cl_solution.hpp"

int cl_solution::fn_run()
{
	int size = 6 + 1;
	int first = 0, second = 0, third = 0;
	int* arr = new int[size];
	memset(arr, 0, sizeof(int) * size);


	std::cin >> first >> second >> third;
	if (first <= 6 && first > 0 && second <= 6 && second > 0 && third <= 6 && third > 0) {
		arr[first]++;
		arr[second]++;
		arr[third]++;
	}
	int lp = 1 , max = 0 , dice = 1 , same=0; 
	while (lp <= 6) {
		if(dice == arr[lp]){
			max = lp;
		}
		else if (dice < arr[lp]){
			max = lp;
			dice = arr[lp];
		}
		lp++;
	}
	switch (dice)
	{
	case 1:
		dice = (100* max);
		break;
	case 2:
		dice = (100*max)+1000;
		break;
	case 3:
		dice = (1000*max)+10000;
		break;
	default:
		break;
	}
	return dice;
}
