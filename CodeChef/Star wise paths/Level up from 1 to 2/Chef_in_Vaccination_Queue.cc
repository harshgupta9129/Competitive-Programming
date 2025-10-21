#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int ans = 0;
        for (int i=0; i<p; i++) {
            if (arr[i]) ans+=y;
            else ans+=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}