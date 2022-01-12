#include "cl_solution.hpp"
cl_solution::cl_solution() :m_c_max(MAX)
{
}
int cl_solution::fn_run(){
    int hiking=0, slip=0, height=0;
    int headway=1;
    std::cin >> hiking;
    std::cin >> slip;
    std::cin >> height;
    if ((1 <= slip && slip < hiking && hiking <= height && height <= m_c_max) == false){
        fn_run();
    }
    headway += (height-hiking)/(hiking-slip);
    return (height-hiking)%(hiking-slip) != 0 ? ++headway: headway;
}
