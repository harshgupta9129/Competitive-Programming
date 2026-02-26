#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long h, k;
        cin >> h >> k;
        
        vector<long long> a(n);
        long long s = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }
        
        vector<long long> pf(n);
        vector<long long> mn(n);
        pf[0] = a[0];
        mn[0] = a[0];

        for (int i = 1; i < n; i++) {
            pf[i] = pf[i - 1] + a[i];
        }
        for (int i = 1; i < n; i++) {
            mn[i] = min(mn[i - 1], a[i]);
        }
        
        long long ans = -1;
        vector<long long> mx(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            mx[i] = max(mx[i + 1], a[i]);
        }
        
        for (int p = 1; p <= n; p++) {
            long long g = max(0LL, mx[p] - mn[p - 1]);
            long long mp = pf[p - 1] + g;

            long long c = 0;
            if (h > mp) c = (h - mp + s - 1) / s;
            long long ct = c * (n + k) + p;
            
            if (ans == -1 || ct < ans) ans = ct;
        }
        cout << ans << "\n";
    }
    return 0;
}