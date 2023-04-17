#include "Solution.hpp"

void Solution::fn_user_input(){
	int i = 0;
	while (i < m_user_max) {
		std::cin >> m_user_data[i];
		if (i == 0) {
			if (m_user_data[i] >= 0 && m_user_data[i] <= m_max_hour -1) {
				i++;
			}
		}
		else if(i == 1) {
			if (m_user_data[i] >= 0 && m_user_data[i] <= m_max_min -1) {
				i++;
			}
		}
		else {
			if (m_user_data[i] >= 0 && m_user_data[i] <= m_max_add) {
				i++;
			}
		}	
	}
}

Solution::Solution():m_user_max(USER_MAX), m_max_hour(MAX_HOUR), m_max_min(MAX_MIN), m_max_add(MAX_ADD) {
	m_user_data = (int*)malloc(sizeof(int) * m_user_max);
	fn_user_input();
}

Solution::~Solution(){
	free(m_user_data);
}

void Solution::fn_run(){
	int add_hour =m_user_data[MIN] + m_user_data[ADD];
	if (59 >= add_hour) {
		m_user_data[MIN] = add_hour;
	}
	else {
		int hour_sum = 0;
		int min = add_hour % m_max_min;
		add_hour = add_hour / m_max_min;
		hour_sum = m_user_data[HOUR] + add_hour;
		if (hour_sum <= m_max_hour-1) {
			m_user_data[HOUR] += add_hour;
			m_user_data[MIN] = min;
		}
		else {
			m_user_data[HOUR] = hour_sum - m_max_hour;
			m_user_data[MIN] = min;
		}
	}
	std::cout << m_user_data[HOUR] <<' ' << m_user_data[MIN] << std::endl;
}
