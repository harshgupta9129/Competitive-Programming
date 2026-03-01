/*
 * @lc app=leetcode id=526 lang=cpp
 *
 * [526] Beautiful Arrangement
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int idx, int n, vector <bool> &a, int &ans) {
        if (idx==n+1) {
            ans++;
            return;
        }
        for (int i=0; i<n; i++) {
            if (a[i]) {
                if (idx%(i+1)==0 || (i+1)%idx==0) {
                    a[i]=false;
                    solve(idx+1, n, a, ans);
                    a[i]=true;
                }
            }
        }
    }   

    int countArrangement(int n) {
        int ans = 0;
        vector <bool> a(n, true);
        solve(1, n, a, ans);
        return ans;
    }
};
// @lc code=end

