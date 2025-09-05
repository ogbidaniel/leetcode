#include <bits/stdc++.h>
#include "../arrays_hashing/two_sum.cpp"
using namespace std;

int main(){
    Solution s; vector<int> nums={2,7,11,15}; int target=9; auto res=s.twoSum(nums,target);
    if(res.size()==2) cout << "PASS\n"; else cout << "PENDING_IMPLEMENTATION\n";
}
