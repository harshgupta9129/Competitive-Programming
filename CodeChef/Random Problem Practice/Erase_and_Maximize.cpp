#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,s;
        cin>>n>>s;
        int temp = (s)/n;
        int ans = 0;
        for (int i=1; i<=n; i++) {
            s-=temp;
            if (temp==6) ans+=5;
            else ans+=6;
            if ((temp+1)*(n-i)>s) {}
            else temp++;
        }
        cout<<ans<<endl;
    }
    return 0;
}