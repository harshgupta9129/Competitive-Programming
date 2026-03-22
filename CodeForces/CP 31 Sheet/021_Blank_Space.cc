#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        int ans = 0;
        int count = 0;
        if (a[0]==0) count = 1;
        for (int i=0; i<n-1; i++) {
            if (a[i]==0 && a[i+1]==0) count++;
            if (a[i]==0 && a[i+1]==1) {
                ans = max(ans,count);
                count = 0;
            }
            else if (a[i]==1 && a[i+1]==0) count = 1;
        }
        ans = max(ans,count);
        cout<<ans<<endl;
    }
    return 0;
}