#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int n=s.length();
        int j=0;
        int m=t.length();
        while (i<n) {
            if (s[i]==t[j]) j++;
            i++;
            if (j==m) break;
        }
        return m-j;
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