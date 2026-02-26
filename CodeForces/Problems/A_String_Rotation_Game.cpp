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
        
        int m = 0;
        for (int i = 0; i < n; i++) {
            string r = s.substr(i) + s.substr(0, i);
            int c = 1;
            for (int j = 1; j < n; j++) {
                if (r[j] != r[j - 1]) {
                    c++;
                }
            }
            m = max(m, c);
        }
        cout << m << "\n";
    }
    return 0;
}