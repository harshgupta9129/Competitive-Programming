// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/PIZZA_BURGER

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int x,y,z;
        cin>>x>>y>>z;
        if (x>=y || x>=z) {
            if (x>=y) cout<<"PIZZA"<<endl;
            else cout<<"BURGER"<<endl;
        }
        else cout<<"NOTHING"<<endl;
    }
    return 0;
}