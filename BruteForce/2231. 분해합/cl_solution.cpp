#include "cl_solution.hpp"

void cl_solution::fn_run(int n){
    //int lp = n-1;
    int lp = 0;

    int result = 0;
    bool result_check = false;
    while (lp < n-1) {
        int sum=result=lp;

        while (sum>0) {
            result += sum % 10;
            sum /= 10;
        }
        if (n == result) {
            std::cout << lp << '\n';
            result_check=true;
            break;
        }
        lp++;
    }
    if(!result_check)
        std::cout << 0;

}
