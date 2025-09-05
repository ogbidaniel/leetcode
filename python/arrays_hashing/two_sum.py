"""
Problem: Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Constraints:
- Exactly one valid answer exists.
- You may not use the same element twice.

Approaches:
1. Brute force O(n^2)
2. Hash map O(n)
"""
from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # TODO: brute force
        # TODO: optimize with hashmap
        raise NotImplementedError

if __name__ == "__main__":
    s = Solution()
    print(s.twoSum([2,7,11,15], 9))  # expect [0,1]
