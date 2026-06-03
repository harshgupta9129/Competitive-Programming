/*
 * @lc app=leetcode id=1888 lang=cpp
 *
 * [1888] Minimum Number of Flips to Make the Binary String Alternating
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        s+=s;
        vector <int> ans1(2*n+1, 0);
        vector <int> ans2(2*n+1, 0);
        char curr1 = '0', curr2 = '1';
        for (int i=0; i<2*n; i++) {
            if (curr1!=s[i]) ans1[i+1]=ans1[i]+1;
            else ans1[i+1]=ans1[i]; 
            if (curr2!=s[i]) ans2[i+1]=ans2[i]+1;
            else ans2[i+1]=ans2[i]; 
            curr1 = (curr1=='0' ? '1' : '0'); 
            curr2 = (curr2=='0' ? '1' : '0'); 
        }
        int ans = INT_MAX;
        for (int i=0; i<=n; i++) {
            ans = min(ans, ans1[i+n]-ans1[i]);
            ans = min(ans, ans2[i+n]-ans2[i]);
        }
        return ans;
    }
};
// @lc code=end

