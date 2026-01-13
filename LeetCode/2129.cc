#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector <vector <int>> order;
        for (int n : nums) {
            string temp = to_string(n);
            string s = "";
            for (char c : temp) s+=char(mapping[c-'0']+'0');
            order.push_back({stoi(s),n});
        }
        stable_sort(order.begin(), order.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        int n = nums.size();
        vector <int> ans(n);
        for (int i=0; i<n; i++) ans[i]=order[i][1];
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