#include <bits/stdc++.h>

// 문자열 숫자 덧셈 (a, b는 양수 문자열)
std::string addPositive(const std::string& a, const std::string& b) {
    std::string result;
    int carry = 0;
    int n = (int)a.size();
    int m = (int)b.size();
    int len = std::max(n, m);

    for (int i = 0; i < len; ++i) {
        int digitA = (i < n) ? a[n - 1 - i] - '0' : 0;
        int digitB = (i < m) ? b[m - 1 - i] - '0' : 0;
        int sum = digitA + digitB + carry;
        carry = sum / 10;
        result.push_back(sum % 10 + '0');
    }
    if (carry) {
        result.push_back(carry + '0');
    }
    std::reverse(result.begin(), result.end());
    return result;
}

// 문자열 숫자 뺄셈 (a >= b, a, b 양수)
std::string subtractPositive(const std::string& a, const std::string& b) {
    std::string result;
    int n = (int)a.size();
    int m = (int)b.size();
    int borrow = 0;

    for (int i = 0; i < n; ++i) {
        int digitA = a[n - 1 - i] - '0' - borrow;
        int digitB = i < m ? b[m - 1 - i] - '0' : 0;
        if (digitA < digitB) {
            digitA += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.push_back(digitA - digitB + '0');
    }

    while (result.size() > 1 && result.back() == '0') result.pop_back();
    std::reverse(result.begin(), result.end());
    return result;
}

// 문자열 숫자 곱셈 (a, b 양수)
std::string multiplyPositive(const std::string& a, const std::string& b) {
    int n = (int)a.size();
    int m = (int)b.size();
    std::vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = result[i + j + 1] + mul;
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    std::string s;
    bool leading = true;
    for (int digit : result) {
        if (leading && digit == 0) {
            continue;
        }
        leading = false;
        s.push_back(digit + '0');
    }
    if (s.empty()) s = "0";
    return s;
}

// 부호 있는 덧셈
std::string add(const std::string& a, const std::string& b) {
    bool negA = a[0] == '-';
    bool negB = b[0] == '-';

    std::string numA = negA ? a.substr(1) : a;
    std::string numB = negB ? b.substr(1) : b;

    if (negA == negB) {
        // 같은 부호 → 그냥 덧셈, 부호 유지
        return (negA ? "-" : "") + addPositive(numA, numB);
    } else {
        // 다른 부호 → 큰 수에서 작은 수 빼기
        if (numA == numB) {
            return "0";
        }
        if (numA.size() > numB.size() || (numA.size() == numB.size() && numA > numB)) {
            return (negA ? "-" : "") + subtractPositive(numA, numB);
        }
        else {
            return (negB ? "-" : "") + subtractPositive(numB, numA);
        }
    }
}

// 부호 있는 뺄셈 a - b = a + (-b)
std::string subtract(const std::string& a, const std::string& b) {
    bool negB = b[0] == '-';
    std::string bNeg = negB ? b.substr(1) : "-" + b;
    return add(a, bNeg);
}

// 부호 있는 곱셈
std::string multiply(const std::string& a, const std::string& b) {
    bool negA = a[0] == '-';
    bool negB = b[0] == '-';
    std::string numA = negA ? a.substr(1) : a;
    std::string numB = negB ? b.substr(1) : b;

    std::string result = multiplyPositive(numA, numB);
    if (result != "0" && (negA != negB)) {
        result = "-" + result;
    }
    return result;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string A, B;
    std::cin >> A >> B;

    std::cout << add(A, B) << '\n';
    std::cout << subtract(A, B) << '\n';
    std::cout << multiply(A, B);

    return 0;
}
