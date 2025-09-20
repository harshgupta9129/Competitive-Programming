#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int x,m,d;
        cin>>x>>m>>d;
        int delay1 = x*m;
        int delay = x + d;
        cout<<min(delay1, delay)<<endl;
    }
    return 0;
}