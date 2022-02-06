#include "cl_solution.hpp"
int cl_solution::fn_run(int n){
    if (n <= 1) {
        return 1;
    }
    return n * fn_run(n-1);
}
