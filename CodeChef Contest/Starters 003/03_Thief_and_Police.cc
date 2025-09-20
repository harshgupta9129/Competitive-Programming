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
        int a,b;
        cin>>a>>b;
        int thief  = n-x + m-y;
        int police = 0;
        for (int i=a; i<n; i++) {
            if (b<m) {
                b++;
                a++;
            }
            else a++;
            police++;
        }
        police+=m-b;
        if (police>=thief) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}