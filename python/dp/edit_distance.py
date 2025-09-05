"""
Problem: Edit Distance
Given two strings word1 and word2, return the minimum number of operations to convert word1 to word2.
Operations: insert, delete, replace.

Approach:
1. DP table O(mn)
"""
class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        # TODO: implement
        raise NotImplementedError

if __name__ == "__main__":
    print(Solution().minDistance("horse", "ros"))  # expect 3
