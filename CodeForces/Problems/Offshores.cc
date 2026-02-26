#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin>>a[i];

        long long total = 0;
        for (int i = 0; i < n; i++) {
            total += (a[i] / x) * y;
        }
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long cur = total - (a[i] / x) * y + a[i];
            ans = max(ans, cur);
        }
        cout << ans << "\n";
    }

    return 0;
}
