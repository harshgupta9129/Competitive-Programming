#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        // unordered_map <int, vector <int>> collector;
        // int n = x.size();
        // for (int i=0; i<n; i++) collector[x[i]].push_back(y[i]);
        // vector <vector <int>> group;
        // for (auto p : collector) group.push_back(p.second);
        // n = group.size();
        // if (n<3) return -1;
        // for (int i=0; i<n; i++) sort(group[i].rbegin(), group[i].rend());
        // sort(group.begin(), group.end());
        // return group[n-1][0]+group[n-2][0]+group[n-3][0];
        
        unordered_map <int, int> collector;
        int n = x.size();
        for (int i=0; i<n; i++) {
            if (collector.count(x[i])) {
                if (collector[x[i]]<y[i]) collector[x[i]] = y[i];
            }
            else collector[x[i]]=y[i];
        }
        vector <int> ans;
        for (auto p : collector) ans.push_back(p.second);
        n = ans.size();
        if (n<3) return -1;
        sort(ans.rbegin(), ans.rend());
        return ans[0]+ans[1]+ans[2];
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