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
        sort(a.begin(),a.end());
        int i=0,j=n-1;
        vector <int> ans(n);
        int k=0;
        while (i<=j) {
            if (i==j) {
                ans[k++] = a[i];
                break;
            }
            ans[k++] = a[i++];
            ans[k++] = a[j--];
        }
        bool check = 0;
        int sum = ans[0];
        for (int i=1; i<n; i++) {
            if (sum==ans[i]) {
                check = 1;
            }
            sum+=ans[i];
        }
        if (check) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            for (int i=0; i<n; i++) {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}