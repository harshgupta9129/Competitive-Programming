// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRESENTS

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int coin = n%5;
        coin+=n/5 *4;
        cout<<coin<<endl;
    }
    return 0;
}