/*
 * @lc app=leetcode id=3804 lang=cpp
 *
 * [3804] Number of Centered Subarrays
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i=0; i<n; i++) {
            int sum = 0;
            unordered_set <int> check;
            for (int j=i; j<n; j++) {
                sum+=nums[j];
                check.insert(nums[j]);
                if (check.count(sum)) ans++;
            }
        }
        return ans;
    }
};
// @lc code=end