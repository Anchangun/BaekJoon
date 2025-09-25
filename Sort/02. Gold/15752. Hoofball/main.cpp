#include <iostream>
#include <vector>
#include <algorithm>

constexpr int MIN_N = 1;
constexpr int MAX_N = 100;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    if (!(std::cin >> N)) return 0;

    std::vector<int> pos(N);
    for (int i = 0; i < N; ++i) std::cin >> pos[i];
    std::sort(pos.begin(), pos.end());

    if (N == 1) {
        std::cout << 1 << '\n';
        return 0;
    }

    std::vector<int> pass(N, -1);
    std::vector<int> indeg(N, 0);

    for (int i = 0; i < N; ++i) {
        if (i == 0) pass[i] = 1;
        else if (i == N - 1) pass[i] = N - 2;
        else {
            int left = pos[i] - pos[i - 1];
            int right = pos[i + 1] - pos[i];
            pass[i] = (left <= right) ? (i - 1) : (i + 1);
        }
        ++indeg[pass[i]];
    }


    int answer = 0;
    for (int i = 0; i < N; ++i) if (indeg[i] == 0) ++answer;

    for (int i = 0; i < N; ++i) {
        int j = pass[i];
        if (j > i && pass[j] == i && indeg[i] == 1 && indeg[j] == 1) {
            ++answer;
        }
    }

    std::cout << answer;
    return 0;
}

