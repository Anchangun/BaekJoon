#include"cl_soltuion.hpp"

int main() {
	cl_soltuion sol;
	std::string user_data;
	std::cin >> user_data;
	if (user_data.length() >= 2 && user_data.length() <= 15) {
		std::cout<<sol.fn_run(user_data);
	}

	return 0;
}