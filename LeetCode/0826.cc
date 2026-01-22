#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        vector <vector <int>> profitable(n);
        for (int i=0; i<n; i++) profitable[i] = {profit[i], difficulty[i]};
        sort(profitable.rbegin(), profitable.rend());
        sort(worker.begin(), worker.end());
        int limit = worker.size();
        int ans = 0;
        for (vector <int> p : profitable) {
            int i = 0;
            while (i<limit) {
                if (worker[i]>=p[1]) break;
                i++;
            }
            ans+=(limit-i)*p[0];
            limit = i;
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