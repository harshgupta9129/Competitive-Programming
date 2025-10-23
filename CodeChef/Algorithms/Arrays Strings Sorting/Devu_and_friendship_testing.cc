#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        set <int> unique;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            unique.insert(x);
        }
        cout<<unique.size()<<endl;
    }
    return 0;
}