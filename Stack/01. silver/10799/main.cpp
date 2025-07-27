#include<iostream>

#define MAX_N 100000
#define LEFT '('
#define RIGHT ')'

int solution(std::stack<char>& stick, const std::string& S){
    int count = 0;
    for(int i=0;i<S.length();i++){
        if(S[i] == LEFT){
            stick.push(S[i]);
        }
        else{
            if(stick.empty()){
                break;
            }
            else{
                count++;
                stick.pop();
            }
        }
    }
    return count;
}

int main(){
    std::string S;
    int N =0;
    std::stack<char> stick;
    std::cin >> S;
    std::cout << solution(stick, S);

    return 0;
}