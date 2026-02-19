#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int i, int n, string s, vector <string> &store, unordered_set <string> &dict, vector <vector<string>> &temp) {
        if (i==n) {
            temp.push_back(store);
            return;
        }
        string t;
        while (i<n) {
            t.push_back(s[i]);
            if (dict.find(t)!=dict.end()) {
                store.push_back(t);
                solve(i+1, n, s, store, dict, temp);
                store.pop_back();
            }
            i++;
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set <string> dict;
        for (string t : wordDict) dict.insert(t);
        vector <vector <string>> temp;
        vector <string> store;
        vector <string> ans;
        solve (0, s.length(), s, store, dict, temp);
        for (vector <string> p : temp) {
            string a;
            for (string x : p) {
                a+=x;
                a.push_back(' ');
            }
            a.pop_back();
            ans.push_back(a);
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