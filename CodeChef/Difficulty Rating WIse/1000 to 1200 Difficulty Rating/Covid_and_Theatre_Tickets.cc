// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/COVID_19

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        cout<<(m+1)/2*((n+1)/2)<<endl;
    }
    return 0;
}