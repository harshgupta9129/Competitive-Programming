/*
 * @lc app=leetcode id=1020 lang=cpp
 *
 * [1020] Number of Enclaves
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int row, int col, vector <vector <int>> &travel, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        travel[row][col]=1;
        row--;
        if (row>=0 && grid[row][col] && !travel[row][col]) dfs(row, col, travel, grid);
        row+=2;
        if (row<m && grid[row][col] && !travel[row][col]) dfs(row, col, travel, grid);
        row--;
        col--;
        if (col>=0 && grid[row][col] && !travel[row][col]) dfs(row, col, travel, grid);
        col+=2;
        if (col<n && grid[row][col] && !travel[row][col]) dfs(row, col, travel, grid);
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector <vector <int>> travel(m, vector <int> (n, 0));
        int ans = 0;
        for (int i=0; i<n; i++) if (grid[0][i]) dfs(0, i, travel, grid);
        for (int i=0; i<n; i++) if (grid[m-1][i]) dfs(m-1, i, travel, grid);
        for (int i=0; i<m; i++) if (grid[i][0]) dfs(i, 0, travel, grid);
        for (int i=0; i<m; i++) if (grid[i][n-1]) dfs(i, n-1, travel, grid);
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (grid[i][j] && !travel[i][j]) ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

