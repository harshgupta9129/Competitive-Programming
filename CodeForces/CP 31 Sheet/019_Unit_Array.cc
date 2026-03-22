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
        int pos1 = 0;
        int neg1 = 0;
        for (int i=0; i<n; i++) {
            if (arr[i]==1) pos1++;
            else neg1++;
        }
        int ans = 0;
        if (neg1%2) {
            neg1--;
            pos1++;
            ans++;
        }
        if (pos1<neg1) {
            int diff = neg1-pos1;
            diff = ceil(diff/2.0);
            if (diff%2) diff++;
            ans+=diff;
        }
        cout<<ans<<endl;
    }
    return 0;
}