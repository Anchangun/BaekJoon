#include<iostream>
#include<deque>
#define MIN_N 1
#define MAX_N 1000

//left - top , right - bottom
void card_input(std::deque<int>& data, int N){
    for(int i=1;i<=N;i++){
        data.push_back(i);
    }
}

void discard(std::deque<int>& data){
    if(data.size()==1){
        std::cout << data.front();
        data.pop_front();
    }
    else {
        std::cout << data.front() << ' ';
        data.pop_front();
    }
}

void shuffle(std::deque<int>& data){
    if(!data.empty()) {
        int temp = 0;
        temp = data.front();
        data.pop_front();
        data.push_back(temp);
    }
}

void process(std::deque<int>& data){
    while(!data.empty()){
        discard(data);
        shuffle(data);
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N = 0;
    std::deque<int> deck;

    [&](){
        while(N<MIN_N||MAX_N<N){
            std::cin>>N;
        }
    }();
    card_input(deck, N);
    process(deck);
    return 0;
}