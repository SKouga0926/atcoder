#include <iostream>
using namespace std;

// 二分探索木のノード
struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int x) : key(x), left(nullptr), right(nullptr) {}
};

// 二分探索木クラス
class BST {
private:
    Node* root;

    // ノードを挿入（再帰）
    Node* insert(Node* node, int key) {
        if (!node) return new Node(key);
        if (key < node->key)
            node->left = insert(node->left, key);
        else if (key > node->key)
            node->right = insert(node->right, key);
        return node;
    }

    // ノードを検索（再帰）
    bool search(Node* node, int key) {
        if (!node) return false;
        if (key == node->key) return true;
        if (key < node->key) return search(node->left, key);
        return search(node->right, key);
    }

    // 最小値を持つノードを見つける
    Node* findMin(Node* node) {
        while (node && node->left) node = node->left;
        return node;
    }

    // ノードを削除（再帰）
    Node* remove(Node* node, int key) {
        if (!node) return nullptr;
        if (key < node->key) {
            node->left = remove(node->left, key);
        } else if (key > node->key) {
            node->right = remove(node->right, key);
        } else {
            // 片方または両方の子がない場合
            if (!node->left) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (!node->right) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            // 2つの子がいる場合、右部分木の最小値を取得
            Node* temp = findMin(node->right);
            node->key = temp->key;
            node->right = remove(node->right, temp->key);
        }
        return node;
    }

    // 中順走査（再帰）
    void inorderTraversal(Node* node) {
        if (!node) return;
        inorderTraversal(node->left);
        cout << node->key << " ";
        inorderTraversal(node->right);
    }

public:
    BST() : root(nullptr) {}

    // ノードを挿入
    void insert(int key) { root = insert(root, key); }

    // ノードを検索
    bool search(int key) { return search(root, key); }

    // ノードを削除
    void remove(int key) { root = remove(root, key); }

    // 中順走査
    void inorderTraversal() {
        inorderTraversal(root);
        cout << "\n";
    }
};

// メイン関数
int main() {
    BST tree;
    tree.insert(15);
    tree.insert(9);
    tree.insert(19);
    tree.insert(4);
    tree.insert(18);

    cout << "BST の中順走査: ";
    tree.inorderTraversal();  // 4 9 15 18 19

    cout << "18 の検索結果: " << (tree.search(18) ? "見つかった" : "見つからない") << "\n";
    cout << "20 の検索結果: " << (tree.search(20) ? "見つかった" : "見つからない") << "\n";

    cout << "18 を削除\n";
    tree.remove(18);
    cout << "BST の中順走査: ";
    tree.inorderTraversal();  // 4 9 15 19

    return 0;
}
