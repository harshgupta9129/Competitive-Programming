/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int j=0;
        long long pro = 1;
        for (int i=0; i<n; i++) {
            pro*=nums[i];
            if (pro<k) ans+=i-j+1;
            else {
                while (j<=i) {
                    pro/=nums[j];
                    j++;
                    if (pro<k) {
                        if (pro<k) ans+=i-j+1;
                        break;
                    }
                    
                }
            }
        }
        return ans;
    }
};
// @lc code=end

