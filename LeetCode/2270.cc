#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        vector <long long> presum(n-1);
        for (int i=0; i<n-1; i++) {
            sum+=nums[i];
            presum[i]=sum;
        }
        sum = 0;
        vector <long long> postsum(n-1);
        for (int i=n-1; i>0; i--) {
            sum+=nums[i];
            postsum[i-1] = sum;
        }
        int ans = 0;
        for (int i=0; i<n-1; i++) if (presum[i]>=postsum[i]) ans++;
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