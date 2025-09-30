#include <iostream>

constexpr int MAX = 8;
int main() {
    int arr[MAX];
    for (int i = 0; i < MAX; i++) {
        std::cin >> arr[i];
    }

    bool ascending = true, descending = true;
    for (int i = 0; i < MAX-1; i++) {
        if (arr[i] + 1 != arr[i + 1]) {
            ascending = false;
        }
        if (arr[i] - 1 != arr[i + 1]) {
            descending = false;
        }
    }

    if (ascending) {
        std::cout << "ascending";
    }
    else if (descending){
        std::cout << "descending";
    }
    else {
        std::cout << "mixed";
    }
    return 0;
}