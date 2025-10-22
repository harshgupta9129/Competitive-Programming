#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        float x,n;
        cin>>x>>n;
        int req = ceil(n/100);
        if (req>x) cout<<req-x<<endl;
        else cout<<0<<endl;
    }
    return 0;
}