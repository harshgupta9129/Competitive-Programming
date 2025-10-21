#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        int all_passed = true;
        int partial = true;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            if (x==0) all_passed = false;
            if (x==0 && i<m) partial = false;
        }
        if (all_passed) cout<<100<<endl;
        else if (partial) cout<<k<<endl;
        else cout<<0<<endl;
    }
    return 0;
}