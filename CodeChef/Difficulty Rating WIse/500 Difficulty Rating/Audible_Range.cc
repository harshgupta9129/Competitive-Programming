// https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUDIBLE

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin>>x;
        cout<<(x>=67 && x<=45000 ? "YES" : "NO")<<endl;
    }
    return 0;
}