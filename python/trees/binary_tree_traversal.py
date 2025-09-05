"""
Problem: Binary Tree Inorder Traversal
Given the root of a binary tree, return the inorder traversal of its nodes' values.

Approaches:
1. Recursive DFS
2. Iterative stack
3. Morris traversal (no extra space)
"""
from typing import Optional, List

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        # TODO: recursive
        # TODO: iterative
        raise NotImplementedError

if __name__ == "__main__":
    root = TreeNode(1, None, TreeNode(2, TreeNode(3)))
    print(Solution().inorderTraversal(root))  # expect [1,3,2]
