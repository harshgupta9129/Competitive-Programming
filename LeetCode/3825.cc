#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans = 0;
        for (int i=0; i<=30; i++) {
            vector <int> dp;
            for (int x : nums) {
                if ((x&(1<<i))==0) continue;
                auto pos = lower_bound(dp.begin(), dp.end(), x);
                if (pos==dp.end()) {
                    dp.push_back(x);
                }
                else {
                    *pos = x;
                }
            }
            ans = max(ans, (int)dp.size());
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