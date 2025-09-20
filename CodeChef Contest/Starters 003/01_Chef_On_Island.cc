#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int x,y,x1,y1,d;
        cin>>x>>y>>x1>>y1>>d;
        if (x>=x1*d && y>=y1*d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}