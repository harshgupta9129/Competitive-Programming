#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());
        vector <vector <int>> ans;
        ans.push_back(pairs[0]);
        for (vector <int> p : pairs) {
            vector <int> a = ans.back();
            if (a[0]==p[0]) {
                if (a[1]<=p[1]) continue;
                else {
                    ans.pop_back();
                    ans.push_back(p);
                }
            }
            if (a[1]<p[0]) ans.push_back(p);
            else {
                if (a[1]<p[1]) continue;
                else {
                    ans.pop_back();
                    ans.push_back(p);
                }
            }
        }
        return ans.size();
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