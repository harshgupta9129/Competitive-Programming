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
        vector <int> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        int ans = -1;
        int minimum = arr[0];
        for (int i=1; i<n; i++) {
            if (arr[i]-minimum>0) ans = max(ans, arr[i]-minimum);
            else minimum = arr[i];
        }
        if (ans!=-1) cout<<ans<<endl;
        else cout<<"UNFIT"<<endl;
    }
    return 0;
}