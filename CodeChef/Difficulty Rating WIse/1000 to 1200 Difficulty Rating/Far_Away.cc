// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/FARAWAY

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        long long n,m;
        cin>>n>>m;
        long long ans = 0;
        long long x;
        for (int i=0; i<n; i++) {
            cin>>x;
            ans+=(max(abs(x-1),abs(x-m)));
        }
        cout<<ans<<endl;
    }
    return 0;
}