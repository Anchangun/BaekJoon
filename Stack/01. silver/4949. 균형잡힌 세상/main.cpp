#include <bits/stdc++.h>

constexpr char OPEN_PARENTHESIS = '(';
constexpr char CLOSE_PARENTHESIS = ')';
constexpr char OPEN_BRACKET = '[';
constexpr char CLOSE_BRACKET = ']';

bool is_balanced(const std::string& s) {
    std::stack<char> st;

    for (char c : s) {
        if (c == OPEN_PARENTHESIS || c == OPEN_BRACKET) {
            st.push(c);
        }
        else if (c == CLOSE_PARENTHESIS) {
            if (st.empty() || st.top() != OPEN_PARENTHESIS) return false;
            st.pop();
        }
        else if (c == CLOSE_BRACKET) {
            if (st.empty() || st.top() != OPEN_BRACKET) return false;
            st.pop();
        }
    }

    return st.empty();
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string line;
    std::vector<std::string> results;

    while (true) {
        std::getline(std::cin, line);
        if (line == ".") break;

        results.push_back(is_balanced(line) ? "yes" : "no");
    }

    for (std::size_t i = 0; i < results.size(); ++i) {
        std::cout << results[i];
        if (i + 1 < results.size()) std::cout << '\n';
    }

    return 0;
}
