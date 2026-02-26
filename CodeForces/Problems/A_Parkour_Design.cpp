#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        if (2*y>x) cout<<"NO"<<endl;
        else if ((x+4*y)>=0) {
            if ((x+4*y)%3==0 && (x+4*y)/3>=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl; 
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}