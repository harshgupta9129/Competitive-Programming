#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int step = abs(a-c)+abs(b-d);
        if (step>k) cout<<"NO"<<endl;
        else {
            if ((k-step)%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}