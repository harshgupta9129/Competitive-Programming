#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i=n-1; i>=0; i--) ans+=nums[i]-nums[0];
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