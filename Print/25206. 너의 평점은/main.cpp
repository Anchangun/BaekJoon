#include <iostream>
#include<vector>
#include "score.h"
typedef struct Student {
	std::string subject_name;
	float credit;
	SCORE score;
}STU;

SCORE check_score(std::string str);
float check_score(SCORE score);

int main() {
	std::vector<STU> result;
	float sum = 0.0;
	float sum_credit=0.0;
	for (int i = 0; i < 20; i++) {
		STU temp_stu;
		std::string str;
		std::cin >> temp_stu.subject_name;
		std::cin >> temp_stu.credit;
		std::cin >> str;
		temp_stu.score = check_score(str);
		result.push_back(temp_stu);
	}
	for (const auto& v : result) {
		if (v.score != SCORE::P) {
			float temp = check_score(v.score);
			sum+=(v.credit* temp);
			sum_credit += v.credit;
		}
	}
	std::cout << sum / sum_credit << '\n';
	return 0;
}

SCORE check_score(std::string str)
{
	if (str.compare("A+") == 0) {
		return SCORE::A_P;
	}
	else if (str.compare("A0") == 0){
		return SCORE::A_O;
	}
	else if (str.compare("B+") == 0) {
		return SCORE::B_P;
	}
	else if (str.compare("B0") == 0) {
		return SCORE::B_O;
	}
	else if (str.compare("C+") == 0) {
		return SCORE::C_P;
	}
	else if (str.compare("C0") == 0) {
		return SCORE::C_O;
	}
	else if (str.compare("D+") == 0) {
		return SCORE::D_P;
	}
	else if (str.compare("D0") == 0) {
		return SCORE::D_O;
	}
	else if (str.compare("P") == 0) {
		return SCORE::P;
	}
	return SCORE::F;
}

float check_score(SCORE score)
{
	float result=0.0;
	switch (score)
	{
	case SCORE::A_P:
		result = 4.5;
		break;
	case SCORE::A_O:
		result = 4.0;
		break;
	case SCORE::B_P:
		result = 3.5;
		break;
	case SCORE::B_O:
		result = 3.0;
		break;
	case SCORE::C_P:
		result = 2.5;
		break;
	case SCORE::C_O:
		result = 2.0;
		break;
	case SCORE::D_P:
		result = 1.5;
		break;
	case SCORE::D_O:
		result = 1.0;
		break;
	case SCORE::F:
		break;
	case SCORE::P:
		break;
	default:
		break;
	}
	return result;
}
