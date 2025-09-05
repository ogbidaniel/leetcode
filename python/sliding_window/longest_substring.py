"""
Problem: Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without repeating characters.

Approaches:
1. Brute force: check all substrings O(n^3)
2. Sliding window with set O(n)
"""
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # TODO: brute force
        # TODO: optimize sliding window
        raise NotImplementedError

if __name__ == "__main__":
    s = Solution()
    print(s.lengthOfLongestSubstring("abcabcbb"))  # expect 3
