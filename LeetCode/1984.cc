#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k==1) return 0;
        sort(nums.begin(), nums.end());
        int i=0, j=k-1;
        int n = nums.size();
        int ans = nums[j]-nums[i];
        while (j<n) {
            int temp = nums[j++]-nums[i++];
            if (temp<ans) ans = temp;
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