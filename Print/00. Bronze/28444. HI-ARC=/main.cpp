#include <iostream>
// TIP 코드를 <b>Run</b>하려면 <shortcut actionId="Run"/>을(를) 누르거나 여백에서 <icon src="AllIcons.Actions.Execute"/> 아이콘을 클릭하세요.
int main() {
    int H=-1, I=-1, A=-1,R=-1,C=-1;
    [&]() {
        while ((H<0 ||H>100)&&(I<0||I>100)&& (R<0||R>100)&&(C<0||C>100)) {
            std::cin >> H >> I >> A >> R >>C;
        }
    }();
    std::cout << (H*I) - (A*R*C);
    return 0;
}