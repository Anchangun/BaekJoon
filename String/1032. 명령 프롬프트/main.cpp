#include"UserData.hpp"
#include"CompareString.hpp"
int main() {
	UserData* user_data = new UserData();
	std::vector<std::string> data = user_data->get_data();
	if (data.size() == 0) {
		return 0;
	}
	
	CompareString* compare = new CompareString(data, user_data->get_size(), user_data->get_testcase());
	compare->run();
	delete compare;
	delete user_data;
	return 0;
}