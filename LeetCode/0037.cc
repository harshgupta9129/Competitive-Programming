#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool solve(vector<vector<char>>& board,
               vector<vector<bool>>& rows,
               vector<vector<bool>>& cols,
               vector<vector<bool>>& boxs) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {

                    for (char k = '1'; k <= '9'; k++) {
                        int d = k - '1';
                        int box = (i / 3) * 3 + j / 3;

                        if (!rows[i][d] && !cols[j][d] && !boxs[box][d]) {
                            // place
                            board[i][j] = k;
                            rows[i][d] = cols[j][d] = boxs[box][d] = true;

                            if (solve(board, rows, cols, boxs))
                                return true;

                            // backtrack
                            board[i][j] = '.';
                            rows[i][d] = cols[j][d] = boxs[box][d] = false;
                        }
                    }
                    return false; // no digit fits here
                }
            }
        }
        return true; // board completely filled
    }

    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> rows(9, vector<bool>(9, false));
        vector<vector<bool>> cols(9, vector<bool>(9, false));
        vector<vector<bool>> boxs(9, vector<bool>(9, false));

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int d = board[i][j] - '1';
                    int box = (i / 3) * 3 + j / 3;
                    rows[i][d] = cols[j][d] = boxs[box][d] = true;
                }
            }
        }

        solve(board, rows, cols, boxs);
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