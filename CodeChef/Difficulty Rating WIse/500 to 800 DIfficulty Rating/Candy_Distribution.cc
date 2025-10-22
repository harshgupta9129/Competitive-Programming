#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        float n,m;
        cin>>n>>m;
        float temp = n/(m*2);
        if (temp==(int)temp) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}