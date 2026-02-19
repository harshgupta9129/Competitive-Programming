#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {

        unordered_map<int, int> freq;
        for (int x : nums) freq[x]++;

        unordered_map<int, int> freqCount;
        for (auto &p : freq) freqCount[p.second]++;

        // Traverse nums to preserve order
        for (int x : nums) {
            if (freqCount[freq[x]] == 1) {
                return x;
            }
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