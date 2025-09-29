// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MAKEMULTIPLE

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        if (a==b) cout<<"YES"<<endl;
        else if (b/a > 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}