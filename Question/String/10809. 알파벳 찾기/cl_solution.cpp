#include "cl_solution.h"
void cl_solution::fn_run()
{
	std::string temp;
	int i = 0, chage_data=0;
	int alphabet[26];
	memset(alphabet, -1, sizeof(alphabet));
	std::cin >> temp;

	while (i < temp.size()) {
		chage_data = temp.at(i);

		if(chage_data>=97&& chage_data<=122){
			if(alphabet[chage_data - 97]>i|| alphabet[chage_data - 97]==-1)
				alphabet[chage_data-97]=i;
		}
		i++;
	}
	i = 0;
	while (i < sizeof(alphabet) / sizeof(int)) {
		std::cout << alphabet[i] << " ";
		i++;
	}
}
