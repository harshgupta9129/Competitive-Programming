#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        vector <int> pre(n-1);
        vector <int> pos(n-1);
        int count = 0;
        for (int i=0; i<n-1; i++) {
            if (a[i]==2) count++;
            pre[i]=count;
        }
        count = 0;
        for (int i=n-1; i>0; i--) {
            if (a[i]==2) count++;
            pos[i-1]=count;
        }
        int ans = -1;
        for (int i=0; i<n-1; i++) {
            if (pre[i]==pos[i]) {
                ans = i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}