
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;

    TreeNode(int x) : val(x) {}
};

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == nullptr)
            return new TreeNode(val);

        TreeNode* p = root;

        while (true) {
            if (val < p->val) {
                if (p->left == nullptr) {
                    p->left = new TreeNode(val);
                    break;
                }
                p = p->left;
            } else {
                if (p->right == nullptr) {
                    p->right = new TreeNode(val);
                    break;
                }
                p = p->right;
            }
        }

        return root;
    }
};

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    Solution s;
    s.insertIntoBST(root, 5);

    cout << "Numarul 5 a fost inserat.";
    return 0;
}
