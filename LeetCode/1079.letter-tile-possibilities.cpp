/*
 * @lc app=leetcode id=1079 lang=cpp
 *
 * [1079] Letter Tile Possibilities
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve (int curr, int n, string temp, string tiles, unordered_set <int> &inclu, unordered_set <string> &ans) {
        if (curr==n+1) {
            ans.insert(temp);
        }
        curr++; 
        for (int i=0; i<n; i++) {
            if (inclu.count(i)) continue;
            temp.push_back(tiles[i]);
            inclu.insert(i);
            solve (curr, n, temp, tiles, inclu, ans);
            temp.pop_back();
            inclu.erase(i);
        }
        solve(curr, n, temp, tiles, inclu, ans);
    }

    int numTilePossibilities(string tiles) {
        unordered_set <string> ans;
        string temp = "";
        unordered_set <int> inclu;
        solve(0, tiles.length(), temp, tiles, inclu, ans);
        return ans.size();
    }
};
// @lc code=end

