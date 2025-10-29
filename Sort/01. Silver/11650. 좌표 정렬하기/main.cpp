#include <iostream>
#include <algorithm> // sort
/**
 * Data Struct
    -> 삽입 효율 < 정렬 효율
    -> select : vector  / std::sort O(1)
    -> struct Dot 이용
 * func
    -> user_insert
    -> print
 */

struct Dot {
    int x, y;
    bool operator<(const Dot& dot) const{
        return x==dot.x ? y< dot.y : x< dot.x;
    }
};
constexpr int MAX = 100000;
constexpr int MIN = 1;

void user_insert(std::vector<Dot>* vec){
    int N =0;

    [&](){
         while(N<MIN || N>MAX){
             std::cin>> N;
         }
    }();
    for(int i=0; i<N;i++){
        Dot lp_dot;
        std::cin>>lp_dot.x >> lp_dot.y;
        vec->push_back(lp_dot);
    }
}
void print(std::vector<Dot> vec){

    for(int lp =0; lp<vec.size();lp++){
        std::cout<< vec[lp].x << ' '<<vec[lp].y;
        if(lp!=vec.size()-1){
            std::cout<< '\n';
        }
    }
}
int main(){
    std::vector<Dot> vec;
    user_insert(&vec);
    std::sort(vec.begin(),vec.end());
    print(vec);
    return 0;
}