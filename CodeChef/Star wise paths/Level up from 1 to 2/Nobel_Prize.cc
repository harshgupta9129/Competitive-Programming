#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector <int> topics(n);
        vector <int> available (m,0);
        for (int i=0; i<n; i++) {
            cin>>topics[i];
            available[topics[i]-1] = 1;
        }
        int check = false;
        for (int i=0; i<m; i++) if (available[i]==0) check = true;
        cout<<(check ? "Yes\n" : "No\n");
    }
    return 0;
}