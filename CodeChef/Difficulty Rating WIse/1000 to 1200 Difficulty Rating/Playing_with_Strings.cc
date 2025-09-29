// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PLAYSTR

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s,r;
        cin>>n>>s>>r;
        int counts = 0, countr =0;
        for (int i=0; i<n; i++) {
            if (s[i]=='1') counts++;
            if (r[i]=='1') countr++;
        }
        if (counts==countr) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;        
    }
    return 0;
}