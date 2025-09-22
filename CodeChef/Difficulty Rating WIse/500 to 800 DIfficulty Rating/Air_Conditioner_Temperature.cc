// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int min = max(a,c);
        if (min<=b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}