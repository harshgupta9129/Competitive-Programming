#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int d,c;
        cin>>d>>c;
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        int day1 = a1 + a2 + a3;
        int day2 = b1 + b2 + b3;
        int withoutcoupon = day1 + day2 + 2*d;
        int withcoupon = day1 + day2 + c + (day1 >= 150 ? 0 : d) + (day2 >= 150 ? 0 : d);
        cout<<(withcoupon < withoutcoupon ? "YES\n" : "NO\n"); 
    }
    return 0;
}