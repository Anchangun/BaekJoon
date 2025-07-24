#include <deque>
#include<iostream>

#define MIN_N 0
#define MAX_N 50

int main() {
    std::deque<int> center;
    int N = 0;
    int M = 0;
    int count = 0;
    [&]() {
        while (N < MIN_N || N > MAX_N) {
            std::cin>> N >> M;
            if (M>N || M <0)
                N=0;
        }
        for (int i =0 ; i < N; i++) {
            center.push_back(i);
        }
    }();


    return 0;
}