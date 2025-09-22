// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFGAMES

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<(a+b+c+d == 0 ? "IN" : "OUT")<<endl;
    }
    return 0;
}