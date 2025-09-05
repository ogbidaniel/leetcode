"""
Problem: Coin Change
Given coins denominations and an amount, return fewest coins to make that amount. If impossible, return -1.

Approaches:
1. DP bottom-up O(amount * n)
2. DFS + memo (top-down)
"""
from typing import List

class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        # TODO: implement
        raise NotImplementedError

if __name__ == "__main__":
    print(Solution().coinChange([1,2,5], 11))  # expect 3
