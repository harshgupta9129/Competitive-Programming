// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EXAMTIME

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int sum1 = a+b+c;
        int sum2 = d+e+f;
        if (sum1 != sum2) {
            cout << (sum1 > sum2 ? "DRAGON\n" : "SLOTH\n");
        } else if (a != d) {
            cout << (a > d ? "DRAGON\n" : "SLOTH\n");
        } else if (b != e) {
            cout << (b > e ? "DRAGON\n" : "SLOTH\n");
        } else if (c != f) {
            cout << (c > f ? "DRAGON\n" : "SLOTH\n");
        } else {
            cout << "TIE\n";
        }
    }
    return 0;
}