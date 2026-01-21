#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector <int> row(n, 0);
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) row[i]=max(row[i], grid[i][j]);
        }
        vector <int> col(m, 0);
        for (int j=0; j<m; j++) {
            for (int i=0; i<n; i++) col[j]=max(col[j], grid[i][j]);
        }
        int ans = 0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                ans+=min(row[i], col[j])-grid[i][j];
            }
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