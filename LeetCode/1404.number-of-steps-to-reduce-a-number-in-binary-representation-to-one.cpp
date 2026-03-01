/*
 * @lc app=leetcode id=1404 lang=cpp
 *
 * [1404] Number of Steps to Reduce a Number in Binary Representation to One
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSteps(string s) {
        reverse(s.begin(), s.end());
        int carry = 0;
        int ans = 0;
        for (int i=0; i<s.length()-1; i++) {
            if (carry==0) {
                if (s[i]=='0') ans++;
                else {
                    carry = 1;
                    ans+=2;
                } 
            }
            else {
                if (s[i]=='1') {
                    ans++;
                }
                else {
                    ans+=2;                    
                }
            }
        }
        if (carry) ans++;
        return ans;
    }
};
// @lc code=end

