#include<iostream>
#include <map>

constexpr int MIN=0;
constexpr int MAX=500000;
int main(){
    std::map<std::string,int> data;
    int count=0;
    auto input = [&data, &count](const std::string k) {
        auto it = data.find(k);
        if(it!=data.end()){
            data[k]++;
            count++;
        }
        else{
            data.insert(std::make_pair(k, 1));
        }
    };
    auto lp = [&input](int lp_size){
        for(int i=0;i<lp_size;i++){
            std::string temp;
            std::cin>> temp;
            input(temp);
        }
    };

    int N =-1, M=-1;
    while(MIN>N || MAX<N|| MIN>M || MAX<M){
        std::cin >> N >> M;
    }
    lp(N);
    lp(M);
    std::cout<<count <<'\n';
    for (auto it = data.begin(); it != data.end(); ++it) {
        if (it->second >= 2) {
            std::cout << it->first;
            auto next = it;
            next++;
            if (next != data.end()) {
                std::cout << '\n';
            }
        }
    }

    return 0;
}