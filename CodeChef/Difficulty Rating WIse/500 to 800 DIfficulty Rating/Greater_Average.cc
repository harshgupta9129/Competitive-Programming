// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float a,b,c;
        cin>>a>>b>>c;
        cout<<((a+b)/2 > c ? "YES" : "NO")<<endl;
    }
    return 0;
}