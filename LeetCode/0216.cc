#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve (int i, int k, int n, int sum, vector <int> &temp, vector <vector<int>> &ans) {
        if (sum>n) return;
        if (k==0) {
            if (sum==n) ans.push_back(temp);
            return;
        } 
        for (int j=i; j<10; j++) {
            temp.push_back(j);
            solve(j+1, k-1, n, sum+j, temp, ans);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector <vector <int>> ans;
        vector <int> temp;
        solve(1, k, n, 0, temp, ans);
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