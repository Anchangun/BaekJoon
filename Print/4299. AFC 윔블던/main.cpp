#include <iostream>
#include <cmath>

int main() {
    int result = 0, sub = 0;
    std::cin >> result >> sub;

    if (sub > result) {
        std::cout << -1;
        return 0;
    }

    int a = (result + sub) / 2;
    int b = result - a;

    if ((a + b == result) && (std::abs(a - b) == sub)) {
        if (a > b) {
            std::cout << a << ' ' << b;
        }
        else {
            std::cout << b << ' ' << a;
        }
    }
    else {
        std::cout << -1;
    }

    return 0;
}