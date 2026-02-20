#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int idx, int n, vector <int> &temp, vector <vector<int>> &ans, vector <int> &nums) {
        if (temp.size()>1) ans.push_back(temp); 
        unordered_set<int> used;

        for (int i = idx; i<n; i++) {
            if (!temp.empty() && nums[i] < temp.back()) continue;
            if (used.count(nums[i])) continue;
            used.insert(nums[i]);
            temp.push_back(nums[i]);
            solve(i+1, n, temp, ans, nums);
            temp.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector <int> temp;
        vector <vector <int>> ans;
        solve(0, nums.size(), temp, ans, nums);
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