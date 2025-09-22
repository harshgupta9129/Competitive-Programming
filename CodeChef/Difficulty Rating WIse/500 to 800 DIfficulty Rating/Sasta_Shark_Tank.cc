// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        a = a*10;
        b = b*5;
        if (a<b) cout<<"SECOND";
        else if (a>b) cout<<"FIRST";
        else cout<<"ANY";
        cout<<endl;
    }
    return 0;
}