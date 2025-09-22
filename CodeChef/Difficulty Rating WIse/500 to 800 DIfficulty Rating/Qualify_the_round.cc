// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int x,a,b;
        cin>>x>>a>>b;
        cout<<(x<=a + b*2 ? "Qualify" : "NotQualify")<<endl;
    }
    return 0;
}