#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector <vector <int>> ans(n/3);
        for (int i=0; i<n/3; i++) ans[i]=vector<int>(nums.begin()+i*3, nums.begin()+(i+1)*3);
        for (int i=0; i<n/3; i++) {
            if (ans[i].back()-ans[i][0]>k) return {};
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