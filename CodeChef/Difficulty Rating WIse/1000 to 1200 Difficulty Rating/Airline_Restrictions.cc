// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/AIRLINE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if (a+b<=d && c<=e) cout<<"YES"<<endl;
        else if (b+c<=d && a<=e) cout<<"YES"<<endl;
        else if (a+c<=d && b<=e) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}