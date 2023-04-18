#include "cl_person.hpp"

int cl_person::fn_get_tall()
{
    return m_tall;
}

int cl_person::fn_get_weight(){
    return m_weight;
}

int cl_person::fn_get_rank(){
    return m_rank;
}

void cl_person::fn_set_tall(int tall){
    m_tall = tall;
}

void cl_person::fn_set_weight(int weight){
    m_weight = weight;
}

void cl_person::fn_set_rank(int rank){
    m_rank = rank;
}
