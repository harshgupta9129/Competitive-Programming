#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int point1 = a+b+c - min(a,min(b,c));
        int point2 = d+e+f - min(d,min(e,f));
        if (point1 < point2) cout<<"Bob"<<endl;
        else if (point1 > point2) cout<<"Alice"<<endl;
        else cout<<"Tie"<<endl;
    }
    return 0;
}