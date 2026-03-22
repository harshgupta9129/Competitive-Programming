#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        int ans = 0;
        for (int i=1; i<=n; i++) {
            if (n%i!=0) break;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}