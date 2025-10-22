// https://www.codechef.com/problems/RECNDSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        string left = s.substr(1) + s[0];         // L(S)
        string right = s[n - 1] + s.substr(0, n - 1); // R(S)

        if (left == right) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
