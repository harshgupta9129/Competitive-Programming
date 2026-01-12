#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n + 1, 0);

        for (auto &sh : shifts) {
            int l = sh[0], r = sh[1];
            int move = (sh[2] == 1 ? 1 : -1);
            diff[l] += move;
            diff[r + 1] -= move;
        }

        int curr = 0;
        for (int i = 0; i < n; i++) {
            curr += diff[i];
            int shift = (curr % 26 + 26) % 26;
            s[i] = char('a' + (s[i] - 'a' + shift) % 26);
        }

        return s;
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