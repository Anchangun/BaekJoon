#include <bits/stdc++.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    long long g = gcd(std::llabs(a), std::llabs(b));
    return (a / g) * b;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    if (!(std::cin >> T)) return 0;

    while (T>0){
        --T;
        long long A, B;
        std::cin >> A >> B;
        std::cout << lcm(A, B);
        if (T>0) {
            std::cout<<'\n';
        }
    }
    return 0;
}
