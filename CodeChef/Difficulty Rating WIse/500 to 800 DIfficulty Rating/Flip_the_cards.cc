#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        cout<<((x==0 || x==n) ? 0 : min(x,(n-x)))<<endl;
    }
    return 0;
}