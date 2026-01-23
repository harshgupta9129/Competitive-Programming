#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long ans = 0,prefixsum = 0;
        for (int i=0; i<nums.size(); i++) {
            prefixsum+=nums[i];
            long long temp = (prefixsum+i)/(i+1);
            ans = max(ans , temp);
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