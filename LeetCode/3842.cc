#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map <int, int> temp;
        for (int x : bulbs) temp[x]++;
        vector <int> ans;
        for (auto x : temp) {
            if (x.second%2) ans.push_back(x.first);
        }
        sort(ans.begin(), ans.end());
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