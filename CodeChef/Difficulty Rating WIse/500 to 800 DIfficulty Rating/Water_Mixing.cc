#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,a,b;
        cin>>a>>b>>x>>y;
        if (a<b) {
            if ((b-a)<=x) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        } 
        else {
            if ((a-b)<=y) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}