#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << a[0] << "\n";
            continue;
        }
        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == n) {
                idx = i;
                break;
            }
        }
        swap(a[0], a[idx]);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}