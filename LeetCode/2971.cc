#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.rbegin(), nums.rend());
        long long sum = 0;
        for (int x : nums) sum+=x;
        int i=0;
        while (i<n) {
            if (sum-nums[i]>nums[i]) break;
            sum-=nums[i];
            i++;
        }
        return (sum ? sum : -1);
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