// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float n,x;
        cin>>n>>x;
        cout<<(ceil(n*x/4))<<endl;

    }
    return 0;
}