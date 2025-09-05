/*
Problem: Lowest Common Ancestor of a BST
Approach: Traverse from root using BST property.
*/
#include <bits/stdc++.h>
using namespace std;

struct TreeNode { int val; TreeNode* left; TreeNode* right; TreeNode(int v): val(v), left(nullptr), right(nullptr) {} };

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // TODO: implement
        return nullptr; // placeholder
    }
};

int main() {
    TreeNode* n3 = new TreeNode(3);
    TreeNode* n5 = new TreeNode(5);
    TreeNode* n4 = new TreeNode(4); n4->left = n3; n4->right = n5;
    TreeNode* n0 = new TreeNode(0);
    TreeNode* n2 = new TreeNode(2); n2->left = n0; n2->right = n4;
    TreeNode* n7 = new TreeNode(7);
    TreeNode* n9 = new TreeNode(9);
    TreeNode* n8 = new TreeNode(8); n8->left = n7; n8->right = n9;
    TreeNode* root = new TreeNode(6); root->left = n2; root->right = n8;

    Solution s; auto lca = s.lowestCommonAncestor(root, n2, n8);
    if (lca) cout << lca->val << endl; // expect 6
}
