#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> freq;
        for (int x : nums) freq[x]++;
        int dominance = -1;
        int total = -1;
        for (auto &p : freq) if (p.second*2>n) {
            dominance = p.first;
            total = p.second;
            break;
        }
        if (total == -1) return -1;
        int left = 0;
        for (int i=0; i<n-1; i++) {
            if (nums[i]==dominance) left++;
            int right = total - left;
            if (left*2 > i+1 && right*2 > (n-(i+1))) return i;
        }
        return -1;
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