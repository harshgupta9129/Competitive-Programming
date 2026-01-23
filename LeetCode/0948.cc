#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int i=0, j=tokens.size()-1;
        int score = 0;
        int maxscore = 0;
        while (i<=j) {
            if (tokens[i]<=power) {
                score++;
                power-=tokens[i];
                i++;
            }
            else if (score!=0) {
                score--;
                power+=tokens[j];
                j--;
            }
            else break;
            if (maxscore<score) maxscore= score;
        }
        return maxscore;
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