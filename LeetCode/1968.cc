#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector <int> ans(n);
        int i=0, j=n-1;
        int k=0;
        while (i<j) {
            ans[k++] = nums[i++];
            ans[k++] = nums[j--];
        }
        if (i==j) ans[k] = nums[i];
        return ans;
    }
};

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        for (int i=1; i<n-1; i++) {
            if (nums[i]==(nums[i-1]+nums[i+1])/2.0) {
                swap(nums[i], nums[i+1]);
            }
        }
        for (int i=n-2; i>0; i--) {
            if (nums[i]==(nums[i-1]+nums[i+1])/2.0) {
                swap(nums[i], nums[i-1]);
            }
        }
        return nums;
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