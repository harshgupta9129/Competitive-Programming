// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        cout<<(n/7 + (n%7>=2 ? 1 : 0))<<endl;
    }
    return 0;
}