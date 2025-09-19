#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector <int> el(n);
        for (int i=0; i<n; i++) cin>>el[i];
        vector <int> cricket(m);
        for (int i=0; i<m; i++) cin>>cricket[i];
        int ans = 0;
        bool current = 0;
        int i=0, j=0;
        while (i<n && j<m) {
            if (el[i]<cricket[j]) {
                if (current == 0) {}
                else {
                    current = 0;
                    ans++;
                }
                i++;
            }
            else {
                if (current == 1) {}
                else {
                    current = 1;
                    ans++;
                }
                j++;
            }
        }
        if (i<n) {
            if (current == 0) {}
            else ans++;
        }
        if (j<m) {
            if (current == 1) {}
            else ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}