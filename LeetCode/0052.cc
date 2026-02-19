#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isplace (int row, int col, int n, vector <string> &chessboard) {
        for (int i=0; i<col; i++) {
            for (int j=0; j<n; j++) {
                if (chessboard[j][i]=='Q') {
                    if (abs(i-col)==abs(j-row)) return false;
                    if (j==row) return false;
                }
            }
        }
        return true;
    }

    void solve (int col, int n, vector <string> &chessboard, int &ans) {
        if (col==n) {
            ans++;
            return;
        }
        for (int i=0; i<n; i++) {
            if (isplace(i, col, n, chessboard)) {
                chessboard[i][col]='Q';
                solve(col+1, n, chessboard, ans);
            }
            chessboard[i][col]='.';
        }
    }

    int totalNQueens(int n) {
        vector<string> chessboard(n, string(n, '.'));
        int ans = 0;
        solve(0, n, chessboard,ans);
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