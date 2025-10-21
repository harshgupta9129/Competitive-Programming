#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,s;
        cin>>n>>s;
        int ans = s;
        while (n<s) {
            ans-=2;
            s--;
        }
        cout<<ans<<endl;
    }
    return 0;
}