#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        map <int, int> freq;
        int x;
        for (int i=0; i<n; i++) {
            cin>>x;
            freq[x]++;
        }
        int avail = 0;
        for (auto &p : freq) avail = max(avail, p.second);
        int ans = 0;
        if (n==avail) cout<<ans<<endl;
        else {
            x = log2((n)/(avail*1.0));
            if (x) {
                ans=(avail*pow(2,x)+x-avail);
                avail=(avail*pow(2,x));
            }
            if (avail!=n) ans+=(n-avail+1);
            cout<<ans<<endl;
        }
    }
    return 0;
}