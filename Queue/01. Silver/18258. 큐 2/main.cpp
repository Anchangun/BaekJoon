#include <deque>
#include <iostream>

#define MIN_N 1
#define MAX_N 2000000

#define CMD_PUSH  "push"
#define CMD_POP   "pop"
#define CMD_FRONT "front"
#define CMD_BACK  "back"
#define CMD_SIZE  "size"
#define CMD_EMPTY "empty"

int main () {
    //data 2,000,000개 처리를 위함
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::deque<int> data;
    int N =0;
    std::string S;
    [&]() {
        while (N<MIN_N || N>MAX_N) {
            std::cin >> N;
        }
    }();

    auto empty_check = [&]() -> bool {
        if (data.empty()) {
            std::cout << "-1\n";
            return true;
        }
        else {
            return false;
        }
    };

    [&]() {
        for (int i=0; i<N; i++) {
            std::cin>>S;
            if (S==CMD_PUSH) {
                int num =0;
                std::cin >> num;
                data.push_back(num);
            }
            else if (S == CMD_POP) {
                if (!empty_check()) {
                    std::cout << data.front() << '\n';
                    data.pop_front();
                }
            }
            else if (S==CMD_FRONT) {
                if (!empty_check())
                    std::cout<<data.front()<<'\n';
            }
            else if (S==CMD_BACK) {
                if (!empty_check())
                    std::cout<<data.back()<<'\n';
            }
            else if (S==CMD_SIZE) {
                std::cout<<data.size()<<'\n';
            }
            else if (S==CMD_EMPTY) {
                if (data.empty())
                    std::cout << "1\n";
                else
                    std::cout << "0\n";
            }

        }
    }();
    return 0;
}