#include <bits/stdc++.h>

constexpr int MIN_N = 1;
constexpr int MAX_M = 2 * std::pow(10,5);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N = 0, M = MAX_M+1;
    while (N < MIN_N || M > MAX_M) {
        std::cin >> N >> M;
    }

    std::vector<long long> h(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> h[i];
    }

    std::vector<long long> c(M);
    for (int j = 0; j < M; ++j) {
        std::cin >> c[j];
    }

    for (int j = 0; j < M; ++j) {
        long long cane = c[j];
        long long bottom = 0;

        for (int i = 0; i < N; ++i) {
            if (bottom >= cane){
                break;
            }
            if (h[i] <= bottom){
                continue;
            }
            long long eat = std::min(h[i] - bottom, cane - bottom);
            h[i] += eat;
            bottom += eat;
        }
    }

    for (int i = 0; i < N; ++i) {
        std::cout << h[i];
        if (i!=N-1) {
            std::cout << '\n';
        }
    }

    return 0;
}
