#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long l,r;
        cin>>l>>r;
        cout<<(2*r-2*l+1)<<endl;
    }
    return 0;
}