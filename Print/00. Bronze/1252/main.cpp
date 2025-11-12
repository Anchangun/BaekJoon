#include <bits/stdc++.h>

std::string addBinary(const std::string& a, const std::string& b) {
    std::string result;
    int carry = 0;
    int n = static_cast<int>(a.size());
    int m = static_cast<int>(b.size());
    int len = std::max(n, m);

    for (int i = 0; i < len; ++i) {
        int bitA = (i < n) ? a[n - 1 - i] - '0' : 0;
        int bitB = (i < m) ? b[m - 1 - i] - '0' : 0;
        int sum = bitA + bitB + carry;
        result.push_back((sum % 2) + '0');
        carry = sum / 2;
    }

    if (carry) result.push_back('1');
    std::reverse(result.begin(), result.end());

    int pos = 0;
    while (pos < static_cast<int>(result.size()) - 1 && result[pos] == '0') ++pos;
    return result.substr(pos);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string A, B;
    std::cin >> A >> B;

    std::cout << addBinary(A, B);
    return 0;
}
