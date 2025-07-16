#include <iostream>
#include <cmath>
#define MAX_TILES 10000

int main() {
    int num = MAX_TILES + 1;
    [&]() {
        while (num>MAX_TILES) {
            std::cin >> num;
        }
    }();
    std::cout <<"The largest square has side length " <<static_cast<int>(std::sqrt(num))<<'.';
    return 0;
}