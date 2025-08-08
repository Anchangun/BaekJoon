#include <iostream>
constexpr long long MIN_N = 0;
constexpr long long MAX_N = 20;

long long recursive(long long num) {
    if (num <= 1) {
        return 1;
    }

    return num * recursive(num - 1);
}
int main() {
    long long N = -1;
    [&]() {
        while (N<MIN_N || N>MAX_N) {
            std::cin >> N;
        }
    }();
    std::cout << recursive(N);
}