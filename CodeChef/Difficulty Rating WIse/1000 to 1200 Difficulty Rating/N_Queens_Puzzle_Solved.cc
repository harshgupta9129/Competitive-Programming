// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EUREKA

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        float n;
        cin>>n;
        n = pow(0.143*n,n);
        if (n-floor(n) <0.5) cout<<floor(n)<<endl;
        else cout<<floor(n)+1<<endl;
    }
    return 0;
}