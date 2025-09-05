/*
Problem: Combination Sum
Approach: Backtracking with pruning.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // TODO: implement
        return {}; // placeholder
    }
};

int main() {
    vector<int> c = {2,3,6,7};
    Solution s; auto res = s.combinationSum(c, 7);
    for (auto &v: res) { cout << '['; for (size_t i=0;i<v.size();++i){cout<<v[i]<<(i+1<v.size()?",":"");} cout << "] "; }
    cout << endl; // expect [2,2,3] [7]
}
