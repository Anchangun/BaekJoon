/**
시간 제한	메모리 제한
2 초	1024 MB
문제
一辺の長さが x cm の立方体の体積は (x × x × x) cm3 である．

整数 X が与えられる．一辺の長さが X cm の立方体の体積は何 cm3 か求めよ．

입력
入力は以下の形式で標準入力から与えられる．

X
출력
一辺の長さが X cm の立方体の体積が何 cm3 か，単位 (cm3) を省いて出力せよ．

1 ≦ X ≦ 1000．
 */

#include <iostream>
constexpr int MAX_SIZE = 1000;
constexpr int MIN_SIZE = 1;

int main() {
    int x=0;

    [&]() {
        while (x < MIN_SIZE || x > MAX_SIZE) {
            std::cin >> x;
        }
    }();

    std::cout << x * x * x;
}
