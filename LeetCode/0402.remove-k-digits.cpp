/*
 * @lc app=leetcode id=402 lang=cpp
 *
 * [402] Remove K Digits
 */

// @lc code=start0
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        for (char c : num) {
            while (!s.empty() && k>0 && s.back()>c) {
                k--;
                s.pop_back();
            }
            s.push_back(c); 
        }
        while (k>0) {
            s.pop_back();
            k--;
        }
        int idx = 0;
        for (char c : s) {
            if (c=='0') idx++;
            else break;
        }
        string ans = s.substr(idx);
        return ans.empty() ? "0" : ans;
    }
};
// @lc code=end

