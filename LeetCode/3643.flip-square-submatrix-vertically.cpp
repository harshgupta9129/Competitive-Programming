/*
 * @lc app=leetcode id=3643 lang=cpp
 *
 * [3643] Flip Square Submatrix Vertically
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        for (int i=y; i<y+k; i++) {
            int a = x, b = x+k-1;
            while (a<b) swap(grid[a++][i], grid[b--][i]);
        }
        return grid;
    }
};
// @lc code=end

