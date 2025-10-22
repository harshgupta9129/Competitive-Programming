// https://www.codechef.com/problems/REPEAT

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,k,s;
        cin>>n>>k>>s;
        s = s - pow(n,2);
        cout<<s/(k-1)<<endl;
    }
    return 0;
}