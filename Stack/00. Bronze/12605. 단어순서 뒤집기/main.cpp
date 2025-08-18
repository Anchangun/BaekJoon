#include <iostream>
#include <sstream>
#include <stack>
#include <string>

constexpr int MIN_N=0;
constexpr int MAX_N=5;
constexpr int MIN_L=1;
constexpr int MAX_L=25;
int main() {
    int N = -1;

    while (N< MIN_N || N > MAX_N) {
        std::cin >> N;
    }
    std::cin.ignore();
    for (int lp_input=0; lp_input<N;) {
        std::string user_str = "";
        std::stack<std::string> reverse_str;
        std::getline(std::cin,user_str);
        if (user_str.length() < MIN_L || user_str.length() > MAX_L) {
            continue;
        }
        std::istringstream iss(user_str);
        std::string temp;
        while (iss >> temp) {
            reverse_str.push(temp);
        }
        std::cout << "Case #"<<lp_input+1<<": ";
        while (!reverse_str.empty()) {
            std::cout << reverse_str.top();
            reverse_str.pop();
            if (!reverse_str.empty()) {
                std::cout << ' ';
            }
        }
        if (lp_input+1 != N) {
            std::cout<<'\n';
        }
        lp_input++;
    }
    return 0;
}