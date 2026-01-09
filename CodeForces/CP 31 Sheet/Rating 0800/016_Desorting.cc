#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        if (n==1) {
            cout<<0<<endl;
            continue;
        }
        vector <int> diff(n-1);
        for (int i=0; i<n-1; i++) {
            diff[i]=arr[i+1]-arr[i];
        }
        int ans = diff[0]/2+1;
        for (int i=0; i<n-1; i++) {
            if (diff[i]<0) {
                ans = 0;
                break;
            } 
            ans = min(ans,diff[i]/2+1);
        } 
        cout<<ans<<endl;
    }
    return 0;
}