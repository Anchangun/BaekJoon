#include <iostream>
#include <vector>
int main() {
    int N, M;
    std::cin >> N;
    std::cin >> M;

    std::vector<int> baskets(N);

    for (int i = 0; i < M; i++) {
        int start, end, ball;
        std::cin >> start;
        std::cin >> end;
        std::cin >> ball;

        for (int j = start - 1; j < end; j++) {
            baskets[j] = ball;
        }
    }

    for (const auto & print : baskets) {
        std::cout << print << ' ';
    }

    return 0;
}