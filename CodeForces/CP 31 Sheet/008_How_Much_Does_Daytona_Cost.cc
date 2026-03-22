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
        bool ans = false;
        for (int i=0; i<n; i++) {
            if (arr[i]==k) ans = true; 
        }
        cout<<(ans ? "YES" : "NO")<<endl;
    }
    return 0;
}