#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        cout<<(x!=a && x!=b) + (y!=a && y!=b)<<endl;
    }
    return 0;
}