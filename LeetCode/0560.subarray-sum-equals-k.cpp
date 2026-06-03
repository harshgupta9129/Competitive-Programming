/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> prefixSum(n,0);
        prefixSum[0] = nums[0];
        for (int i=1; i<n; i++) prefixSum[i] = prefixSum[i-1] + nums[i];
        unordered_map <int, int> mp;
        int ans = 0;
        for (int i=0; i<n; i++) {
            if (prefixSum[i]==k) ans++;
            if (mp.find(prefixSum[i]-k)!=mp.end()) ans+=mp[prefixSum[i]-k];
            mp[prefixSum[i]]++;
        }   
        return ans;
    }
};
// @lc code=end

