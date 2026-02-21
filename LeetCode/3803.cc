#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int residuePrefixes(string s) {
        int distinct = 0;
        int ans = 0;
        unordered_set <char> dist;
        for (int i = 0; i < s.size(); i++) {
            dist.insert(s[i]);
            if (dist.size()==(i+1)%3) ans++;
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