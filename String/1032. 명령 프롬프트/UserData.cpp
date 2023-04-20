#include "UserData.hpp"

UserData::UserData():m_test_case(0), string_size(0)
{
	insert();
}

std::vector<std::string> UserData::get_data(){
	return string_data;
}

int UserData::get_size(){
	return string_size;
}

int UserData::get_testcase()
{
	return m_test_case;
}

void UserData::insert()
{	
	std::cin >> m_test_case;
	if (m_test_case>50&& m_test_case<=0) {
		return;
	}
	int lp = 0;
	while (lp < m_test_case) {
		std::string temp;
		std::cin >> temp;
		if (string_data.size() == 0 || (temp.length() == string_data[0].length())) {
			string_size = temp.length();
			string_data.push_back(temp);
		}
		else {
			return;
		}
		lp++;
	}
}
