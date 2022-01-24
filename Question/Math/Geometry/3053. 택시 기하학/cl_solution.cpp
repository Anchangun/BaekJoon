#include "cl_solution.hpp"

void cl_solution::fn_run( double r){
	std::cout<<std::fixed;
	std::cout.precision(6);
	std::cout << std::pow(r,2)*M_PI << '\n'<<  2* std::pow(r,2)<<'\n';
}
