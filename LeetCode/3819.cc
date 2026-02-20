#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& temp, int l, int r) {
        while (l < r) {
            swap(temp[l], temp[r]);
            l++;
            r--;
        }
    }

    vector<int> rotateElements(vector<int>& nums, int k) {
        vector <int> temp;
        for (int x : nums) if (x>=0) temp.push_back(x);
        int n = temp.size();
        if (n==0) return nums;
        k = k % n;
        reverse(temp, 0, k-1);
        reverse(temp, k, n-1);
        reverse(temp, 0, n-1);
        int i=0;
        for (int &x : nums) {
            if (x>=0) x=temp[i++];
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