#include <iostream>
#include <stack>

#define MIN_S 1
#define MAX_S 50

int main () {
    std::stack<char> S;
    int T = 0;
    std::cin >> T;


    for (int i=0; i < T; i++) {
        std::string data;
        bool is_vaild = true;
        std::cin>>data;
        for (char c : data) {
            if (c=='(')
                S.push(c);
            else {
                if (!S.empty()) {
                    S.pop();
                }
                else {
                    is_vaild = false;
                    break;
                }
            }
        }
        if (S.size()==0 && is_vaild) {
            std::cout<<"YES"<<std::endl;
        }
        else
            std::cout<<"NO"<<std::endl;

        std::stack<char> empty;
        std::swap(S, empty);
    }

    return 0;
}
