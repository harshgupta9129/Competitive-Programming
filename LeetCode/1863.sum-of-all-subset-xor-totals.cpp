/*
 * @lc app=leetcode id=1863 lang=cpp
 *
 * [1863] Sum of All Subset XOR Totals
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve (int i, int temp, vector <int> &nums, int &sum) {
        if (i==nums.size()) {
            sum+=temp;
            return;
        }
        temp^=nums[i];
        solve(i+1, temp, nums, sum);
        temp^=nums[i];
        solve(i+1, temp, nums, sum);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = 0 ;
        solve(0, 0, nums, sum);
        return sum;
    }
};
// @lc code=end

