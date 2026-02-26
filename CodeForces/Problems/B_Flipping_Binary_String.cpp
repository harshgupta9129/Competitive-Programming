#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ones = 0, zeros= 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones++;
            else zeros++;
        }
        
        int c1 = (ones % 2 == 0) ? ones : 1e9;
        int c2 = (zeros% 2 == 1) ? zeros: 1e9;
        
        if (c1 == 1e9 && c2 == 1e9) {
            cout << "-1\n";
        } else if (c1 < c2) {
            cout << c1 << "\n";
            if (c1 > 0) {
                for (int i = 0; i < n; i++) {
                    if (s[i] == '1') cout << i + 1 << " ";
                }
                cout << "\n";
            }
        } else {
            cout << c2 << "\n";
            if (c2 > 0) {
                for (int i = 0; i < n; i++) {
                    if (s[i] == '0') cout << i + 1 << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}