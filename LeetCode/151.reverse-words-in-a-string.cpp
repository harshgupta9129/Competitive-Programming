/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector <string> words;
        string temp = "";
        for (char c : s) {
            if (c==' ') {
                if (!temp.empty()) {
                    words.push_back(temp);
                    temp = "";
                }
            }
            else temp.push_back(c);
        }
        if (!temp.empty()) words.push_back(temp);
        string ans;
        for (int i=words.size()-1; i>=0; i--) {
            ans+=words[i];
            if (i!=0) ans+=" ";
        }
        return ans;
    }
};
// @lc code=end

