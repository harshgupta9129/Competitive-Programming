/*
 * @lc app=leetcode id=419 lang=cpp
 *
 * [419] Battleships in a Board
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

void bfs (int i, int j, int m, int n, vector <vector <int>> &isvisited, vector<vector<char>>& board) {
    queue <pair <int, int>> q;
    q.push({i, j});
    isvisited[i][j]=1;
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};
    while (q.size()) {
        i = q.front().first;
        j = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
            if (i+row[k]>=0 && i+row[k]<m && j+col[k]>=0 && j+col[k]<n && board[i+row[k]][j+col[k]]=='X' && !isvisited[i+row[k]][j+col[k]]) {
                q.push({i+row[k], j+col[k]});
                isvisited[i+row[k]][j+col[k]] = 1;
            }
        }
    }
}

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        int ans = 0;
        vector <vector <int>> isvisited(m, vector <int> (n, 0));
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (board[i][j]=='X' && !isvisited[i][j]) {
                    bfs(i, j, m, n, isvisited, board);
                    ans++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

