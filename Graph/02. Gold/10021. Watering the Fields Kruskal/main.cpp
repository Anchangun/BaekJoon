#include <algorithm>
#include<iostream>
#include<vector>
constexpr int INF = 1e9;

class DSU {
private:
    std::vector<int> p_;
public:
    DSU(int n): p_(n, -1) {}
    int find(int x) {
        return p_[x] < 0 ? x : p_[x] = find(p_[x]);
    }
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) {
            return false;
        }
        if (p_[a] > p_[b]) {
            std::swap(a, b);
        }
        p_[a] += p_[b]; p_[b] = a;
        return true;
    }
};
struct Edge {
    int u,v;
    long long w;
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    auto readInt = []() {
        int x;
        std::cin >> x;
        return x;
    };

    const int N = readInt();
    const int C = readInt();

    std::vector<std::pair<int,int>> pos(N);
    for (int i=0;i<N;i++) {
        pos[i].first = readInt();
        pos[i].second = readInt();
    }

    std::vector<Edge> edges;

    for (int i=0;i<N;i++) {
        for (int j=i+1;j<N;j++) {
            long long dx = pos[i].first - pos[j].first;
            long long dy = pos[i].second - pos[j].second;
            long long dist2 = dx*dx + dy*dy;
            if (dist2 >= C) edges.push_back({i,j,dist2});
        }
    }

    std::sort(edges.begin(), edges.end(), [](auto &a, auto &b){ return a.w < b.w; });

    DSU dsu(N);
    long long ans = 0;
    int cnt = 0;
    for (auto &e : edges) {
        if (dsu.unite(e.u,e.v)) {
            ans += e.w;
            if (++cnt == N-1) {
                break;
            }
        }
    }

    std::cout << (cnt == N-1 ? ans : -1);
}
