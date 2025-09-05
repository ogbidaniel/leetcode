"""
Problem: Top K Frequent Elements
Given an integer array nums and an integer k, return the k most frequent elements.

Approaches:
1. Count + sort O(n log n)
2. Count + heap O(n log k)
3. Count + bucket O(n)
"""
from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # TODO: implement
        raise NotImplementedError

if __name__ == "__main__":
    print(Solution().topKFrequent([1,1,1,2,2,3], 2))  # expect [1,2]
