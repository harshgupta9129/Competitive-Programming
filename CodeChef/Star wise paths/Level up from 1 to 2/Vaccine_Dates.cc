#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int d,l,r;
        cin>>d>>l>>r;;
        if (l<=d && d<=r) cout<<"Take second dose now\n";
        else if (d<l) cout<<"Too Early\n";
        else cout<<"Too Late\n";
    }
    return 0;
}