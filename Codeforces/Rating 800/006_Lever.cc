// 2131A	Lever

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for (int i=0; i<n; i++) cin>>a[i];
        for (int i=0; i<n; i++) cin>>b[i];

        // When iteration fails so ans = 1
        int ans = 1;
        for (int i = 0; i < n; i++) {
            // Only Step 1 is consider 
            if (a[i]>b[i]) ans+=(a[i]-b[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}