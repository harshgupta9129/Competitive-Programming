/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> prefixSum(n+1,0);
        for (int i=0; i<n; i++) {
            prefixSum[i+1] = prefixSum[i]+nums[i];
        }
        unordered_map <int, int> freq;
        for (int x : prefixSum) {
            int rem = ((x % k) + k) % k;
            freq[rem]++;
        }
        int ans = 0;
        for (auto [a,b]: freq) {
            if (a==0) {
                b--;
                ans+=b;
            }
            if (b<=1) continue;
            b--;
            ans+=(b*(b+1)/2);
        }
        return ans;
    }
};
// @lc code=end

