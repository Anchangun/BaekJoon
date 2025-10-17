#include <bits/stdc++.h>

constexpr long long MIN_N = 1;
constexpr long long MAX_N = 500000;
constexpr long long MIN_M = 1;
constexpr long long MAX_M = 500000;
constexpr long long MIN_DATA = -10000000;
constexpr long long MAX_DATA = 10000000;

long long input(long long min , long long max) {
    long long temp=min-1;
    while (temp<min || temp>max) {
        std::cin >> temp;
    }
    return temp;
}
int main () {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::unordered_set<long long> un_map;
    int N =0, M =0;


    N = input(MIN_N, MAX_M);
    for (int i = 0; i < N; i++) {
        long long data = input(MIN_DATA,MAX_DATA);
            if (un_map.find(data)==un_map.end()) {
                un_map.insert(data);
            }
        }
    M = input(MIN_M, MAX_M);
    for (int j=0;j<M;j++) {
        long long data = input(MIN_DATA,MAX_DATA);
        if (un_map.find(data)==un_map.end()) {
            std::cout<<'0';
        }
        else {
            std::cout<<'1';
        }
        if (j!=M-1) {
            std::cout <<' ';
        }
    }

    return 0;
}