#include <iostream>
#include <map>
#include <memory>
#include <vector>
#include <algorithm>

#define MIN_N 1
#define MAX_N 50

typedef struct TreeNode {
    std::vector<std::shared_ptr<TreeNode>> child_nodes_;
    TreeNode() : child_nodes_() {}
} TREENODE;

void delete_subtree(std::shared_ptr<TREENODE> node,
                    std::map<int, std::shared_ptr<TREENODE>>& map) {
    for (auto& child : node->child_nodes_) {
        delete_subtree(child, map);
    }
    for (auto it = map.begin(); it != map.end(); ) {
        if (it->second == node) {
            it = map.erase(it);
        } else {
            ++it;
        }
    }
    node->child_nodes_.clear();
}

int count_leaf_nodes(std::shared_ptr<TREENODE> node) {
    if (node->child_nodes_.empty())
        return 1;
    int count = 0;
    for (auto& child : node->child_nodes_) {
        count += count_leaf_nodes(child);
    }
    return count;
}

int main() {
    int N, delete_num;
    std::cin >> N;

    std::map<int, std::shared_ptr<TREENODE>> map;
    std::vector<int> parents(N);
    int root_index = -1;

    for (int i = 0; i < N; i++) {
        std::cin >> parents[i];
        map[i] = std::make_shared<TREENODE>();
    }

    for (int i = 0; i < N; i++) {
        if (parents[i] == -1) {
            root_index = i;
            continue;
        }
        map[parents[i]]->child_nodes_.push_back(map[i]);
    }

    std::cin >> delete_num;

    if (delete_num == root_index) {
        std::cout << 0 << std::endl;
        return 0;
    }

    for (auto& [k, v] : map) {
        auto& children = v->child_nodes_;
        children.erase(
            std::remove_if(children.begin(), children.end(),
                           [&](const std::shared_ptr<TREENODE>& child) {
                               return child == map[delete_num];
                           }),
            children.end());
    }

    delete_subtree(map[delete_num], map);
    int result = count_leaf_nodes(map[root_index]);
    std::cout << result;

    return 0;
}
