#include "cl_solution.hpp"

void cl_solution::fn_conting_sort(int n){
	int* scan_arr = new int[n];
	int* show_arr = new int[n];
	int* count = new int[max + 1];
	std::memset(scan_arr, 0, sizeof(int) * n);
	std::memset(show_arr, 0, sizeof(int) * n);
	std::memset(count, 0, sizeof(int) * (max + 1));
	int lp = 0;
	while (lp < n) {
		std::cin >> scan_arr[lp];
		count[scan_arr[lp]]++;
		lp++;
	}
	lp = 1;
	while (lp <= max) {
		count[lp] += count[lp - 1];
		lp++;
	}
	lp = 0;
	while (lp < n) {
		show_arr[count[scan_arr[lp]]] = scan_arr[lp];
		count[scan_arr[lp]]--;
		lp++;
	}

	for (int i = 0; i <= n; i++) {
		if (show_arr[i] != 0)
			std::cout << show_arr[i];
	}
}

cl_solution::cl_solution(): max(MAX_DATA)
{
}


void cl_solution::fn_run(int n){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int* count = new int[max];
	int num = 0;
	int lp = 0;
	std::memset(count, 0, sizeof(int) * (max));
	while (lp < n) {
		std::cin >> num;
		count[num]++;
		lp++;
	}
	for (int i = 0; i <= max; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++)
				std::cout << i<<'\n';
		}
	}

}
