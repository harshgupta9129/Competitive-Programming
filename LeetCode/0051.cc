#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Check Can I Place Queen on that position
    bool isplace (int row, int col, int n, vector <string> &chessboard) {
        for (int i=0; i<n; i++) {
            for (int j=0; j<col; j++) {
                if (chessboard[i][j]=='Q') {
                    if (row-i==col-j) return false;
                    if (i==row) return false;
                    if (col-j==i-row) return false;
                }
            }
        }
        return true;
    }

    // Recursive Place the queens in each col
    void solve (int col, int n, vector <string> &chessboard, vector <vector<string>> &ans) {
        if (col==n) {
            ans.push_back(chessboard);
            return;
        }
        for (int i=0; i<n; i++) {
            if (isplace(i, col, n, chessboard)) {
                chessboard[i][col]='Q';
                solve(col+1, n, chessboard, ans);
                chessboard[i][col]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector <vector <string>> ans;
        vector <string> chessboard(n, string(n,'.'));
        solve (0, n, chessboard, ans);
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        
    }
    return 0;
}