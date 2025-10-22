#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,d;
        cin>>x>>y>>d;
        if (abs(x-y)<=d) cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}