#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        for (int i=0; i<n; i++) {
            if (s[i]=='A') cout<<'T';
            if (s[i]=='T') cout<<'A';
            if (s[i]=='C') cout<<'G';
            if (s[i]=='G') cout<<'C';
        }
        cout<<endl;
    }
    return 0;
}