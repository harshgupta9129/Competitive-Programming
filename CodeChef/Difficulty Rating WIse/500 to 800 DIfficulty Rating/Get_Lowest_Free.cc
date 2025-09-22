// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(a+b+c - min(a,min(b,c)))<<endl;
    }
    return 0;
}