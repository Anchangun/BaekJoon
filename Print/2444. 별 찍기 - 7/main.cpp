#include <iostream>
#include <functional>
void upper_part(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            std::cout << ' ';
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}

void lower_part(int N) {
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            std::cout << ' ';
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}
int main() {
    int N;
    std::cin >> N;

    auto upper = upper_part;
    auto lower = lower_part;
    upper(N);
    lower(N);

    return 0;
}
