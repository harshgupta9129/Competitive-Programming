// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        if (n<=k) cout<<0<<endl;
        else cout<<n-k<<endl;
    }
    return 0;
}