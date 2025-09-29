// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/VALIDMIN

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int minimum = min(a,min(b,c));
        int count = 0;
        if (minimum == a) count++;
        if (minimum == b) count++;
        if (minimum == c) count++;
        if (count>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}