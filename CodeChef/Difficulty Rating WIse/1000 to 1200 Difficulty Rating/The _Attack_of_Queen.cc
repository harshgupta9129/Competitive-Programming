// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/QUEENATTACK

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,x,y;
        cin>>n>>x>>y;
        int ans = 2*n-2;
        ans+=(min(x-1,y-1));
        ans+=(min(x-1,n-y));
        ans+=(min(n-x,n-y));
        ans+=(min(n-x,y-1));
        cout<<ans<<endl;
    }
    return 0;
}