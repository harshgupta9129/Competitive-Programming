#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool ans = true;
        int n = nums.size();
        vector <int> temp1 = nums;
        for (int i=0; i<n-1; i++) if (temp1[i]>temp1[i+1]) {
            temp1[i]=temp1[i+1];
            break;
        }
        for (int i=0; i<n-1; i++) if (temp1[i]>temp1[i+1]) {
            ans = false;
            break;
        }
        if (ans) return true;
        vector <int> temp2 = nums;
        ans = true;
        for (int i=n-1; i>0; i--) if (temp2[i-1]>temp2[i]) {
            temp2[i] = temp2[i-1];
            break;
        }
        for (int i=0; i<n-1; i++) if (temp2[i]>temp2[i+1]) {
            ans = false;
            break;
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