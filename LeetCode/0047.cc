#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int i, int n, vector <int> &nums, set <vector <int>> &temp) {
        if (i==n) {
            temp.insert(nums);
            return;
        }
        for (int j=i; j<n; j++) {
            swap(nums[i], nums[j]);
            solve(i+1, n, nums, temp);
            swap(nums[i], nums[j]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set <vector <int>> temp;
        solve(0, nums.size(), nums, temp);
        vector <vector <int>> ans(temp.begin(), temp.end());
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