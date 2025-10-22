#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        float a,b,x,y;
        cin>>a>>b>>x>>y;
        float min1 = a/x;
        float min2 = b/y;
        if (min1 < min2) cout<<"Chef"<<endl;
        else if (min1 > min2) cout<<"Chefina"<<endl;
        else cout<<"both"<<endl;
    }
    return 0;
}