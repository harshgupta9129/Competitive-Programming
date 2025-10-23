#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int max = -1;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            if (max<x) max = x;
        }
        cout<<max<<endl;
    }
    return 0;
}