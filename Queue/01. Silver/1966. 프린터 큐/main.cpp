#include <iostream>
#include <deque>
#include <set>
#include <functional>

struct Data {
    int cost;
    int index;
};

int solution(int n, int m) {
    std::deque<Data> q;
    std::multiset<int, std::greater<int>> priority;

    for (int i = 0; i < n; ++i) {
        int cost;
        std::cin >> cost;
        q.push_back({cost, i});
        priority.insert(cost);
    }

    int count = 0;
    while (!q.empty()) {
        int highest = *priority.begin();
        Data front = q.front();
        q.pop_front();

        if (front.cost == highest) {
            count++;
            priority.erase(priority.begin());
            if (front.index == m) {
                return count;
            }
        } else {
            q.push_back(front);
        }
    }

    return -1;
}

int main() {
    int test_cases;
    std::cin >> test_cases;

    for (int i = 0; i < test_cases; ++i) {
        int n, m;
        std::cin >> n >> m;
        int result = solution(n, m);
        std::cout << result;
        if (i != test_cases - 1)
            std::cout << '\n';
    }

    return 0;
}
