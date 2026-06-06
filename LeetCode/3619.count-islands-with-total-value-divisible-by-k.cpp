/*
 * @lc app=leetcode id=3619 lang=cpp
 *
 * [3619] Count Islands With Total Value Divisible by K
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using i128 = __int128_t;

class Solution {
public:
    void dfs (int i, int j, long long &temp, vector <vector <int>> &isvisited, vector<vector<int>>& grid) {
        temp+=grid[i][j];
        isvisited[i][j]=1;
        i--;
        if (i>=0 && grid[i][j] && !isvisited[i][j]) dfs(i, j, temp, isvisited, grid);
        i+=2;
        if (i<grid.size() && grid[i][j] && !isvisited[i][j]) dfs(i, j, temp, isvisited, grid);
        i--;
        j--;
        if (j>=0 && grid[i][j] && !isvisited[i][j]) dfs(i, j, temp, isvisited, grid);
        j+=2;
        if (j<grid[0].size() && grid[i][j] && !isvisited[i][j]) dfs(i, j, temp, isvisited, grid);
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector <vector <int>> isvisited(m, vector <int> (n, 0));
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                long long temp = 0;
                if (grid[i][j] && !isvisited[i][j]) {
                    dfs(i, j, temp, isvisited, grid);
                    if (temp%ll(k)==0) ans++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

