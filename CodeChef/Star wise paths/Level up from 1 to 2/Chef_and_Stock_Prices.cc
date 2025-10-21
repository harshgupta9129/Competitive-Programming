#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int s,a,b,c;
        cin>>s>>a>>b>>c;
        int price = s * (100.0+c)/100;
        cout<<(price>=a && price<=b ? "Yes" : "No")<<endl;
    }
    return 0;
}