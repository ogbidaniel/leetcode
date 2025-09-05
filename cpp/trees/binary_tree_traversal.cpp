/*
Problem: Binary Tree Inorder Traversal
Approaches:
1. Recursive
2. Iterative stack
3. Morris
*/
#include <bits/stdc++.h>
using namespace std;

struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int v): val(v), left(nullptr), right(nullptr) {} };

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // TODO: implement recursive then iterative
        return {}; // placeholder
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    Solution s; auto ans = s.inorderTraversal(root);
    for (int v: ans) cout << v << ' '; cout << endl; // expect 1 3 2
}
