#include <bits/stdc++.h>
#define LEFT '('
#define RIGHT ')'

int solution(std::stack<char>& stick, const std::string& S) {
    int count = 0;
    for (int i = 0; i < (int)S.length(); ++i) {
        if (S[i] == LEFT) {
            stick.push(LEFT);
        }
        else {
            stick.pop();
            if (S[i - 1] == LEFT) {
                count += stick.size();
            } else {
                count += 1;
            }
        }
    }
    return count;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string S;
    std::stack<char> stick;
    std::cin >> S;

    std::cout << solution(stick, S);
    return 0;
}
