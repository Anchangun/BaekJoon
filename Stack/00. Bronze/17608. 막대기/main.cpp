#include <iostream>
#include <stack>

constexpr int N_MAX = 100000;
constexpr int N_MIN = 2;
constexpr int H_MAX = 100000;
constexpr int H_MIN = 1;

int main() {
    auto is_valid = [](int value, int min, int max) {
        return value >= min && value <= max;
    };

    std::stack<int> user_stack = [&is_valid]() {
        int N;
        std::stack<int> stack;

        while (true) {
            std::cin >> N;
            if (is_valid(N, N_MIN, N_MAX)) break;
        }

        for (int i = 0; i < N; ) {
            int h;
            std::cin >> h;
            if (!is_valid(h, H_MIN, H_MAX)) continue;
            stack.push(h);
            ++i;
        }

        return stack;
    }();

    auto count_visible_sticks = [](std::stack<int> s) {
        int max_height = 0;
        int count = 0;

        while (!s.empty()) {
            int current = s.top();
            s.pop();
            if (current > max_height) {
                max_height = current;
                ++count;
            }
        }

        return count;
    };

    int count = count_visible_sticks(user_stack);
    std::cout << count << std::endl;

    return 0;
}
