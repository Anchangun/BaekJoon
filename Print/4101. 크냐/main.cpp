#include <iostream>
int main() {
    int a = 0, b = 0;
    while (true) {
        std::cin >> a >> b;
        if (a == 0 && b == 0) {
            return 0;
        }
        else if (a > b) {
            std::cout << "Yes" << std::endl;
        }
        else {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}
