#include <algorithm>
#include <iostream>
#include <vector>
constexpr int MIN_N = 1;
constexpr int MAX_N = 100000;
constexpr unsigned long long MAX_TIME = (1ULL << 32) - 1;
typedef struct data {
    unsigned long long start_time_;
    unsigned long long end_time_;

    data(unsigned long long start_time, unsigned long long end_time)
        : start_time_(start_time), end_time_(end_time) {}
} DATA;

void input_data(std::vector<DATA>& v, int N) {
    unsigned long long start_time=0, end_time=0;
    for (int i = 0; i < N;) {
        std::cin >> start_time >> end_time;
        if (start_time > MAX_TIME || end_time > MAX_TIME) {
            continue;
        }
        else {
            DATA data(start_time, end_time);
            v.push_back(data);
            i++;
        }
    }
}

void time_sort(std::vector<DATA>& v) {
    std::sort(v.begin(), v.end(), [](const DATA& a, const DATA& b) {
        if (a.end_time_ != b.end_time_) {
            return a.end_time_ < b.end_time_;
        }
        return a.start_time_ < b.start_time_;
    });
}
int count_meeting(std::vector<DATA>& v) {
    if (v.empty()){
        return 0;
    }
    // first meeting
    int count = 1;
    unsigned long long target = v[0].end_time_;
    for (int i = 1; i < (int)v.size(); ++i) {
        if (v[i].start_time_ >= target) {
            count++;
            target = v[i].end_time_;
        }
    }
    return count;
}


void solution(std::vector<DATA>& v) {
    time_sort(v);
    std::cout << count_meeting(v) ;
}
int main() {
    int N = 0;
    std::vector<DATA> v;
    [&]() {
        while (N<MIN_N || N>MAX_N) {
            std::cin>> N ;
        }
    }();
    input_data(v,N);
    solution(v);

    return 0;
}
