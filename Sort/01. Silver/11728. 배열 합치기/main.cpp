#include<bits/stdc++.h>

constexpr long long MIN_N = 1;
constexpr long long MAX_M = 1000000;
constexpr long long MAX_NUM = 1000000000LL;
int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long N=0;
    long long M=0;
    std::vector<long long> vec;
    while (MIN_N > N || M > MAX_M) {
        std::cin >> N >> M;
    }

    for (int i=0;i<N+M;i++) {
        long long x=MAX_NUM+1;
        while (std::abs(x)> MAX_NUM) {
            std::cin >> x;
        }
        vec.push_back(x);
    }
    std::sort(vec.begin(), vec.end());

    for (int i=0;i<vec.size();i++) {
        std::cout << vec[i];
        if (i!=vec.size()-1) {
            std::cout << " ";
        }
    }

    return 0;
}