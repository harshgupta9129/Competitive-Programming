#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int ans = 0;
        if (a<b) {
            ans+=b;
            if (a<c) ans+=c;
            else ans+=a;
        }
        else {
            ans+=a;
            if (b<c) ans+=c;
            else ans+=b;
        }
        cout<<ans<<endl;
    }
    return 0;
}