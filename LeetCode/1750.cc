#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int i=0, j=s.length()-1;
        while (i<j && s[i]==s[j]) {
            char c = s[i];
            i++;
            while (i<=j && c==s[i]) i++;
            while (i<=j && c==s[j]) j--;
        }
        if (i>j) return 0;
        return j-i+1;
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