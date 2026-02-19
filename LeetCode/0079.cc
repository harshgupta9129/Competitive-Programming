#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int x, int y, int idx, int m, int n, string word, vector <vector <char>> &board, bool &ans) {
        if (idx==word.length()) {
            ans = true;
            return;
        }
        // Left
        if (x>0 && word[idx]==board[x-1][y]) {
            char temp = board[x-1][y];
            board[x-1][y]='.';
            solve(x-1, y, idx+1, m, n, word, board, ans);
            board[x-1][y]=temp;
        } 
        // Right
        if (x<m-1 && word[idx]==board[x+1][y]) {
            char temp = board[x+1][y];
            board[x+1][y]='.';
            solve(x+1, y, idx+1, m, n, word, board, ans);
            board[x+1][y]=temp;
        } 
        // Top
        if (y>0 && word[idx]==board[x][y-1]) {
            char temp = board[x][y-1];
            board[x][y-1]='.';
            solve(x, y-1, idx+1, m, n, word, board, ans);
            board[x][y-1]=temp;
        }
        // Buttom
        if (y<n-1 && word[idx]==board[x][y+1]) {
            char temp = board[x][y+1];
            board[x][y+1]='.';
            solve(x, y+1, idx+1, m, n, word, board, ans);
            board[x][y+1]=temp;
        }
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        bool ans = false;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (board[i][j]==word[0]) {
                    char temp = board[i][j];
                    board[i][j]='.';
                    solve(i, j, 1, m, n, word, board, ans);
                    board[i][j]=temp;
                }
            }
        }
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