#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n,a,b;
        cin>>n>>a>>b;
        cout<<((n+1)/2)*b + (n/2)*a<<endl;
    }
    return 0;
}