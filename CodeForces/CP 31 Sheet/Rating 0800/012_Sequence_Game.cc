#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> b(n);
        for (int i=0; i<n; i++) cin>>b[i];
        vector <int> a(2*n);
        int i=0;
        a[i] = b[0];
        for (int j=1; j<n; j++) {
            if (a[i]<=b[j]) a[++i] = b[j];
            else {
                a[++i] = b[j];
                a[++i] = b[j];
            }
        }
        cout<<i+1<<endl;
        for (int j=0; j<=i; j++) cout<<a[j]<<" ";
        cout<<endl;
    }
    return 0;
}