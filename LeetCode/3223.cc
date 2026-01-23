#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        vector <int> freq(26,0);
        for (char c : s) freq[c-'a']++;
        int ans = 0;
        for (int x : freq) {
            if (x==0) continue;
            if (x%2) ans++;
            else ans+=2;
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