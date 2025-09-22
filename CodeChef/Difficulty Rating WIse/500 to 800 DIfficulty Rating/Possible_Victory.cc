// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH

#include <bits/stdc++.h>
using namespace std;

int main () {
    int r,o,c;
    cin>>r>>o>>c;
    r-=c;
    cout<<((20-o)*6*6 > r ? "YES" : "NO")<<endl;
    return 0;
}