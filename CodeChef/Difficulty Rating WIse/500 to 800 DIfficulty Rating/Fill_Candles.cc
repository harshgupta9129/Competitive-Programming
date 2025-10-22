#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        float n,k,m;
        cin>>n>>k>>m;
        cout<<ceil((n/m)/k)<<endl;
    }
    return 0;
}