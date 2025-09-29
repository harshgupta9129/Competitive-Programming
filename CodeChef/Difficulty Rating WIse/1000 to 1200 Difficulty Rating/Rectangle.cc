// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/RECTANGL

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a==b && c==d) cout<<"YES"<<endl;
        else if (a==c && b==d) cout<<"YES"<<endl;
        else if (a==d && b==c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}