#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if ((n/2)%2==0) {
            cout<<"YES"<<endl;
            for (int i=1; i<=n/4; i++) cout<<i<<" ";
            for (int i=3*(n/4)+1; i<=n; i++) cout<<i<<" ";
            cout<<endl;
            for (int i=n/4+1; i<=3*(n/4); i++) cout<<i<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}