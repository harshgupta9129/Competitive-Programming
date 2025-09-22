// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float h,x,y;
        cin>>h>>x>>y;
        int step = 0;
        if (h>=y) {
            h-=y;
            step++;
        }
        cout<<step+ceil(h/x)<<endl;
    }
    return 0;
}