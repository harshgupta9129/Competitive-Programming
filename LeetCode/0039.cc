#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int i, int n, int target,vector <int> &candidates, vector <int> &sub, vector <vector <int>> &ans) {
        if (target<0) return;
        if (i==n) {
            if (target==0) ans.push_back(sub);
            return;
        }
        // Pick Element
        sub.push_back(candidates[i]);
        solve(i, n, target-candidates[i], candidates, sub, ans);
        // No pick Element
        sub.pop_back();
        solve(i+1, n, target, candidates, sub, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector <int> sub;
        vector <vector <int>> ans;
        solve(0, candidates.size(), target, candidates, sub, ans);
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