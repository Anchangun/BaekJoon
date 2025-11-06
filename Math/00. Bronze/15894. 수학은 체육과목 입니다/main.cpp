#include <bits/stdc++.h>

constexpr long long UNIT_PER_SQUARE = 4;

long long solution(long long n) {
    return n * UNIT_PER_SQUARE;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n = 0;
    std::cin >> n;

    std::cout << solution(n);
    return 0;
}
