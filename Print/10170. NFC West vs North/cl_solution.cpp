#include "cl_solution.hpp"

std::string cl_solution::fn_run()
{
	std::string result;
	result = "NFC West       W   L  T\n";
	result += "-----------------------\n";
	result += "Seattle        13  3  0\n";
	result += "San Francisco  12  4  0\n";
	result += "Arizona        10  6  0\n";
	result += "St. Louis      7   9  0\n\n";
	result += "NFC North      W   L  T\n";
	result += "-----------------------\n";
	result += "Green Bay      8   7  1\n";
	result += "Chicago        8   8  0\n";
	result += "Detroit        7   9  0\n";
	result += "Minnesota      5  10  1";
	return result;
}
