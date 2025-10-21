#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int m,x,y;
        cin>>m>>x>>y;
        vector <int> cops(m);
        int ans = 0;
        vector <int> safe(100,1);
        for (int i=0; i<m; i++) {
            cin>>cops[i];
            int start = cops[i]-x*y;
            if (start<1) start=1;
            int end = cops[i]+x*y;
            if (end>100) end= 100;
            while (start<=end) safe[(start++)-1] = 0;
        }
        for (int i=0; i<100; i++) {
            if (safe[i]==1) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}