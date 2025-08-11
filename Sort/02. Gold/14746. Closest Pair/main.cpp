#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

constexpr int MAX_N = 100000;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    int c1, c2;
    std::cin >> c1 >> c2;

    std::vector<int> P(n), Q(m);
    for (int &x : P) 
        std::cin >> x;
    for (int &x : Q)    
        std::cin >> x;

    std::sort(P.begin(), P.end());
    std::sort(Q.begin(), Q.end());

    int min_x_diff = INT_MAX;
    int count_pairs = 0;

    int i = 0, j = 0;
    while (i < n && j < m) {
        int diff = (P[i] > Q[j]) ? (P[i] - Q[j]) : (Q[j] - P[i]);

        if (diff < min_x_diff) {
            min_x_diff = diff;
            count_pairs = 1;
        } else if (diff == min_x_diff) {
            count_pairs++;
        }

        if (P[i] < Q[j])
            i++;
        else ++j;
    }

    int total_min_dist = min_x_diff + ((c1 > c2) ? (c1 - c2) : (c2 - c1));
    std::cout << total_min_dist << ' ' << count_pairs;

    return 0;
}
