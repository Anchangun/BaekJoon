#include<iostream>
#include<set>
#include <utility>
constexpr int MIN_N=1;
constexpr int MAX_N=20000;
constexpr int MAX_STR=200;
struct Data{
    std::string str;
    bool operator<(const Data& data) const{
        if(str.length()==data.str.length()){
            return str<data.str;
        }
        return str.length()<data.str.length();
    }
    explicit Data(std::string  s):str(std::move(s)){

    }
};
int main(){
    std::set<Data> data;
    int N=0;
    [&](){
        while(N<MIN_N|| N>MAX_N){
            std::cin>>N;
        }
    }();

    for(int i=0;i<N;){
        std::string temp;
        std::cin >> temp;
        if(temp.length()>MAX_STR){
            continue;
        }
        data.insert(Data(temp));
        i++;
    }
    for(auto value: data){
        std::cout<<value.str<<'\n';
    }
    return 0;
}