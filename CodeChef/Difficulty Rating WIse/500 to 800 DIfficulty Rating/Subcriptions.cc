// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float n,p;
        cin>>n>>p;
        cout<<ceil(n/6)*p<<endl;
    }
    return 0;
}