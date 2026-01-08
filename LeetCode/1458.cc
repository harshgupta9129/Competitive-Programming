#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MIN));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int prod = nums1[i] * nums2[j];
                int add = (dp[i][j] == INT_MIN ? prod : dp[i][j] + prod);
                dp[i + 1][j + 1] = max({prod, add, dp[i][j + 1], dp[i + 1][j]});
            }
        }
        return dp[n][m];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}