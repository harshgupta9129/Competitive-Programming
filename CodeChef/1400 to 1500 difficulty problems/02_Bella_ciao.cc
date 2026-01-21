#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long D, d, P, Q;
        cin >> D >> d >> P >> Q;

        long long k = D / d;
        long long r = D % d;

        long long ans = d * (k * P + Q * (k * (k - 1) / 2)) + r * (P + k * Q);

        cout << ans << '\n';
    }
}
