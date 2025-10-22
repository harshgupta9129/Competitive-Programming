#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if (w==x) cout<<"YES";
        else if (w==y) cout<<"YES";
        else if (w==z) cout<<"YES";
        else if (w==x+y) cout<<"YES";
        else if (w==z+y) cout<<"YES";
        else if (w==z+x) cout<<"YES";
        else if (w==z+y+x) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}