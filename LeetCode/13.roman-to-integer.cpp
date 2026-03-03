/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        vector <pair<string, string>> changer{
            {"CM", "DCCCC"}, {"CD", "CCCC"}, {"XC", "LXXXX"}, {"XL", "XXXX"}, {"IX", "VIIII"}, {"IV", "IIII"}
        };
        for (auto [avail, rplc] : changer) {
            auto pos = s.find(avail);
            if (pos!=string::npos) {
                s.erase(pos, 2);
                s+=rplc;
            }
        }
        unordered_map <char, int> roman {
            {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}
        };
        int ans = 0;
        for (char c : s) {
            ans+=roman[c];
        }
        return ans;
    }
};
// @lc code=end

