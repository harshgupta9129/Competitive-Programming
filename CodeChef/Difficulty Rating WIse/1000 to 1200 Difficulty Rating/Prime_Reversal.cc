// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PRIMEREVERSE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string a,b;
        cin>>n>>a>>b;
        int a0=0,a1=0,b0=0,b1=0;
        for (int i=0; i<n; i++) {
            if (a[i]=='0') a0++;
            else a1++;
            if (b[i]=='0') b0++;
            else b1++;
        }
        if (a1==b1 && a0==b0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}