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
        int n = s.length();
        int cnt0 = 0;
        for (char c : s) if (c == '0') cnt0++;
        int cnt1 = s.size() - cnt0;
        cnt0 = min(cnt0, cnt1);
        cnt1 = cnt0;
        int temp = 0;
        for (int i=0; i<n; i++) {
            if (s[i]=='0') {
                if (cnt1) cnt1--;
                else break;
            }
            else {
                if (cnt0) cnt0--;
                else break;
            }
            temp++;
        }
        cout<<n-temp<<endl;
    }
    return 0;
}
