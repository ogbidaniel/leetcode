/*
Problem: Longest Increasing Subsequence
Approaches:
1. DP O(n^2)
2. Patience sorting O(n log n)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // TODO: implement
        return -1; // placeholder
    }
};

int main() {
    vector<int> nums = {10,9,2,5,3,7,101,18};
    Solution s; cout << s.lengthOfLIS(nums) << endl; // expect 4
}
