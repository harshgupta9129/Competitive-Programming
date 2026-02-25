#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        cout<<(a/x)*y + b + a%x<<endl;
    }
    return 0;
}