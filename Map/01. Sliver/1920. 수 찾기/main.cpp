#include<iostream>
#include<unordered_set>
constexpr int MIN_N = 1;
constexpr int MAX_N = 100000;
constexpr int MIN_M = 1;
constexpr int MAX_M = 100000;

void input_n(std::unordered_set<long long>& data, int n){
    for(int i=0; i<n;i++) {
        long long temp = 0;
        std::cin >> temp;
        data.insert(temp);
    }
}
void serach_m(std::unordered_set<long long>& data, int m){
    for(int i = 0; i<m ; i++) {
        long long target = 0;
        std::cin>> target ;
        if (data.find(target) != data.end()) {
            std::cout << 1;
        } else {
            std::cout << 0;
        }
        if(i<m-1){
            std::cout<<'\n';
        }
    }

}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int N = 0 , M =0;
    std::unordered_set<long long> data;
    auto setting = [](int num , int min , int max) -> int{
        while(num < min || num > max){
            std::cin >> num;
        }
        return num;
    };

    N = setting(N,MIN_N,MAX_N);

    input_n(data,N);

    M = setting(M,MIN_M,MAX_M);
    serach_m(data,M);

    return 0;
}