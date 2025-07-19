#include<iostream>
int main() {
    int N=0;
    [&]() {
        while (1>N || N>100) {
            std::cin>>N;
        }
    }();

    for (int i=0; i<N; i++) {
        for (int j=i;j>0;j--) {
            std::cout<<' ';
        }
        for (int k=N-i;k>0;k--) {
            std::cout<<'*';
        }
        if (N-1!=i)
            std::cout<<'\n';
    }
    return 0;
}