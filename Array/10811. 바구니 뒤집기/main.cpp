#include <iostream>
#include <memory>
int main() {
    int n=0, m=0;
    std::cin >> n >> m;

    std::unique_ptr<int[]> basket(new int[n]);
    for (int i = 0; i < n; i++) {
        basket[i] = i + 1;
    }

    for (int k = 0; k < m; k++) {
        int i, j;
        std::cin >> i >> j;
        i--; j--; 
        while (i < j) {
            std::swap(basket[i], basket[j]);
            i++; j--;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << basket[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}