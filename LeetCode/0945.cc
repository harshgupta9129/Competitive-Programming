#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int curr = nums[0];
        int n = nums.size();
        int ans = 0;
        for (int i=1; i<n; i++) {
            if (curr>=nums[i]) {
                curr++;
                ans+=(curr-nums[i]);
            }
            else curr = nums[i];
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