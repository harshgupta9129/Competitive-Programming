#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int ans = 0;
        if (x.find(s)!=-1) cout<<ans<<endl;
        else {
            ans++;
            x+=x;
            n*=2;
            if (x.find(s)!=-1) cout<<ans<<endl;
            else {
                while (n<m*2) {
                    ans++;
                    x+=x;
                    n*=2;
                    if (x.find(s)!=-1) break;
                }
                if (x.find(s)!=-1) cout<<ans<<endl;
                else cout<<-1<<endl;
            }
        } 
    }
    return 0;
}