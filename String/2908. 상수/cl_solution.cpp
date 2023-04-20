#include "cl_solution.hpp"
void cl_solution::split_space(std::string origin_msg) {
	std::istringstream istream(origin_msg);
	std::string temp_msg;
	bool check = true;
	return_msg.clear();
	while (std::getline(istream, temp_msg, ' ')) {
		if (0 == temp_msg.compare("")) {
			check = false;
		}
		else
			check = true;
		if (check) {
			return_msg.push_back(temp_msg);
			check = true;
		}
	}
}

int cl_solution::fn_run(std::string user_data){
	split_space(user_data);
	if (return_msg.size() == 2) {
		if (0 != return_msg[0].compare(return_msg[1])) {
			int first_num = 0, second_num = 0;
			int reverse_first = 0, reverse_seconde = 0;
			first_num = std::stoi(return_msg[0]);
			second_num = std::stoi(return_msg[1]);
			while (first_num !=0) {
				reverse_first *= 10;
				reverse_first += first_num % 10;
				first_num /= 10;
			}
			while (second_num > 0) {
				reverse_seconde *= 10;
				reverse_seconde += second_num % 10;
				second_num /= 10;
			}
			return (reverse_first > reverse_seconde) ? reverse_first : reverse_seconde;
			
		}
		else
			return 0;
	}

	return 0;
}
