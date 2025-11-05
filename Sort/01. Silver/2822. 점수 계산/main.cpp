#include <bits/stdc++.h>

constexpr int TOTAL_COUNT = 8;
constexpr int SELECT_COUNT = 5;

int solution(std::vector<int>& scores) {
    std::vector<std::pair<int, int>> score_index;
    score_index.reserve(TOTAL_COUNT);

    for (int i = 0; i < TOTAL_COUNT; ++i) {
        score_index.emplace_back(scores[i], i + 1);
    }
    const auto compare_score_desc = [](const std::pair<int, int>& a,
                                       const std::pair<int, int>& b) {
        return a.first > b.first;
    };

    std::sort(score_index.begin(), score_index.end(), compare_score_desc);

    int total = 0;
    std::vector<int> indices;
    indices.reserve(SELECT_COUNT);

    for (int i = 0; i < SELECT_COUNT; ++i) {
        total += score_index[i].first;
        indices.push_back(score_index[i].second);
    }

    std::sort(indices.begin(), indices.end());

    std::cout << total << '\n';
    for (std::size_t i = 0; i < indices.size(); ++i) {
        std::cout << indices[i];
        if (i + 1 < indices.size()) std::cout << ' ';
    }
    return 0;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> scores(TOTAL_COUNT);
    for (int i = 0; i < TOTAL_COUNT; ++i) {
        std::cin >> scores[i];
    }

    solution(scores);
    return 0;
}
