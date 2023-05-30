#include<iostream>

int main() {
	int arr[9][9];
	int max = -1;
	int row = 0, column = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			std::cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				row = i+1;
				column = j+1;
			}
		}
	}
	std::cout << max << '\n';
	std::cout << row << ' ' << column << '\n';

	return 0;
}