#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        multiset<long long> points;
        set<long long> cracks;
        int n = wall.size();

        for (int i = 0; i < n; i++) {
            int m = wall[i].size();
            long long curr = 0;
            for (int j = 0; j < m - 1; j++) {
                curr += wall[i][j];
                points.insert(curr);
                cracks.insert(curr);
            }
        }

        int ans = 0;
        for (long long x : cracks) ans = max(ans, (int)points.count(x));
        return n - ans;
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