#include<iostream>
#include <set>

constexpr int MIN_N= 1;
constexpr int MAX_N= 100000;
constexpr int MIN_OLD=1;
constexpr int MAX_OLD=200;
constexpr int MAX_NAME = 100;
struct Data {
    int age;
    std::string name;
    int seq;
    bool operator<(const Data& other) const {
        if (age != other.age) {
            return age < other.age;
        }
        return seq < other.seq;
    }
};
int main() {
    int N =0;
    std::set<Data> data;
    auto input = [](const int min,const int max) -> int {
        int num = -1;
        while (num < min || num > max) {
            std::cin >> num;
        }
        return num;
    };
    auto input_name = [](const int max) -> std::string {
        std::string name ="";
        while (name.length()>max || name.length()<= 0) {
            std::cin >> name;
        }
        return name;
    };

    N = input(MIN_N-1,MAX_N+1);
    for (int i = 0; i<N; i++) {
        int old = 0;
        old = input(MIN_OLD,MAX_OLD);
        std::string name ="";
        name = input_name(MAX_NAME);
        data.insert({old,name,i});
    }
    for (auto it = data.begin(); it != data.end(); ++it) {
        std::cout << it->age << ' ' << it->name;
        if (std::next(it) != data.end()) {
            std::cout << '\n';
        }
    }

    return 0;
}