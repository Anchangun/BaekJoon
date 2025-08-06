#include <iostream>
#include <deque>


int main() {
    int n=0;
    std::cin >> n;

    std::deque<int> dq;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }

    while (dq.size() > 1) {
        dq.pop_front(); 
        int top = dq.front();
        dq.pop_front();
        dq.push_back(top);
    }

    std::cout << dq.front() << '\n';

    return 0;
}
