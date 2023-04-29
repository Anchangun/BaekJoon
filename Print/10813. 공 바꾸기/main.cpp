#include <iostream>
#include <vector>
int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> baskets(n + 1);

    for (int i = 1; i <= n; i++) {
        baskets[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int a=0, b=0;
        std::cin >> a;
        std::cin >> b;
        std::swap(baskets[a], baskets[b]);
    }

    for (int i = 1; i <= n; i++) {
        std::cout << baskets[i] << ' ';
    }

    return 0;
}