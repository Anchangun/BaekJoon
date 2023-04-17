#include "cl_solution.hpp"

void cl_solution::fn_run()
{
    int heru = 0, auset = 0, ausar = 0;
    int lp = 0;
    std::vector<int> v_triangle;
    while (true) {
        std::cin >> heru >> auset >> ausar;

        if (heru > 0 && heru < 30000 && auset > 0 && auset < 30000 && ausar> 0 && ausar < 30000) {
            v_triangle.push_back(heru);
            v_triangle.push_back(auset);
            v_triangle.push_back(ausar);
            std::sort(v_triangle.begin(), v_triangle.end());
            if (((v_triangle[0] * v_triangle[0]) + (v_triangle[1] * v_triangle[1])) == (v_triangle[2] * v_triangle[2]))
                std::cout << "right\n";
            else
                std::cout << "wrong\n";
        }
        else
            break;
        v_triangle.clear();

    }

}
