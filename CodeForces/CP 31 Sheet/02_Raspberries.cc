#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int even = 0;
        int ans = k;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] % 2 == 0) even++;

            int rem = a[i] % k;
            if (rem == 0) ans = 0;
            else ans = min(ans, k - rem);
        }

        if (k == 2) {
            cout << (even > 0 ? 0 : 1) << "\n";
        }
        else if (k == 3 || k == 5) {
            cout << ans << "\n";
        }
        else { // k == 4
            if (ans == 0) {
                cout << 0 << "\n";
            }
            else if (even >= 2) {
                cout << 0 << "\n";
            }
            else if (even == 1 && n-even>0) {
                cout << 1 << "\n";
            }
            else {
                cout << min(2, ans) << "\n";
            }
        }
    }
    return 0;
}
