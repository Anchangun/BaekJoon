#include "cl_solution.hpp"

int cl_solution::fn_run(){
    int lp=0;
    std::vector<int> arr;
    while (lp < 3) {
        int temp = 0;
        std::cin >> temp;
        arr.push_back(temp);
        lp++;
    }
    std::sort(arr.begin(), arr.end());
    return arr[1];
}
