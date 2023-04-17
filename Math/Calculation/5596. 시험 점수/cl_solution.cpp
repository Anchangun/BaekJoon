#include "cl_solution.hpp"

int cl_solution::fn_run()
{
    int info=0, math=0, science =0, english = 0;
    int min_s = 0;
    int man_t = 0;

    std::cin >> info>> math>> science>> english;
    min_s = info+math+science+english;
    std::cin >> info >> math >> science >> english;
    man_t = info + math + science + english;
   
    return min_s>=man_t?min_s:man_t;
}
