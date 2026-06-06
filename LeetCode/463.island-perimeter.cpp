/*
 * @lc app=leetcode id=463 lang=cpp
 *
 * [463] Island Perimeter
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

// First Solution 
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int peri = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    peri+=4;
                if( i>0 && grid[i-1][j]==1) peri--;//up
                if(j<col-1 && grid[i][j+1]==1) peri--;//right
                if(i<row-1 && grid[i+1][j]==1) peri--;
                if(j>0 && grid[i][j-1]) peri--;
                }
            }
        }
        return peri;
    }
};

// Second Solution
class Solution {
public:

    void bfs (int i, int j, int m, int n, int &ans, vector <vector <int>> &isvisited, vector<vector<int>>& grid) {
        queue <pair <int, int>> q;
        q.push({i, j});
        isvisited[i][j]=1;
        while (q.size()) {
            i = q.front().first;
            j = q.front().second;
            q.pop();
            i--;
            if (i>=0 && grid[i][j]) {
                if (!isvisited[i][j]) {
                    q.push({i, j});
                    isvisited[i][j]=1;
                }
            }
            else ans++;
            i+=2;
            if (i<m && grid[i][j]) {
                if (!isvisited[i][j]) {
                    q.push({i, j});
                    isvisited[i][j]=1;
                }
            }
            else ans++;
            i--;
            j--;
            if (j>=0 && grid[i][j]) {
                if (!isvisited[i][j]) {
                    q.push({i, j});
                    isvisited[i][j]=1;
                }
            }
            else ans++;
            j+=2;
            if (j<n && grid[i][j]) {
                if (!isvisited[i][j]) {
                    q.push({i, j});
                    isvisited[i][j]=1;
                }
            }
            else ans++;
        }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector <vector <int>> isvisited(m, vector <int> (n, 0));
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (grid[i][j]&& !isvisited[i][j]) {
                    bfs(i, j, m, n, ans, isvisited, grid);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

