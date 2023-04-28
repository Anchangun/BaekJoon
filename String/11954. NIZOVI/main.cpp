#include<iostream>
void add_space(int num, std::string& temp);
int main() {
	//point space count 
	int space_cnt=0, lp=0;
	std::string s;
	std::string result;
	char old_char=NULL;
	std::cin >> s;
	char* c_str = const_cast<char*>(s.c_str());
	while (lp < s.length()) {
		if (c_str[lp] == '{') {
			std::string temp;
			add_space(space_cnt, temp);
			result += temp;
			result += "{\n";
			old_char = '\n';
			space_cnt += 2;
		}
		else if (c_str[lp] == ',') {
			if (old_char == '\n') {
				std::string temp;
				add_space(space_cnt, temp);
				result += temp;
				result += ",\n";
				old_char = '\n';
			}
			else {
				result += ",\n";
				old_char = '\n';
			}
		}
		else if (c_str[lp] == '}') {
			space_cnt -= 2;
			if (old_char != '\n' || old_char=='}') {
				result += '\n';
			}
			if (space_cnt == 0) {
				result += "}\n";
				old_char = '\n';
			}
			else {
				std::string temp;
				add_space(space_cnt, temp);
				result += temp;
				result += "}";
				old_char = '}';
			}
		}
		else {
			if (old_char == '\n') {
				std::string temp;
				add_space(space_cnt, temp);
				result += temp;
				result += c_str[lp];
				old_char = c_str[lp];
			}
			else {
				result += c_str[lp];
				old_char = c_str[lp];
			}
		}
		lp++;
	}
	std::cout << result << '\n';
	return 0;
}

void add_space(int num,std::string& temp){
	for (int i = 0; i < num; i++) {
		temp += ' ';
	}
}
