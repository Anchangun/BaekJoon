#include <iostream>
#include <stack>
constexpr int MIN_N = 1;
constexpr int MAX_N = 1000000;
enum class select : int {
    kFirst = 1,
    kSecond = 2,
    kThird = 3,
    kFourth = 4,
    kFifth = 5
};

void solution(std::stack<int> data, int N) {
    auto first = [&data]() {
        int temp = 0;
        std::cin >> temp;
        data.push(temp);
    };
    auto second = [&data]() {
        if (data.empty()) {
            std::cout << -1<<'\n';
        }
        else {
            std::cout << data.top() <<'\n';
            data.pop();
        }
    };
    auto third = [&data]() {
        std::cout << data.size() << '\n';
    };
    auto fourth = [&data]() {
        if (data.empty()) {
            std::cout << 1<<'\n';
        }
        else {
            std::cout << 0 <<'\n';
        }
    };
    auto fifth = [&data]() {
        if (data.empty()) {
            std::cout << -1<<'\n';
        }
        else {
            std::cout << data.top() << '\n';
        }
    };

    for (int i = 0; i < N;) {
        int f_temp = 0;
        std::cin >> f_temp;
        if (f_temp < 1 && f_temp > 5) {
            continue;
        }
        else {
            if (f_temp == static_cast<int>(select::kFirst)) {
                first();
            }
            else if (f_temp == static_cast<int>(select::kSecond)) {
                second();
            }
            else if (f_temp == static_cast<int>(select::kThird)) {
                third();
            }
            else if (f_temp == static_cast<int>(select::kFourth)) {
                fourth();
            }
            else if (f_temp == static_cast<int>(select::kFifth)) {
                fifth();
            }
            i++;
        }
    }

}
int main() {
    int N =0 ;
    std::stack<int> data;
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    [&](){
        while (N<MIN_N|| N>MAX_N) {
            std::cin>>N;
        }
    }();
    solution(data, N);
    return 0;
}