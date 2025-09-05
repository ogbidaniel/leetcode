"""
Problem: Merge Intervals
Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals.

Approach:
1. Sort by start then iterate and merge O(n log n)
"""
from typing import List

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        # TODO: implement
        raise NotImplementedError

if __name__ == "__main__":
    s = Solution()
    print(s.merge([[1,3],[2,6],[8,10],[15,18]]))  # expect [[1,6],[8,10],[15,18]]
