#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        cout<<max(1500 - y*4 - (x+y)*2, 1500 - x*2 - (x+y)*4)<<endl;
    }
    return 0;
}