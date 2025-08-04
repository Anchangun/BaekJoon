#include<iostream>

constexpr int MIN_M = 1;
constexpr int MAX_F = 5;

int main() {
    int M = -1, F = -1;

    auto print = [](int a, int b) {
        std::cout << a + b << '\n';
    };

    [&]() {
        while (true) {
            std::cin >> M >> F;
            if (M == 0 && F == 0) break;
            if (MIN_M <= M && F <= MAX_F) {
                print(M, F);
            }
        }
    }();

    return 0;
}