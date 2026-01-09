#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int countodd = 0;
        int x;
        for (int i=0; i<n; i++) {
            cin>>x;
            if (x%2) countodd++;
        }
        if (countodd%2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}