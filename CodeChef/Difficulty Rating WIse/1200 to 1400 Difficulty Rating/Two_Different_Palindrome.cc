// https://www.codechef.com/problems/TWODIFFPALIN

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin>>a>>b;
        if ((a % 2 == 1 && b % 2 == 1) || (a < 2 || b < 2)) cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}