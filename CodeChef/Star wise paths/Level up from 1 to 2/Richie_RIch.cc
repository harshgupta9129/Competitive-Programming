// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFRICH

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int x,y,i;
        cin>>x>>y>>i;
        cout<<(y-x)/i<<endl;
    }
    return 0;
}