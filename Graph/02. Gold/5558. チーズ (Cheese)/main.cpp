#include <iostream>
#include <vector>
#include <queue>
#include <string>

constexpr int DX[4] = { -1, 1, 0, 0 };
constexpr int DY[4] = { 0, 0, -1, 1 };

struct Pos {
    int x, y;
    constexpr Pos(int _x = 0, int _y = 0) : x(_x), y(_y) {
    }
    bool operator==(const Pos& other) const {
        return x == other.x && y == other.y;
    }
};


Pos find_pos(const std::vector<std::string>& grid, int H, int W, char target) {
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == target)
                return Pos(i, j);
        }
    }
    return Pos(-1, -1);
}

int bfs(const std::vector<std::string>& grid, int H, int W, const Pos& start, char goal) {
    std::vector<std::vector<int>> dist(H, std::vector<int>(W, -1));
    std::queue<Pos> q;
    q.push(start);
    dist[start.x][start.y] = 0;

    while (!q.empty()) {
        Pos cur = q.front(); q.pop();
        if (grid[cur.x][cur.y] == goal)
            return dist[cur.x][cur.y];

        for (int d = 0; d < 4; ++d) {
            int nx = cur.x + DX[d];
            int ny = cur.y + DY[d];
            if (nx < 0 || ny < 0 || nx >= H || ny >= W)
                continue;
            if (grid[nx][ny] == 'X' || dist[nx][ny] != -1)
                continue;
            dist[nx][ny] = dist[cur.x][cur.y] + 1;
            q.push(Pos(nx, ny));
        }
    }
    return -1;
}

void input(std::vector<std::string>& grid ,int H) {
    for (int i = 0; i < H; ++i) {
        std::cin >> grid[i];
    }
}
int main() {
    int H =0, W =0 , N=0;
    std::cin >> H >> W >> N;
    std::vector<std::string> grid(H);

    input(grid,H);

    int total = 0;
    Pos start = find_pos(grid, H, W, 'S');
    for (int cheese = 1; cheese <= N; ++cheese) {
        char goal = cheese + '0';
        int d = bfs(grid, H, W, start, goal);
        if (d == -1) {
            std::cout << -1;
            return 0;
        }
        total += d;
        start = find_pos(grid, H, W, goal);
    }

    std::cout << total;
    return 0;
}