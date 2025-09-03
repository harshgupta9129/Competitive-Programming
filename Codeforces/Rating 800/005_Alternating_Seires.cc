// 2131B	Alternating Series

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        for (int i=1; i<=n; i++) {
            if (i%2!=0) cout<<-1;
            else if (i==n) cout<<2;
            else cout<<3;
            cout<<" ";           
        }
        cout<<endl;
    }
    return 0;
}