"""
Problem: Longest Increasing Subsequence
Given an integer array nums, return the length of the longest strictly increasing subsequence.

Approaches:
1. DP O(n^2)
2. Patience sorting (binary search) O(n log n)
"""
from typing import List

class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        # TODO: implement
        raise NotImplementedError

if __name__ == "__main__":
    print(Solution().lengthOfLIS([10,9,2,5,3,7,101,18]))  # expect 4
