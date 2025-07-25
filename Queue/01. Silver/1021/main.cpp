
#include<iostream>
#include <algorithm>
#include <deque>
#define MIN_N 1
#define MAX_N 50

std::deque<int> data_erase(int target,std::deque<int> q,bool dir) {
    if (dir) {
        for (int i=0;i<q.size();i++) {
            int temp = q.front();
            if (temp == target) {
                q.pop_front();
                break;
            }
            else {
                q.pop_front();
                q.push_back(temp);
            }
        }
    }
    else {
        for (int i=q.size();i>0;i--) {
            int temp = q.back();
            if (temp == target) {
                q.pop_back();
                break;
            }
            else {
                q.pop_back();
                q.push_front(temp);
            }
        }
    }
    return q;
}


int rotating_queue(int M,std::deque<int> q){
    int temp = 0, result = 0;
    for(int i=0;i<M;i++){
        std::cin>>temp;
        auto it = std::find(q.begin(),q.end(),temp);
        if(it != q.end()) {
            int index = std::distance(q.begin(),it);
            if (q.size()/2 >=index) {
                result += index;
                q = data_erase(*it,q,true);

            }
            else {
                result += (q.size()-index);
                q = data_erase(*it,q,false);

            }
        }
    }
    return result;
}


int main() {
    std::deque<int> center;
    int N = 0;
    int M = 0;
    int count = 0;
    [&]() {
        while (N < MIN_N || N > MAX_N) {
            std::cin>> N >> M;
            if (M>N || M <0)
                N=0;
        }
        for (int i =0 ; i < N; i++) {
            center.push_back(i+1);
        }
    }();
    std::cout<<rotating_queue(M,center);

    return 0;
}