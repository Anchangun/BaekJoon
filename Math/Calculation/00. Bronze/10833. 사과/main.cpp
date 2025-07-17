#include<iostream>
int main() {
    int N=0;
    int count=0;
    int apple_a =0, apple_b=0;
    [&]() {
        while (1>N || 100<N) {
            std::cin>>N;
        }
        for (int i=0; i<N;) {
            std::cin>>apple_a>>apple_b;
            if (1>apple_a || 100<apple_a || 1> apple_b || 100<apple_b) {
                continue;
            }
            else {
                count+=static_cast<int>(apple_b%apple_a);
                i++;
            }
        }
    }();
    std::cout<<count;
    return 0;
}
