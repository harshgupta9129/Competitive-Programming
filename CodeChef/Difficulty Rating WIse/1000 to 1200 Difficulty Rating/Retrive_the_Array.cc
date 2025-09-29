// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ARRAYRET

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin>>n;
        vector <long long> b(n);
        long long sumb = 0;
        for (int i=0; i<n; i++) {
            cin>>b[i];
            sumb+=b[i];
        }
        long long sum = sumb/(n+1);
        for (int i=0; i<n; i++) {
            cout<<b[i]-sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}