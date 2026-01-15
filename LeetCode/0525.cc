#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int sum = 0;
        
        unordered_map <int, int> mp;
        mp[sum] = -1;

        for (int i=0; i<n; i++) {
            sum+=(nums[i] ? 1 : -1);
            if (mp.count(sum)) ans = max(ans,i-mp[sum]);
            else mp[sum] = i;
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