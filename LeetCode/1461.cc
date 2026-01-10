#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = pow(2,k);
        vector <bool> check(n,false);
        for (int i=0; i+k<=s.size(); i++) check[stoi(s.substr(i,k), nullptr, 2)] = true;
        for (int i=0; i<n; i++) if (check[i]==false) return false;
        return true;
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