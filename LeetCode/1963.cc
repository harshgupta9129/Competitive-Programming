#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        int ans = 0;
        int open = 0;
        int close = 0;
        int n = s.length();
        for (int i=0; i<n; i++) {
            if (s[i]=='[') open++;
            else close++;
            if (close>open) ans = max(ans, close-open);
        }
        return (ans + 1) / 2;
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