#include <iostream>
#include <vector>
#include <algorithm>
bool all_upper(const std::string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (!(std::isupper(str[i]))) {
            return false;
        }
    }
    return true;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::string first_lcs, second_lcs;
    int first_len = 0, second_len = 0;
    std::cin >> first_lcs;
    std::cin >> second_lcs;
    first_len = first_lcs.length();
    second_len = second_lcs.length();
    if (first_len > 1000 || second_len > 1000|| !all_upper(first_lcs)|| !all_upper(second_lcs)) {
        return 0;
    }
    std::vector<std::vector<int>> dp(first_len + 1, std::vector<int>(second_len + 1, 0));
    for (int i = 1; i <= first_len; i++) {
        for (int j = 1; j <= second_len; j++) {
            if (first_lcs[i - 1] == second_lcs[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    std::cout << dp[first_len][second_len] << '\n';

    return 0;
}