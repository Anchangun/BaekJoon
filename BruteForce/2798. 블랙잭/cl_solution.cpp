#include "cl_solution.hpp"

int cl_solution::fn_run()
{
    int n = 0, m = 0;
    int lp = 0, min = 300001, total=0;
    int* arr;
    std::cin >> n >> m;
  

    if (3 <= n && n <= 100 && 10 <= m && m <= 300000) {
        arr = new int[n];
        while(lp < n) {
            int temp = 0;
            std::cin >> temp;
            if (temp > 0 && temp < 100000){
                arr[lp] = temp;
                lp++;
            }
        }

        for (int i = 0; i < n-2; i++) {
            for (int j = i + 1; j < n-1; j++) {
                for (int k = j + 1; k < n; k++) {
                    int sum = arr[i] + arr[j] + arr[k];
                    if (sum - m == 0)
                        return sum;
                    else {
                        if (min > std::abs(sum - m) && m>=sum) {
                            min = std::abs(sum - m);
                            total = sum;
                        }
                    }
                }
            }
        }
    }
    return total;
}
