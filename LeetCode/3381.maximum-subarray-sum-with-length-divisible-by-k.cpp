/*
 * @lc app=leetcode id=3381 lang=cpp
 *
 * [3381] Maximum Subarray Sum With Length Divisible by K
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector <long long> prefixSum(n+1, 0);
        prefixSum[0] = 0;
        for (int i=0; i<n; i++) prefixSum[i+1]=prefixSum[i]+nums[i];
        long long ans = LLONG_MIN;
        for (int i=1; i<=k; i++) {
            long long curr = 0;
            for (int j=i; j+k-1<=n; j+=k) {
                long long temp = prefixSum[j+k-1]-prefixSum[j-1];
                curr+=temp;
                ans = max(ans, curr);
                if (curr<0) curr = 0;
            }
        }
        return ans;
    }
};
// @lc code=end

