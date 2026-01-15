#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& houses) {
        int n = houses.size();
        vector <int> dp(n+1);
        dp[0]=0;
        dp[1]=houses[0];
        for (int i=1; i<n; i++) dp[i+1] = max(dp[i], dp[i-1]+houses[i]);
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