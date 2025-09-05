/*
Problem: Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Approaches:
1. Brute force O(n^2)
2. Hash map O(n)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // TODO: brute force then optimize with unordered_map
        return {}; // placeholder
    }
};

int main() {
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    auto ans = s.twoSum(nums, target);
    for (int i : ans) cout << i << ' ';
    cout << endl; // expect 0 1
}
