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
        int req = n;
        if (m<n) req+=(n-m);
        cout<<req<<endl;
    }
    return 0;
}