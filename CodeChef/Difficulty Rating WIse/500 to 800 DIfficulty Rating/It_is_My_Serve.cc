#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        x = (x+y)%4;
        if (x<2) cout<<"ALice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}