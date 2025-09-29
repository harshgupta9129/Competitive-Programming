// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/STICKBREAK

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
        cout<<(a%b ? 1 : 0) <<endl;
    }
    return 0;
}