#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> freq;
        for (int x : nums) freq[x]++;
        int m = 0;
        for (auto &p : freq) m = max(m,p.second);
        vector <vector <int>> ans(m);
        for (int i=0; i<m; i++) {
            vector <int> temp;
            for (auto &p : freq) if (p.second>0) {
                p.second--;
                temp.push_back(p.first);
            }
            ans[i]=temp;
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