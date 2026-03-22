#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int l,r,k;
        vector <int> pre(n);
        vector <int> bac(n);
        int sum = 0;
        for (int i=0; i<n; i++) {
            sum+=arr[i];
            pre[i]=sum;
        }
        sum = 0;
        for (int i=n-1; i>=0; i--) {
            sum+=arr[i];
            bac[i]=sum;
        }
        for (int j=0; j<q; j++) {
            cin>>l>>r>>k;
            long long sum = (l==1 ? 0 : pre[l-2]) + (r-l+1)*k + (r==n ? 0 : bac[r]);
            if (sum%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}