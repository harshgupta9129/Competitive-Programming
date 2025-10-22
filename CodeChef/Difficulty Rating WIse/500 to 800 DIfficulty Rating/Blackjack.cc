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
        int ans = 21-x-y;
        if (ans>10) ans = -1;
        cout<<ans<<endl;
    }
    return 0;
}