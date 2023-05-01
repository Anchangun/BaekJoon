#include<iostream>
#include<cstring>
#include<memory>

std::unique_ptr<std::unique_ptr<int[]>[]> create_2d_array(int n, int m) {
	auto mul_arr = std::make_unique<std::unique_ptr<int[]>[]>(n);
	for (int i = 0; i < n; i++) {
		mul_arr[i] = std::make_unique<int[]>(m);
	}
	return mul_arr;
}

void input_2d_array(std::unique_ptr<std::unique_ptr<int[]>[]>& arr, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cin >> arr[i][j];
		}
	}
}

void sum_array(const std::unique_ptr<std::unique_ptr<int[]>[]> a, const std::unique_ptr<std::unique_ptr<int[]>[]> b, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << a[i][j] + b[i][j] << ' ';
		}
		std::cout << '\n';
	}
}
int main() {
	int n = 0, m = 0;
	std::cin >> n >> m;

	auto mul_arr_a = create_2d_array(n, m);
	auto mul_arr_b = create_2d_array(n, m);
	
	input_2d_array(mul_arr_a, n, m);
	input_2d_array(mul_arr_b, n, m);
	sum_array(std::move(mul_arr_a),std::move(mul_arr_b), n, m);

	return 0;
}