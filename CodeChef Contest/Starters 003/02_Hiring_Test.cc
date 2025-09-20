#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int x,y;
        cin>>x>>y;
        for (int i=0; i<n; i++) {
            string s;
            cin>>s;
            int f=0, p=0;
            for (int j=0; j<m; j++) {
                if (s[j]=='F') f++;
                else if (s[j]=='P') p++;
            }
            if (f>=x || (f==(x-1) && p>=y)) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}