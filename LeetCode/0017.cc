#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int i, int n, string &digit, string &s, vector <string> &letter, vector <string> &ans) {
        if (i==n) {
            ans.push_back(s);
            return;
        }
        for (char c : letter[digit[i]-'0']) {
            s+=c;
            solve(i+1, n, digit, s, letter, ans);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector <string> letter(10);
        letter[2]="abc";
        letter[3]="def";
        letter[4]="ghi";
        letter[5]="jkl";
        letter[6]="mno";
        letter[7]="pqrs";
        letter[8]="tuv";
        letter[9]="wxyz";
        string s = "";
        vector <string> ans;
        solve(0, digits.length(), digits, s, letter, ans);
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