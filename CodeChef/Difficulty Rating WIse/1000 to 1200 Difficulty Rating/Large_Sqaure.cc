// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/XLSQUARE

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,a;
        cin>>n>>a;
        int curr = 1;
        int val = 0;
        while (n>=curr) {
            val++;
            n-=curr;
            curr+=2;
        }
        cout<<a*val<<endl;
    }
    return 0;
}