#include <iostream>
#include <vector>
#include <algorithm>

constexpr int MIN_Q = 1;
constexpr int MAX_Q = 3000;

constexpr long long MIN_T = -1000000000LL;  // -10^9
constexpr long long MAX_T =  1000000000LL;  //  10^9

enum class X : int {
    ASC = 1,
    DESC = 2
};
void sort(std::vector<long long>& vec, bool order) {
    if (order)
        std::sort(vec.begin(), vec.end());
    else {
        std::sort(vec.begin(), vec.end(), [](int a, int b) {
            return a > b;
        });
    }
}
void insert(std::vector<long long>& vec, int x,long long t) {
    auto check = std::find(vec.begin(),vec.end(),t);
    if (check == vec.end()) {
        vec.insert(vec.begin()+x, t);
    }
}
void print(std::vector<long long>& vec) {
    std::cout << vec.size() << '\n';
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << ' ';
        }
    }
}
void solution(std::vector<long long>& vec, int Q) {
    for (int i = 0; i < Q; i++) {
        int cmd =0;
        std::cin >> cmd;
        if (cmd==1) {
            int order = 0;
            std::cin >>  order;
            if (order==static_cast<int>(X::ASC)) {
                sort(vec, true);
            }
            else if (order==static_cast<int>(X::DESC)) {
                sort(vec, false);
            }
            else {
                i--;
            }
        }
        else if (cmd==2) {
            int x =0;
            std::cin >> x;
            long long t =0;
            std::cin >> t;
            vec.insert(vec.begin()+x, t);
        }
        else {
            i--;
        }
    }
    print(vec);
}
int main() {
    int Q =0;
    std::vector<long long> vec;
    Q=[]()->int {
        int user_data=0;
        while (user_data > MAX_Q || user_data < MIN_Q) {
            std::cin>>user_data;
        }
      return   user_data;
    }();
    solution(vec,Q);
}