#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
        int pos = 0;
        long long ans = 0;
        for (int i=0; i<n; i++) {
            if (s[i]=='0') {
                ans+=(i-pos);
                pos++;
            }
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