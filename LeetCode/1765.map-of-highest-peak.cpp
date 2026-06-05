/*
 * @lc app=leetcode id=1765 lang=cpp
 *
 * [1765] Map of Highest Peak
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        vector <vector <int>> isvisited(m, vector <int> (n, 0));
        vector <vector <int>> ans(m, vector <int> (n, 0));
        queue <vector <int>> q;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (isWater[i][j]==1) {
                    q.push({i, j, 0});
                    isvisited[i][j]=1;
                }
            }
        }
        while (q.size()) {
            int row = q.front()[0];
            int col = q.front()[1];
            int dis = q.front()[2];
            ans[row][col]=dis;
            q.pop();
            row--;
            if (row>=0 && !isvisited[row][col]) {
                q.push({row, col, dis+1});
                isvisited[row][col]=1;
            }
            row+=2;
            if (row<m && !isvisited[row][col]) {
                q.push({row, col, dis+1});
                isvisited[row][col]=1;
            }
            row--;
            col--;
            if (col>=0 && !isvisited[row][col]) {
                q.push({row, col, dis+1});
                isvisited[row][col]=1;
            }
            col+=2;
            if (col<n && !isvisited[row][col]) {
                q.push({row, col, dis+1});
                isvisited[row][col]=1;
            }
        }
        return ans;
    }
};
// @lc code=end

