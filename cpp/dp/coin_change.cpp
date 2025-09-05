/*
Problem: Coin Change
Approaches:
1. Bottom-up DP O(amount * n)
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // TODO: implement
        return -1; // placeholder
    }
};

int main() {
    vector<int> coins = {1,2,5};
    Solution s; cout << s.coinChange(coins, 11) << endl; // expect 3
}
