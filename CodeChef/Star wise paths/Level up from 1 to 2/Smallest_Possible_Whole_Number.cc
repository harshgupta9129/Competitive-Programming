#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (k == 0) {
            cout << n << endl;
        } else {
            cout << (n % k) << endl;
        }
    }
    return 0;
}