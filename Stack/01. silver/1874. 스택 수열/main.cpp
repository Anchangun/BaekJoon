#include <iostream>
#include <queue>
#include <stack>

constexpr int MIN_N = 1;
constexpr int MAX_N = 100000;
constexpr char push = '+';
constexpr char pop = '-';

int main() {
    int N = 0;
    while (N < MIN_N || N > MAX_N) {
        std::cin >> N;
    }

    std::queue<int> user_queue;
    for (int i = 0; i < N; ++i) {
        int temp;
        std::cin >> temp;
        user_queue.push(temp);
    }

    std::stack<int> data_stack;
    std::stack<char> op_stack;
    int next_push = 1;
    bool valid = true;

    while (!user_queue.empty()) {
        int target = user_queue.front();
        while (next_push <= target) {
            data_stack.push(next_push++);
            op_stack.push(push);
        }

        if (!data_stack.empty() && data_stack.top() == target) {
            data_stack.pop();
            op_stack.push(pop);
            user_queue.pop();
        } else {
            std::cout << "NO";
            valid = false;
            break;
        }
    }
    if (valid) {
        std::stack<char> reverse_stack;
        while (!op_stack.empty()) {
            reverse_stack.push(op_stack.top());
            op_stack.pop();
        }

        while (!reverse_stack.empty()) {

            std::cout << reverse_stack.top();
            if (reverse_stack.size()-1 != 0) {
                std::cout << '\n';
            }
            reverse_stack.pop();
        }
    }

    return 0;
}
