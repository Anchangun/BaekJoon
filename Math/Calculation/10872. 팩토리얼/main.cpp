#include"cl_solution.hpp"
int main() {
	int n = 0;
	std::cin >> n;
	if(0<=n&&n<=12){
		cl_solution sol;
		std::cout<<sol.fn_run(n)<<'\n';
	}
	return 0;
}