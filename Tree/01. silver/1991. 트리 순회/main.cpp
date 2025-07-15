#include <functional>
#include <iostream>
#include <map>
#include <memory>

#define EMPTY '.'
typedef struct Node {
    char data_;
    std::shared_ptr<Node> left_;
    std::shared_ptr<Node> right_;
    Node(char data) : data_(data), left_(nullptr), right_(nullptr) {}
}NODE;

/**
 * @param map 트리 구조를 저장할 맵
 * @param cur_node 현재 노드
 * @param left_node 왼쪽 노드
 * @param right_node 오른쪽 노드
 */
void input_node(std::map<char, std::shared_ptr<NODE>>& map,
                char cur_node, char left_node, char right_node);

int main() {
    int N=0;
    [&]() {
      while (N<1||N>26) {
          std::cin>>N;
      }
    }();
    std::map<char,std::shared_ptr<NODE>> manager;
    [&manager](int n) {
        for (int i=0;i<n;i++) {
            char u_a = ' ', u_b = ' ', u_c = ' ';
            std::cin >> u_a >> u_b >> u_c;
            input_node(manager,u_a,u_b,u_c);
        }
    }(N);

    std::function<void(std::shared_ptr<NODE>)> preorder_traversal;
    std::function<void(std::shared_ptr<NODE>)> inorder_traversal;
    std::function<void(std::shared_ptr<NODE>)> postorder_traversal;


    preorder_traversal = [&](std::shared_ptr<NODE> node) {
        if (!node) return;
        std::cout << node->data_;
        preorder_traversal(node->left_);
        preorder_traversal(node->right_);
    };

    inorder_traversal = [&](std::shared_ptr<NODE> node) {
        if (!node) return;
        inorder_traversal(node->left_);
        std::cout << node->data_;
        inorder_traversal(node->right_);
    };

    postorder_traversal = [&](std::shared_ptr<NODE> node) {
        if (!node) return;
        postorder_traversal(node->left_);
        postorder_traversal(node->right_);
        std::cout << node->data_;
    };

    preorder_traversal(manager['A']);
    std::cout << '\n';
    inorder_traversal(manager['A']);
    std::cout << '\n';
    postorder_traversal(manager['A']);
    return 0;
}


/*
* void input_node(std::map<char,std::shared_ptr<NODE>>& map,char cur_node,char left_node,char right_node) {
    if (!map[cur_node])
        map[cur_node] = std::make_shared<NODE>(cur_node);
    if (left_node != '.') {
        if (!map[left_node]) {
            map[left_node] = std::make_shared<NODE>(left_node);
        }
        map[cur_node]->left_ = map[left_node];
    }
    if (right_node != '.') {
        if (!map[right_node]) {
            map[right_node] = std::make_shared<NODE>(right_node);
        }
    }

}
 */
void input_node(std::map<char, std::shared_ptr<NODE>>& map,
                char cur_node, char left_node, char right_node) {

    auto get_or_create = [&](char ch) -> std::shared_ptr<NODE> {
        if (!map[ch])
            map[ch] = std::make_shared<NODE>(ch);
        return map[ch];
    };

    auto set_child = [&](char child, std::shared_ptr<NODE>& link) {
        if (child != EMPTY)
            link = get_or_create(child);
    };
    std::shared_ptr<NODE> parent = get_or_create(cur_node);
    set_child(left_node, parent->left_);
    set_child(right_node, parent->right_);
}