#include "cl_solution.hpp"
int cl_solution::fn_run(int user_data){
    int cnt = 1, bee=1,house_check=6;
    while (bee < user_data) {      
        bee += house_check*cnt;
        cnt++;
    }
    return cnt;
}
