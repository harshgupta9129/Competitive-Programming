#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        if (n%2) {
            cout<<x<<" ";
            for (int i=1; i<=n/2; i++) {
                cout<<x-i<<" ";
                cout<<x+i<<" ";
            }
        }
        else {
            for (int i=1; i<=n/2; i++) {
                cout<<x-i<<" ";
                cout<<x+i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}