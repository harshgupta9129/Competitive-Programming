#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        float a,x,b,y;
        cin>>a>>x>>b>>y;
        float s1 = a/x;
        float s2 = b/y;
        if (s1 > s2) cout<<"Alice"<<endl;
        else if (s2 > s1) cout<<"Bob"<<endl;
        else cout<<"EQUAL"<<endl;
    }
    return 0;
}