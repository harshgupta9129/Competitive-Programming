// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int x,y,z;
        cin>>x>>y>>z;
        cout<<(x*y/2 < z ? "YES" : "NO")<<endl; 
    }
    return 0;
}