#include<iostream>

int main() {
	std::string user_data;
	char* check_arr;

	std::cin >> user_data;
	if (user_data.length() > 100) {
		return 0;
	}
	check_arr = const_cast<char*>(user_data.c_str());
	for (int i = 0; check_arr[i] != '\0'; i++) {
		if (check_arr[i] >= 65 && check_arr[i] <= 90) {
			check_arr[i] += 32;
		}
		else if (check_arr[i] >= 97 && check_arr[i] <= 122) {
			check_arr[i] -= 32; // 소문자를 대문자로 변환
		}
		else {
			return 0;
		}
	}

	std::cout << check_arr;
	return 0;
}