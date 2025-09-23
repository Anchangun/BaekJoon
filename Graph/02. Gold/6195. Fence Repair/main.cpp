#include <iostream>
#include <queue>
#include <vector>

constexpr int MIN_N = 2;
constexpr int MAX_N = 20000;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N = 0;
    std::cin >> N;

    std::priority_queue<long long, std::vector<long long>, std::greater<long long>> pq;
    for (int i = 0; i < N; i++) {
        long long x;
        std::cin >> x;
        pq.push(x);
    }

    long long ans = 0;
    while (pq.size() > 1) {
        long long a = pq.top(); pq.pop();
        long long b = pq.top(); pq.pop();
        long long sum = a + b;
        ans += sum;
        pq.push(sum);
    }

    std::cout << ans;
    return 0;
}
