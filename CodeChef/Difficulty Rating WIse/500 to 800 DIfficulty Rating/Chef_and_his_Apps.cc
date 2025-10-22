#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int s,x,y,z;
        cin>>s>>x>>y>>z;
        if (s>=x+y+z) cout<<0<<endl;
        else if (s>=z+min(x,y)) cout<<1<<endl;
        else cout<<2<<endl; 
    }
    return 0;
}