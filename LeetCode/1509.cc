#include <bits/stdc++.h>
using namespace std;
  
class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n<=4) return 0;
        vector <int> a(4);
        // case 1 remove 3 smallest
        a[0] = nums[n-1]-nums[3];
        // case 2 remove 2 smallest 1 largest
        a[1] = nums[n-2]-nums[2];
        // case 3 remove 1 smallest 2 largest
        a[2] = nums[n-3]-nums[1];
        // case 4 remove 3 largest
        a[3] = nums[n-4]-nums[0];
        sort(a.begin(), a.end());
        return a[0];
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