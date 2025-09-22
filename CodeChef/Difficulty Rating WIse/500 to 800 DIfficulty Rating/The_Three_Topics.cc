// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/THREETOPICS

#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    cout<<(x==a || x==b || x==c ? "Yes" : "No")<<endl;
    return 0;
}