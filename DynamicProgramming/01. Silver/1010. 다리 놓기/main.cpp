#include <bits/stdc++.h>

constexpr int MAX_N = 30;

long long combination(int n, int r) {
    long long dp[MAX_N + 1][MAX_N + 1] = {0};

    for (int i = 0; i <= MAX_N; ++i) {
        dp[i][0] = dp[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    return dp[n][r];
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T = 0;
    std::cin >> T;

    while (T--) {
        int N, M;
        std::cin >> N >> M;
        if (T>0) {
            std::cout << combination(M, N) << '\n';
        }
        else {
            std::cout << combination(M, N) ;
        }
        if (T<0) {
            break;
        }
    }

    return 0;
}
