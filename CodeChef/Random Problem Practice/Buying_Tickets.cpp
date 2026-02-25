#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector <int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        string s;
        cin>>s;
        vector <int> b;
        for (int i=0; i<n; i++) if (s[i]=='0') b.push_back(a[i]);
        sort(b.begin(), b.end());
        if (b.size()<k) cout<<-1<<endl;
        else {
            int ans = 0;
            for (int i=0; i<k; i++) ans+=b[i];
            cout<<ans<<endl;
        }
    }
    return 0;
}