#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector <int> dp(n+1);
        dp[0] = 0;
        dp[1] = 0;
        for (int i=2; i<=n; i++) {
            dp[i] = min(dp[i-2]+cost[i-2], dp[i-1]+cost[i-1]);
        }
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