#include "cl_solution.hpp"
void cl_solution::split_space(std::string origin_msg){
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

int cl_solution::fn_run(){
    std::string user_data;
	std::getline(std::cin , user_data);
    if (user_data.length() > 1000000)
        return -1;
	split_space(user_data);
    return return_msg.size();
}
