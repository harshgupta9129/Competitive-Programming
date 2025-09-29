// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/KNIGHT2

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
        cout<<((a+b)%2 == (c+d)%2 ? "YES" : "NO")<<endl;
    }
    return 0;
}