// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float x,y,r;
        cin>>x>>y>>r;
        int stick = r/30;
        cout<<ceil((stick+x)/y)<<endl;
    }
    return 0;
}