#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,x,p;
        cin>>n>>x>>p;
        int mark = x*3 - (n-x);
        cout<<(mark>=p ? "Pass" : "Fail")<<endl;
    }
    return 0;
}