#include <iostream>
#include <vector>
#include <algorithm>

constexpr int MIN_N = 1;
constexpr int MAX_N = 1000000;

int main() {
    int N = 0;
    [&]() {
        while (N < MIN_N || N > MAX_N)
            std::cin >> N;
    }();

    std::vector<int> dp(N + 1, 0);
    dp[1] = 0;

    auto update = [&](int i) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
            dp[i] = std::min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0)
            dp[i] = std::min(dp[i], dp[i / 3] + 1);
    };

    for (int i = 2; i <= N; ++i){
        update(i);
    }
    std::cout << dp[N];
    return 0;
}
