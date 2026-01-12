#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
        int i=0;
        int n=s.length();
        int ans = 0;
        while (i<n) {
            unordered_map <char, int> freq;
            int j=i;
            while (j<n) {
                if (freq[s[j]]) break;
                freq[s[j]]++;
                j++;
            }
            i=j;
            ans++;
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