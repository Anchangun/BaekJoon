#include "cl_solution.hpp"

void cl_solution::fn_run(int n){
	std::vector<cl_person> v_person;
	int lp = 0;
	while (lp < n) {
		int weight = 0, tall = 0;
		std::cin >> weight >> tall;
		if(weight >=10 && weight<=200 && tall >=10 && tall <=200){
			cl_person temp_person;
			temp_person.fn_set_weight(weight);
			temp_person.fn_set_tall(tall);
			temp_person.fn_set_rank(1);
			v_person.push_back(temp_person);
			lp++;
		}
	}
	lp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (v_person[i].fn_get_weight() < v_person[j].fn_get_weight() && v_person[i].fn_get_tall() < v_person[j].fn_get_tall()) {
				v_person[i].fn_set_rank(v_person[i].fn_get_rank()+1);
			}
			else if (v_person[i].fn_get_weight() > v_person[j].fn_get_weight() && v_person[i].fn_get_tall() > v_person[j].fn_get_tall()) {
				v_person[j].fn_set_rank(v_person[j].fn_get_rank() + 1);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		std::cout<<v_person[i].fn_get_rank()<<' ';
	}

}
