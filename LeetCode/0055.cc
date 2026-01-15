#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        dp[0] = 0;

        for (int i = 0; i < n; i++) {
            if (dp[i] == -1) continue;
            int temp = nums[i];

            for (int j = 1; j <= temp; j++) {
                if (i + j >= n) break;
                dp[i + j] = 1;
            }
        }
        return dp[n - 1] != -1;
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