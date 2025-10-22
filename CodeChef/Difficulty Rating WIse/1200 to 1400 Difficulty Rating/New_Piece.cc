// https://www.codechef.com/problems/NEWPIECE

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if (x==a && y==b) cout<<0<<endl;
        else if ((x+y)%2==(a+b)%2) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}