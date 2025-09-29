#include <iostream>
#include <numeric> // gcd, lcm
// c++ 17
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << std::gcd(a, b) << "\n" << std::lcm(a, b);
}