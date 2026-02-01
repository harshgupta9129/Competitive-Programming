#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve (int i, int n, int target, vector <int> &candidates, vector <int> &sub, vector <vector <int>> &ans) {
        if (target == 0) {
            ans.push_back(sub);
            return;
        }
        if (target < 0) return;

        for (int j=i; j<n; j++) {
            if (j>i && candidates[j]==candidates[j-1]) continue;
            // Pick Element
            sub.push_back(candidates[j]);
            solve(j+1, n, target-candidates[j], candidates, sub, ans);
            // No Pick The Element
            sub.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
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