/*
 * @lc app=leetcode id=1536 lang=cpp
 *
 * [1536] Minimum Swaps to Arrange a Binary Grid
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        int ans = 0;
        unordered_set <int> check;
        for (int i=0; i<n; i++) {
            if (check.count(i)) continue;
            int count = 0;
            for (int k=n-1; k>=0; k--) {
                if (grid[i][k]==0) count++;
                else break;
            } 
            if (count>=(n-i-1)) continue;
            bool tempans = false;
            for (int j=n-count-1; j<n; j++) {
                int temp = 0;
                for (int k=n-1; k>=0; k--) {
                    if (grid[j][k]==0) temp++;
                    else break;
                }
                if (temp>=(n-i-1)) {
                    ans++;
                    check.insert(j);
                    tempans = true;
                    break;
                }
            }
            if (!tempans) return -1;
        }        
        return ans;
    }
};
// @lc code=end

