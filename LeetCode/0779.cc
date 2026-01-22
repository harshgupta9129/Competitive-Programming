#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        k = k+pow(2,n-1)-1-1;
        string s = "";
        while(k!=0) {
            if (k%2==0) s+='1';
            else s+='0';
            k = (k-1)/2; 
        }
        n = s.length();
        int curr = 0;
        for (int i=n-1; i>=0; i--) {
            if (curr==0) {
                if (s[i]=='0') curr = 0;
                else curr = 1;
            }
            else {
                if (s[i]=='0') curr = 1;
                else curr = 0;
            }
        }
        return curr;
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