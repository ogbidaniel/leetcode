"""
Problem: Reverse Linked List
Given the head of a singly linked list, reverse the list, and return the reversed list.

Approaches:
1. Iterative pointer reversal O(n)
2. Recursive O(n) + call stack
"""
from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # TODO: iterative
        # TODO: recursive
        raise NotImplementedError

if __name__ == "__main__":
    # manual small test
    n3 = ListNode(3)
    n2 = ListNode(2, n3)
    n1 = ListNode(1, n2)
    s = Solution()
    rev = s.reverseList(n1)
    while rev:
        print(rev.val, end=" ")
        rev = rev.next
    print()
