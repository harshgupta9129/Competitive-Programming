/*
 * @lc app=leetcode id=2658 lang=cpp
 *
 * [2658] Maximum Number of Fish in a Grid
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs (int i, int j, int &temp, vector <vector <int>> &isvisited, vector<vector<int>>& grid) {
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

    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector <vector <int>> isvisited(m, vector <int> (n, 0));
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                int temp = 0;
                if (grid[i][j] && !isvisited[i][j]) dfs(i, j, temp, isvisited, grid);
                ans = max(ans, temp); 
            }
        }
        return ans;
    }
};
// @lc code=end

