#include <iostream>
constexpr long long MOD = 10000;

struct Mat {
    long long a, b, c, d;
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n;
    bool first = true;
    Mat base, res;

    auto mul = [&](const Mat& x, const Mat& y) -> Mat {
        return Mat{
            (x.a * y.a + x.b * y.c) % MOD,
            (x.a * y.b + x.b * y.d) % MOD,
            (x.c * y.a + x.d * y.c) % MOD,
            (x.c * y.b + x.d * y.d) % MOD
        };
    };

    auto mpow = [&](long long k) -> Mat {
        base = {1, 1, 1, 0};
        res  = {1, 0, 0, 1};
        while (k > 0) {
            if (k & 1) res = mul(res, base);
            base = mul(base, base);
            k >>= 1;
        }
        return res;
    };

    auto input = [&]() -> bool {
        if (!(std::cin >> n) || n == -1) {
            return false;
        }
        return true;
    };

    while (input()) {
        Mat m = mpow(n);
        if (!first) {
            std::cout << '\n';
        }
        std::cout << m.b;
        first = false;
    }
}
