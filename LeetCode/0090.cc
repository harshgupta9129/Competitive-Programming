#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recursion (int i, int n, vector <int> nums, vector <int> &temp, vector <vector<int>> &ans) {
        if (i==n) {
            ans.push_back(temp);
            return;
        }
        for (int j=i; j<n; j++) {
            if (j+1>i && nums[j]==nums[j-1]) continue;

            // Take
            temp.push_back(nums[j]);
            recursion(j+1, n, nums, temp, ans);

            // No Take
            temp.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <vector<int>> ans;
        vector <int> temp;
        recursion(0, nums.size(), nums, temp ,ans);
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