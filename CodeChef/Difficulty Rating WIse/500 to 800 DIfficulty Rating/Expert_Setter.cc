// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float x,y;
        cin>>x>>y;
        cout<<(y >= x/2 ? "YES" : "NO")<<endl; 
    }
    return 0;
}