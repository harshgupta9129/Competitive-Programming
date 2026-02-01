#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int i, int n, vector <int> &nums, vector <vector <int>> &ans) {
        if (i==n) {
            ans.push_back(nums);
            return;
        }
        for (int j=i; j<n; j++) {
            swap(nums[i], nums[j]);
            solve(i+1, n, nums, ans);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector <vector <int>> ans;
        solve(0, nums.size(), nums, ans);
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