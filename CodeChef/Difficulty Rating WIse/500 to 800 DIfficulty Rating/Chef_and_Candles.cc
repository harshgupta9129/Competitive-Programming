// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFCAND

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float n,x;
        cin>>n>>x;
        if (n<x) {
            cout<<0<<endl;
            continue;
        }
        n-=x;
        cout<<ceil(n/4)<<endl;
    }
    return 0;
}