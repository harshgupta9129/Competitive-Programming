#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll s, m;

bool ok(ll k) {
    ll r = s;
    for (int i = 61; i >= 0; i--) {
        if ((m >> i) & 1) {
            ll take = min(k, r >> i);
            r -= (take << i);
        }
    }
    return r == 0;
}

void solve() {
    cin >> s >> m;
    if (s % (m & -m) != 0) {
        cout << -1 << "\n";
        return;
    }
    ll l = 1, r = s, ans = -1;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}