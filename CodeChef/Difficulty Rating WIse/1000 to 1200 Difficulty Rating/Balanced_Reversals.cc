// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BALREV

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        int count = 0;
        for (int i=0; i<n; i++) if (s[i]=='1') count++;
        for (int i=0; i<n-count; i++) cout<<0;
        for (int i=0; i<count; i++) cout<<1;
        cout<<endl;
    }
    return 0;
}