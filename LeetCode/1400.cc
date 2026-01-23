#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
        if (k>n) return false;
        vector <int> freq(26,0);
        for (char c : s) freq[c-'a']++;
        int odd = 0;
        for (int x : freq) if (x%2) odd++;
        if (odd<=k) return true;
        return false;
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