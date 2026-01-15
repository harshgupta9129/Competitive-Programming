#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector <int> left;
        vector <int> right;
        vector <int> mid;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i]<pivot) left.push_back(nums[i]);
            else if (nums[i]>pivot) right.push_back(nums[i]);
            else mid.push_back(pivot);
        }
        vector <int> ans(left.begin(), left.end());
        ans.insert(ans.end(), mid.begin(), mid.end());
        ans.insert(ans.end(), right.begin(), right.end());
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