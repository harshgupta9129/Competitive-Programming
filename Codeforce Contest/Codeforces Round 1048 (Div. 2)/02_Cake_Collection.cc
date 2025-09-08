#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector <long long> arr(n);
        for (int i=0; i<n; i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        int n1 = n;
        int m1 = m;
        while (n1!=0 && m1!=0) {
            arr[n1-1]*=m1;
            n1--;
            m1--;
        }
        long long ans = 0;
        n1 = n;
        m1 = m;
        while (n1!=0 && m1!=0) {
            ans+=arr[n1-1];
            n1--;
            m1--;
        }
        cout<<ans<<endl;
    }
    return 0;
}