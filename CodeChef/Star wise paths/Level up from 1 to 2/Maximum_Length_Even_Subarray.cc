#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int sum = n*(n+1)/2;
        cout<<(sum%2 ? n-1 : n)<<endl;
    }
    return 0;
}