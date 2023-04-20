#include "cl_soltuion.hpp"


int cl_soltuion::fn_run(std::string user_data)
{
	int lp_split = 0 , sum=0, lp=0;
	while (lp_split < user_data.length()) {
		dial_num.push_back(user_data.at(lp_split));
		lp_split++;
	}

	while (lp < dial_num.size()) {
		int temp =dial_num[lp]-65;
		if (temp >= 0 && temp <= 2)
			sum += 3;
		else if (temp >= 3 && temp <= 5)
			sum += 4;
		else if(temp >=6 && temp <=8)
			sum += 5;
		else if (temp >= 9 && temp <= 11)
			sum += 6;
		else if (temp >= 12 && temp <= 14)
			sum += 7;
		else if (temp >= 15 && temp <= 18)
			sum += 8;
		else if (temp >=19 && temp <= 21)
			sum += 9;
		else if (temp >= 22 && temp <= 25)
			sum += 10;
		lp++;
	}

    return sum;
}
