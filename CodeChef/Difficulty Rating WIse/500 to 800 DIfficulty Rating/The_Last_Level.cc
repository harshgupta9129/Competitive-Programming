#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        float x,y,z;
        cin>>x>>y>>z;
        float temp = x/3;
        if (temp==(int)temp) temp-=1;
        else temp = (int)temp;
        cout<<temp*z + x*y<<endl;
    }
    return 0;
}