// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        if (a<b) cout<<'<';
        else if (a>b) cout<<'>';
        else cout<<'=';
        cout<<endl;
    }
    return 0;
}