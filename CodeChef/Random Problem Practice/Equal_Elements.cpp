#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        unordered_set <int> temp;
        int ans = 0;
        for (int i=0; i<n; i++) {
            if (temp.count(a[i])) {
                ans+=2;
                temp.clear();
            } 
            else temp.insert(a[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}