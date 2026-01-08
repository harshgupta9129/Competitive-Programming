#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        k--;  
        if (k == 0) {
            cout << 0 << '\n';
            continue;
        }

        string ans = "";
        while (k > 0) {
            int r = k % 5;
            ans.push_back("02468"[r]);
            k /= 5;
        }

        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}
