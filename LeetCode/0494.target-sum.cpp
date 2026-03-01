/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int i, int n, int value, int target, vector <int> &nums, int &ans)  {
        if (i==n) {
            if (value==target) ans++;
            return;
        }
        solve(i+1, n, value-nums[i], target, nums, ans);
        solve(i+1, n, value+nums[i], target, nums, ans);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int ans = 0;
        solve (0, nums.size(), 0, target, nums, ans);
        return ans;
    }
};
// @lc code=end

