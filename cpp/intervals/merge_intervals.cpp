/*
Problem: Merge Intervals
Approach:
1. Sort intervals by start then merge O(n log n)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // TODO: implement
        return {}; // placeholder
    }
};

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution s; auto merged = s.merge(intervals);
    for (auto &v : merged) { cout << '[' << v[0] << ',' << v[1] << "] "; }
    cout << endl;
}
