#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumK(vector<int>& nums) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        if (n>high) high = n;
        int ans = high;
        while (low<=high) {
            int k = low + (high-low)/2;
            long long operation = 0;
            for (int x : nums) {
                operation+=(x+k-1)/k;
                if (operation > 1LL * k * k) break;
            }
            if (operation<=1ll*k*k) {
                ans = k;
                high = k-1;
            }
            else low = k+1;
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