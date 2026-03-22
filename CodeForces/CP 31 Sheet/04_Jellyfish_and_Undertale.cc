#include <bits/stdc++.h>
using namespace std;

int main () {
    long long t;
    cin >> t;
    while (t--) {
        long long a,b,n;
        cin>>a>>b>>n;
        long long x;
        long long ans = b;
        for (long long i=0; i<n; i++) {
            cin>>x;
            ans+=(min(a-1,x));
            
        }
        cout<<ans<<endl;
    }
    return 0;
}