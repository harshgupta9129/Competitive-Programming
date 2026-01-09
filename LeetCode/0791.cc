#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map <char, int> freq;
        for (char c : s) freq[c]++;
        s = "";
        for (char c : order) if (freq[c]) while (freq[c]--) s+=c;
        for (auto &p : freq) if (p.second>0) while (freq[p.first]--) s+=p.first;
        return s;
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