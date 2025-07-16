#include <iostream>


#define N_RESOLUTION 100
int main() {
    int N =0, M=0;
    [&]() {
        while ((N<1 || N>100 )&& (M<1 || M>10000) ) {
            std::cin >> N >> M;
        }
    }();
    std::string result =  ((N * N_RESOLUTION) >= M ) ? "Yes" : "No";
    std::cout << result ;
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.