#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        if (n==2) return 1;
        vector <int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for (int i=3; i<=n; i++) dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
        return dp[n];
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