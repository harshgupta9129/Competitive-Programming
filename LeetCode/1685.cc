#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        long long right = 0;
        for (int i=0; i<n; i++) right+=nums[i];
        vector <int> ans(n);
        long long left = 0;
        for (int i=0; i<n; i++) {
            right-=nums[i];
            ans[i]=right-(n-i-1)*nums[i]+i*nums[i]-left;
            left+=nums[i];
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