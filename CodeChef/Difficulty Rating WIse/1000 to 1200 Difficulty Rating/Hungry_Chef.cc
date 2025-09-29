// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BURGERS2

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,n,r;
        cin>>x>>y>>n>>r;
        int mincost = n*x;
        int maxcost = n*y;
        if (mincost>r) {
            cout<<-1<<endl;
            continue;
        }
        if (maxcost<=r) {
            cout<<0<<" "<<n<<endl;
            continue;
        }
        long long p = (r-mincost)/(y-x);
        if (p>n) p=n;
        cout<<(n-p)<<" "<<p<<endl;
    }
    return 0;
}