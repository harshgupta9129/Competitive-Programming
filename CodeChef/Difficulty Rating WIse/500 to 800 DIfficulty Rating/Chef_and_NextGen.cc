// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/HELIUM3

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float a,b,x,y;
        cin>>a>>b>>x>>y;
        cout<<(x*y/b >= a ? "Yes" : "No")<<endl;
    }
    return 0;
}