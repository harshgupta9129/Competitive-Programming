#include <bits/stdc++.h>
using namespace std;

void solve () {
    long long n;
    cin>>n;
    while (n>1) {
        if (n%2) {
            cout<<"YES"<<endl;
            return;
        }
        n/=2;
    }
    cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}