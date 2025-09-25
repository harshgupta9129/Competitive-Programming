// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EQUALIZEAB

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,x;
        cin>>a>>b>>x;
        int diff = abs(a-b);
        if (diff%(2*x)==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}