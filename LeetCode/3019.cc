#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        vector <int> freq(26,0);
        for (char c : word) freq[c-'a']++;
        sort(freq.rbegin(), freq.rend());
        int ans = 0;
        for (int i=0; i<26; i++) {
            if (freq[i]==0) break;
            if (i<8) ans+=freq[i]*1;
            else if (i<16) ans+=freq[i]*2;
            else if (i<24) ans+=freq[i]*3;
            else ans+=freq[i]*4;
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