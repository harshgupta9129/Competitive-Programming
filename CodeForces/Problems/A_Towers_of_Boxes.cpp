#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;
        int mb = d / m;
        int mbt = mb + 1;
        int towers = (n + mbt - 1) / mbt;
        cout << towers << '\n';
    }
    return 0;
}