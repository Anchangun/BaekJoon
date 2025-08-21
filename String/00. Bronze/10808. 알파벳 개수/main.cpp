#include<iostream>
#include <map>

int main(){
    std::string S = "";
    std::map<char, int> learn_alphabet_map;
    while (S.length()<=0|| S.length()>100) {
        std::cin>>S;
    }
    //setting
    for (int i=0;  i< 26 ; i++) {
        learn_alphabet_map.insert(std::pair<char, int>( 97 +i , 0));
    }
    // map input
    for (int lp = 0; lp < S.length(); lp++) {
        auto it =learn_alphabet_map.find(S[lp]);
        if (it!=learn_alphabet_map.end()) {
            learn_alphabet_map[S[lp]]++;
        }
    }

    for (auto iter : learn_alphabet_map) {
        std::cout<<iter.second<<" ";
    }

return 0;
}
