#include "cl_solution.hpp"

void cl_solution::fn_user_data_input(){
    std::cin >> m_fixed_cost;
    std::cin >> m_variable_cost;
    std::cin >> m_selling_cost;
    if (m_fixed_cost > m_c_max_num || m_variable_cost > m_c_max_num || m_selling_cost > m_c_max_num)
        fn_user_data_input();
}

cl_solution::cl_solution():m_c_max_num(MAX_NUM){
    m_fixed_cost = 0;
    m_variable_cost = 0;
    m_selling_cost = 0;
}

int cl_solution::fn_run(){
    int lp_cost = 0,sum=0;
    fn_user_data_input();
    int net_income= m_selling_cost- m_variable_cost;
    if (net_income <= 0)
        return -1;
    return (m_fixed_cost/net_income)+1;
}
