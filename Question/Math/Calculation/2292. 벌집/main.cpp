#include"cl_solution.hpp"
#define MAX_DATA 1000000000
#define MIN_DATA 1
int main() {
	int user_data=0;
	std::cin >> user_data;
	if (user_data >= MIN_DATA && user_data <= MAX_DATA);
	cl_solution sol;
	std::cout<<sol.fn_run(user_data)<<"\n";
	return 0;
}