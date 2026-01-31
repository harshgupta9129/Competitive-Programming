#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseByType(string s) {
        vector <char> charc;
        vector <char> spec;
        for (char c : s) {
            if (c>='a' && c<='z') charc.push_back(c);
            else spec.push_back(c);
        }
        reverse(charc.begin(), charc.end());
        reverse(spec.begin(), spec.end());
        int i=0, j=0;
        string ans;
        for (char c : s) {
            if (c>='a' && c<='z') ans+=charc[i++];
            else ans+=spec[j++];
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