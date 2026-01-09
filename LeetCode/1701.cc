#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int currtime = 0;
        int n = customers.size();
        double ans = 0;
        for (int i=0; i<n; i++) {
            currtime = max(currtime, customers[i][0]);
            currtime+=customers[i][1];
            ans += currtime - customers[i][0];
        }
        return ans/n; 
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