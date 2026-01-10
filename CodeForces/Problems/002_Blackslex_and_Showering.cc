#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        int save = max(abs(a[0]-a[1]), abs(a[n-1]-a[n-2]));
        for (int i=1; i<n-1; i++) {
            int c = abs(a[i]-a[i-1]);
            int d = abs(a[i]-a[i+1]);
            int e = abs(a[i-1]-a[i+1]);
            if (c+d > e) save = max(save, c+d-e);
        }
        int ans = 0;
        for (int i=0; i<n-1; i++) ans+=abs(a[i+1]-a[i]);
        ans-=save;
        cout<<ans<<endl;
    }
    return 0;
}