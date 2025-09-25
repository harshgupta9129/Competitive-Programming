// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/THREEFR

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int x,y,z;
        cin>>x>>y>>z;
        int maxmoney = max(x,max(y,z));
        if (x+y+z-maxmoney == maxmoney) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}