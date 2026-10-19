class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<9; i++) {
            unordered_set <char> strow, stcol;
            int countrow = 0, countcol = 0;
            for (int j=0; j<9; j++) {
                if (board[i][j]>='1' && board[i][j]<='9') {
                    strow.insert(board[i][j]);
                    countrow++;
                }
                if (board[j][i]>='1' && board[j][i]<='9') {
                    stcol.insert(board[j][i]);
                    countcol++;
                }
            }
            if (countrow!=strow.size() || countcol != stcol.size()) return false;
        }
        for (int k=0; k<3; k++) {
            for (int m=0; m<3; m++) {
                unordered_set <char> st;
                int count = 0;
                for (int i=3*k; i<3*k+3; i++) {
                    for (int j=3*m; j<3*m+3; j++) {
                        if (board[i][j]>='1' && board[i][j]<='9') {
                            st.insert(board[i][j]);
                            count++;
                        }
                    }
                }
                if (count != st.size()) return false;
            }
        }
        return true;
    }
};