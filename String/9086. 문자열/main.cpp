#include <iostream>
int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        std::string str;
        std::cin >> str;
        std::cout << str[0] << str[str.length() - 1] << std::endl;
    }
    return 0;
}