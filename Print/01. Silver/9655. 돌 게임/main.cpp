#include <iostream>

constexpr int MIN_N = 1;
constexpr int MAX_N = 1000;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N = 0;
    [&]() {
        while (N < MIN_N || N > MAX_N) {
            std::cin >> N;
        }
    }();

    std::cout << ((N % 2) ? "SK" : "CY");
    return 0;
}
