// https://www.codechef.com/problems/EVENPSUM

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin>>a>>b;
        long long odda = (a+1)/2;
        long long oddb = (b+1)/2;
        long long evena = a/2;
        long long evenb = b/2;
        cout<<odda*oddb+evena*evenb<<endl;
    }
    return 0;
}