#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int curr = 0;
        int ans = 0;
        for (int i=0; i<n; i++) {
            if (curr==0) curr = arr[i];
            if (i<arr[i]) curr = max(curr, arr[i]);
            if (curr == i) {
                ans++;
                curr = 0;
            }
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