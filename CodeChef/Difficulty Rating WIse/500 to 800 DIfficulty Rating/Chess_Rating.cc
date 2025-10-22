#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        float x,y;
        cin>>x>>y;
        cout<<ceil((y-x)/8)<<endl;
    }
    return 0;
}