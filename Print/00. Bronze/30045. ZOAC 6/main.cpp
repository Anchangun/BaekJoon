#include<iostream>
#define N_MAX 500
#define N_MIN 1
#define S_MAX 500
#define S_MIN 1
#define T_ONE "01"
#define T_TWO "OI"
int main() {
    int N =0;
    std::string S="";
    auto contains  = [&](const std::string &l_find_string)-> bool {
        size_t result = S.find(l_find_string);
        if (result != std::string::npos) {
            return true;
        }
        else
            return false;
    };


    [&]() {
        while (N<N_MIN|| N>N_MAX) {
            std::cin>>N;
        }
        int count = 0;
        for (int i=0;i<N;) {
            std::cin>>S;
            if (S.length()<S_MIN || S.length()>S_MAX) {
                continue;
            }
            else {
                if (contains(T_ONE)==true|| contains(T_TWO)==true) {
                    count++;
                }
                i++;
            }
        }
        std::cout<<count;
    }();
    return 0;
}