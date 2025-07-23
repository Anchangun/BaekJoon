#include<iostream>
int main(){
    char c= ' ';
    std::cin>> c;
    if(c=='n'|| c=='N')
        std::cout<<"Naver D2";
    else
        std::cout<<"Naver Whale";
    return 0;
}