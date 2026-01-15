#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int n = s.length();
        int m = spaces.size();
        int j = 0;
        for (int i=0; i<n; i++) {
            if (j<m && i==spaces[j]) {
                ans+=" ";
                j++;
            }
            ans+=s[i];
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