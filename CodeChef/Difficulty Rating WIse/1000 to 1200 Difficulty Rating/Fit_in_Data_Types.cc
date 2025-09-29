// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DATATYPE

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        cout<<(b%(a+1))<<endl;
    }
    return 0;
}