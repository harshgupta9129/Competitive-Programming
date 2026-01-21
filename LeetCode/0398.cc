#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rob(string s, string t) {
        int i=0, j=0;
        int n = s.length(), m = t.length();
        while (i<m) {
            if (j<n) if (t[i]==s[j]) j++;
            i++;
        }
        return j==n;
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