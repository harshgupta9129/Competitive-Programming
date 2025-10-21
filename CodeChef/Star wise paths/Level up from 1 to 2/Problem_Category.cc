#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin>>x;
        if (x<100) cout<<"Easy\n";
        else if (x<200) cout<<"Medium\n";
        else cout<<"Hard\n";
    }
    return 0;
}