#include<iostream>
constexpr int MIN_A=1;
constexpr int MAX_A=100;
constexpr int MIN_B=1;
constexpr int MAX_B=100;
int main(){
    int A = 0, B=0;
    [&]() {
        while (A<MIN_A|| A>MAX_A|| B<MIN_B|| B>MAX_B) {
            std::cin>>A>>B;
            std::cout<<A*B;
        }
    }();
    return 0;
}