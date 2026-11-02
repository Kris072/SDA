
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(TreeNode* root, vector<int>& result) {
    if (root == nullptr)
        return;

    inorder(root->left, result);
    result.push_back(root->val);
    inorder(root->right, result);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result;

    inorder(root, result);

    cout << "Rezultat: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
