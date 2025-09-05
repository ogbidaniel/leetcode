/*
Problem: Reverse Linked List
Approaches:
1. Iterative pointer reversal O(n)
2. Recursive O(n)
*/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val; ListNode* next; ListNode(int v): val(v), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // TODO: iterative then recursive alt
        return head; // placeholder
    }
};

int main() {
    ListNode* n1 = new ListNode(1);
    n1->next = new ListNode(2);
    n1->next->next = new ListNode(3);
    Solution s;
    ListNode* r = s.reverseList(n1);
    while (r) { cout << r->val << ' '; r = r->next; }
    cout << endl;
}
