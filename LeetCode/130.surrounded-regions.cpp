/*
 * @lc app=leetcode id=130 lang=cpp
 *
 * [130] Surrounded Regions
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs (int row, int col, vector <vector <char>> &board, vector <vector <int>> &nochange) {
        int m = board.size();
        int n = board[0].size();
        nochange[row][col]=1;
        row--;
        if (row>=0 && board[row][col]=='O' && !nochange[row][col]) dfs(row, col, board, nochange);
        row+=2;
        if (row<m && board[row][col]=='O' && !nochange[row][col]) dfs(row, col, board, nochange);
        row--;
        col--;
        if (col>=0 && board[row][col]=='O' && !nochange[row][col]) dfs(row, col, board, nochange);
        col+=2;
        if (col<n && board[row][col]=='O' && !nochange[row][col]) dfs(row, col, board, nochange);
    } 

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector <vector <int>> nochange(m, vector <int> (n, 0));
        for (int i=0; i<n; i++) if (board[0][i]=='O') dfs(0, i, board, nochange);
        for (int i=0; i<n; i++) if (board[m-1][i]=='O') dfs(m-1, i, board, nochange);
        for (int i=0; i<m; i++) if (board[i][0]=='O') dfs(i, 0, board, nochange);
        for (int i=0; i<m; i++) if (board[i][n-1]=='O') dfs(i, n-1, board, nochange);
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (nochange[i][j]) continue;
                board[i][j]='X';
            }
        }
    }
};
// @lc code=end

