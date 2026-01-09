// https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        if (k>1) cout<<"YES"<<endl;
        else {
            bool issorted = true;
            for (int i=1; i<n; i++) if (arr[i]<arr[i-1]) issorted = false;
            cout<<(issorted ? "YES" : "NO")<<endl;
        }
    }
    return 0;
}