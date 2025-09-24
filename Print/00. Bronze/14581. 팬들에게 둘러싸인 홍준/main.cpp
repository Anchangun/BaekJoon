#include <iostream>
#include <string>

#define STR ":fan:"
constexpr int COLUMN = 3;
constexpr int ROW = 3;

int main() {
    std::string S;
    std::cin >> S;

    auto print = []() {
        std::cout << STR;
    };

    for (int i = 0; i < COLUMN; i++) {
        for (int j = 0; j < ROW; j++) {
            if (i == 1 && j == 1) {
                std::cout << ':' << S << ':';
            } else {
                print();
            }
        }
        if (i != COLUMN - 1) {
            std::cout << '\n';
        }
    }

    return 0;
}
