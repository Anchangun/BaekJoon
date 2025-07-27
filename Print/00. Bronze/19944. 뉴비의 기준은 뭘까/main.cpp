#include<iostream>

#define NEWBEE "NEWBIE!"
#define TLE "TLE!"
#define OLDBEE "OLDBIE!"

#define MIN_N 3
#define MAX_N 1000
#define MIN_M 1
#define MAX_M 1000

void decide(int N , int M){
    if(M<=2){
        std::cout << NEWBEE;
    }
    else if(M<=N){
        std::cout<< OLDBEE;
    }
    else{
        std::cout<< TLE;
    }
}

int main(){
    int N = 0, M =0;
    [&](){
        while(MIN_N>N || MAX_N < N){
            std::cin>>N;
        }
        while(MIN_M>M || MAX_M < M ){
            std::cin>>M;
        }
    }();
    decide(N,M);

    return 0;
}