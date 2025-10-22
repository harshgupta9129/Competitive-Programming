#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,w,z;
        cin>>x>>y>>w>>z;
        cout<<max(abs(x-w),abs(y-z))<<endl;
    }
    return 0;
}