/*
Problem: Top K Frequent Elements
Approaches:
1. Count + sort O(n log n)
2. Count + heap O(n log k)
3. Bucket sort O(n)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // TODO: implement
        return {}; // placeholder
    }
};

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    Solution s; auto res = s.topKFrequent(nums, 2);
    for (int x: res) cout << x << ' '; cout << endl; // expect 1 2
}
