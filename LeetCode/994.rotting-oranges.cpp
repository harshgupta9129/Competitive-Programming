/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue <vector <int>> q;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (grid[i][j]==2) {
                    q.push({i, j, 0});
                }
            }
        }
        int ans = 0;
        while (q.size()!=0) {
            int row = q.front()[0];
            int col = q.front()[1];
            int time = q.front()[2];
            ans = max(ans, time);
            q.pop();
            row--;
            if (row>=0 && grid[row][col]==1) {
                q.push({row, col, time+1});
                grid[row][col]=2;
            }
            row+=2;
            if (row<n && grid[row][col]==1) {
                q.push({row, col, time+1});
                grid[row][col]=2;
            }
            row--;
            col--;
            if (col>=0 && grid[row][col]==1) {
                q.push({row, col, time+1});
                grid[row][col]=2;
            }
            col+=2;
            if (col<m && grid[row][col]==1) {
                q.push({row, col, time+1});
                grid[row][col]=2;
            }
        }
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (grid[i][j]==1) return -1;
            }
        }
        return ans;
    }
};
// @lc code=end

