#include "cl_solution.hpp"

void cl_solution::fn_run(int test_case)
{
    int a = 0, b = 0;
    int result = 0;
    int lp = 0;
    
    while (lp < test_case) {
        std::cin >> a >> b;
        if (1 <= a && a < 100 && 1 <= b && b < 1000000) {
            b = (b % 4) == 0 ? 4 : b % 4;
            result = std::pow(a, b);
            result = (result % 10 == 0) ? 10 : result % 10;
            std::cout << result << '\n';
            lp++;
        }
    }

}
