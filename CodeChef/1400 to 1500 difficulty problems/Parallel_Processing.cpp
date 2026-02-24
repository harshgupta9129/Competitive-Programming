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
        vector <int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        long long sum = 0;
        for (int x : a) sum+=x;
        long long ans = sum;
        long long presum = 0;
        for (int x : a) {
            presum+=x;
            ans = min(ans, max(presum, sum-presum));
        }
        cout<<ans<<endl;
    }
    return 0;
}