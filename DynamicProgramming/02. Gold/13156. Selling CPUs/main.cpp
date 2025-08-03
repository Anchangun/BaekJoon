#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

constexpr int MIN_C = 1;
constexpr int MAX_C = 100;
constexpr int MIN_M = 1;
constexpr int MAX_M = 100;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int c = 0, m = 0;
    std::cin >> c >> m;

    std::vector<std::vector<long long>> merchants(m, std::vector<long long>(c + 1, 0));
    for (int j = 0; j < m; ++j) {

        for (int i = 1; i <= c; ++i) {
            long long p;
            std::cin >> p;
            merchants[j][i] = p;
        }
    }

    const long long NEG = LLONG_MIN / 4;
    std::vector<long long> dp_prev(c + 1, NEG), dp_next(c + 1, NEG);
    dp_prev[c] = 0;
    for (int j = 0; j < m; ++j) {
        std::fill(dp_next.begin(), dp_next.end(), NEG);
        for (int rem = 0; rem <= c; rem++) {
            if (dp_prev[rem] == NEG){
                continue;
            }
            for (int k = 0; k <= rem; k++) {
                long long price = (k == 0) ? 0LL : merchants[j][k];
                long long &target = dp_next[rem - k];
                long long cand = dp_prev[rem] + price;
                if (cand > target) {
                    target = cand;
                }
            }
        }

        dp_prev.swap(dp_next);
    }

    long long ans = 0;
    for (int r = 0; r <= c; ++r) {
        if (dp_prev[r] != NEG) {
            ans = std::max(ans, dp_prev[r]);
        }
    }

    std::cout << ans ;
    return 0;
}
