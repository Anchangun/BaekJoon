#include "cl_solution.hpp"

cl_solution::cl_solution():cro_hard_c(CROATIA_HARD_C), cro_soft_c(CROATIA_SOFT_C), cro_dz(CROATIA_DZ),
cro_d(CROATIA_D),cro_lj(CROATIA_LJ), cro_nj(CROATIA_NJ), cro_s(CROATIA_S), cro_z(CROATIA_Z){
}


std::string cl_solution::fn_check(std::string user_data, std::string find_msg){
    while(true){
        if (user_data.find(find_msg) != std::string::npos) {
            user_data.replace(user_data.find(find_msg), find_msg.length(),"@");
        }
        else {
            break;
        }
    }
    return user_data;
}

int cl_solution::fn_run(std::string user_data){
    std::string arr[8] = { cro_hard_c ,cro_soft_c,cro_dz,cro_d,cro_lj,cro_nj,cro_s,cro_z };
    for (int i = 0; i < sizeof(arr) / sizeof(std::string); i++) {
        user_data = fn_check(user_data, arr[i]);
    }
    return user_data.length();
}
