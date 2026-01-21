#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        vector <int, int> profitable(n);
        for (int i=0; i<n; i++) profitable[i] = {profit[i], difficulty[i]};
        sort(profitable.rbegin(), profitable.rend());
        for (int i=0; i<n; i++) {
            
        }
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