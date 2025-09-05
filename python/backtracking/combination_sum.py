"""
Problem: Combination Sum
Given an array of distinct integers candidates and a target, return all unique combinations where the chosen numbers sum to target. Same number may be chosen unlimited times.

Approach:
1. Backtracking with pruning.
"""
from typing import List

class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        # TODO: implement
        raise NotImplementedError

if __name__ == "__main__":
    print(Solution().combinationSum([2,3,6,7], 7))  # expect [[2,2,3],[7]]
