/*
 * @lc app=leetcode id=784 lang=cpp
 *
 * [784] Letter Case Permutation
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int i, string &s, string &temp, vector<string> &ans) {
        if (i == s.length()) {
            ans.push_back(temp);
            return;
        }

        if (isdigit(s[i])) {
            temp.push_back(s[i]);
            solve(i + 1, s, temp, ans);
            temp.pop_back();
        } else {
            temp.push_back(tolower(s[i]));
            solve(i + 1, s, temp, ans);
            temp.pop_back();

            temp.push_back(toupper(s[i]));
            solve(i + 1, s, temp, ans);
            temp.pop_back();
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp;
        solve(0, s, temp, ans);
        return ans;
    }
};
// @lc code=end

