#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int temp = 0;
        if (b<=a+c) temp = b;
        else temp = a+c; 
        cout<<(temp>=n ? "YES" : "NO")<<endl;
    }
    return 0;
}