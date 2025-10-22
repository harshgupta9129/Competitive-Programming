// https://www.codechef.com/problems/SINGLEOP1

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i0 = n;
        for (int i=0; i<n; i++) {
            if (s[i]=='0') {
                i0 = i;
                break;
            }
        } 
        cout<<i0<<endl;
    }
    return 0;
}