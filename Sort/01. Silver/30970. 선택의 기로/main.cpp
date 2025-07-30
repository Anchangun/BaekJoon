#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

constexpr int MIN_N=2;
constexpr int MAX_N=100000;
constexpr int MIN_Q=1;
constexpr int MAX_P = 10000;
constexpr int SELECT = 2;

typedef struct miniature {
    int quality_;
    int price_;
    bool operator==(const struct miniature& other) const {
        return quality_ == other.quality_ && price_ == other.price_;
    }
    miniature(int q ,int p) : quality_(q), price_(p) {
    }
}MINI;

void first_choice(std::vector<MINI>& v) {
    std::sort(v.begin(), v.end(), [](const MINI& a, const MINI& b) {
        if (a.quality_ != b.quality_) {
            return a.quality_ > b.quality_;
        }
        return a.price_ < b.price_;
    });
}
void second_choice(std::vector<MINI>& v) {
    std::sort(v.begin(), v.end(), [](const MINI& a, const MINI& b) {
        if (a.price_ != b.price_) {
            return a.price_ < b.price_;
        }
        return a.quality_ > b.quality_;
    });
}
void print(std::vector<MINI>& v) {
    for (size_t i = 0; i < SELECT; ++i) {
        if (i != SELECT - 1)
            std::cout<< v[i].quality_ << ' '<< v[i].price_<<' ';
        else {
            std::cout<< v[i].quality_ << ' '<< v[i].price_;
        }
    }
    std::cout << '\n';
}

void input(std::vector<MINI>& v , int N) {
    int Q = 0, P = 0;
    std::set<std::pair<int, int>> check;
    int count = 0;

    while (count < N) {
        std::cin >> Q >> P;
        if (Q >= MIN_Q && P <= MAX_P) {
            if (check.insert({Q, P}).second) { 
                v.emplace_back(Q, P);
            }
            count++;
        }
    }
}
void solution(std::vector<MINI>& v, int N) {
    input(v, N);
    first_choice(v);
    print(v);
    second_choice(v);
    print(v);
}
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int N =0;
    std::vector<MINI> v;
    [&]() {
       while (N<MIN_N||N>MAX_N) {
           std::cin>>N;
       }
    }();
    solution(v,N);

}