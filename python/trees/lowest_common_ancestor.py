"""
Problem: Lowest Common Ancestor of a Binary Search Tree
Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes.

Approach:
1. Traverse from root using BST property O(h)
"""
from typing import Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        # TODO: implement
        raise NotImplementedError

if __name__ == "__main__":
    # simple structure
    n3 = TreeNode(3)
    n5 = TreeNode(5)
    n4 = TreeNode(4, n3, n5)
    n0 = TreeNode(0)
    n2 = TreeNode(2, n0, n4)
    n7 = TreeNode(7)
    n9 = TreeNode(9)
    n8 = TreeNode(8, n7, n9)
    root = TreeNode(6, n2, n8)
    print(Solution().lowestCommonAncestor(root, n2, n8).val)  # expect 6
