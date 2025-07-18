
#include<iostream>
#include <map>
#include <algorithm>
#define MIN_N 1
#define MAX_N 100000

int main() {
    int N=0;
    std::string S="";
    std::map<char,int> count_map = {  {'H', 0}, {'I', 0}, {'A', 0}, {'R', 0}, {'C', 0}};
    [&]() {
        while (N<MIN_N || N>MAX_N) {
            std::cin>>N;
        }
        while (S.length()<N) {
            std::cin>>S;
        }
    }();
    [&]() {
        for (char ch : S) {
            if (count_map.find(ch) != count_map.end()) {
                count_map[ch]++;
            }
        }
    }();

    int min_count = std::min_element(
    count_map.begin(), count_map.end(),
    [](const auto& a, const auto& b)->int {
        return a.second < b.second;
    })->second;
    std::cout << min_count;
    return 0;
}