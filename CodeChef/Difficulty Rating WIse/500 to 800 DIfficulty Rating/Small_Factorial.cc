// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW018

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        long long ans = 1;
        for (int i=2; i<=n; i++) ans*=i;
        cout<<ans<<endl;
    }
    return 0;
}