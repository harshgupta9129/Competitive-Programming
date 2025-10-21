#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        double u,v,a,s;
        cin>>u>>v>>a>>s;
        double finalvelocity = pow(u,2) - 2*a*s;
        if (finalvelocity<0) finalvelocity = 0;
        else finalvelocity = sqrt(finalvelocity);
        cout<<(finalvelocity <= v ? "Yes" : "No")<<endl;
    }
    return 0;
}