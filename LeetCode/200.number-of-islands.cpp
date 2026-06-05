/*
 * @lc app=leetcode id=200 lang=cpp
 *
 * [200] Number of Islands
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bfs (int row, int col, int n, int m, vector <vector <int>> &isvisited, vector<vector<char>>& grid) {
        queue <pair <int, int>> q;
        q.push({row, col});
        isvisited[row][col]=1;
        while (q.size()!=0) {
            row = q.front().first;
            col = q.front().second;
            q.pop();
            row--;
            if (row>=0 && grid[row][col]=='1' && !isvisited[row][col]) {
                q.push({row, col});
                isvisited[row][col]=1;
            }
            row+=2;
            if (row<n && grid[row][col]=='1' && !isvisited[row][col]) {
                q.push({row, col});
                isvisited[row][col]=1;
            } 
            row--;
            col--;
            if (col>=0 && grid[row][col]=='1' && !isvisited[row][col]) {
                q.push({row, col});
                isvisited[row][col]=1;
            } 
            col+=2;
            if (col<m && grid[row][col]=='1' && !isvisited[row][col]) {
                q.push({row, col});
                isvisited[row][col]=1;
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector <vector <int>> isvisited(n, vector <int> (m, 0));
        int ans = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (!isvisited[i][j] && grid[i][j]=='1') {
                    ans++;
                    bfs(i, j, n, m, isvisited, grid);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

