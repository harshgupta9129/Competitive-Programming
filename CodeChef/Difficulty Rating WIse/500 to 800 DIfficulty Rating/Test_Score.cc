// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,x,y;
        cin>>n>>x>>y;
        cout<<(y%x==0 && n>=y/x ? "YES" : "NO")<<endl;;
    }
    return 0;
}