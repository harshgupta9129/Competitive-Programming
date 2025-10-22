#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int s,d,l;
        cin>>s>>d>>l;
        int time = d/s;
        if (l>time) cout<<l-time<<endl;
        else cout<<0<<endl;
    }
    return 0;
}