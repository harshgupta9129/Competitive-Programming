#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n<=3) return false;
        int i=1;
        bool looper = true;
        while (i<n) {
            if (nums[i]>nums[i-1]) looper = false;
            else break;
            i++;
        }
        if (looper) return false;
        looper = true;
        while (i<n) {
            if (nums[i]<nums[i-1]) looper = false;
            else break;
            i++;
        }
        if (looper) return false;
        looper = true;
        while (i<n) {
            if (nums[i]>nums[i-1]) looper = false;
            else break;
            i++;
        }
        if (looper) return false;
        if (i==n) return true;
        return false;
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