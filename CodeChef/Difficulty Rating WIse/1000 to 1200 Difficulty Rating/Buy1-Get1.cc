// http://codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BUY1GET1

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int n = s.length();
        int cost = 0;
        int i=0;
        for (i=0; i<n-1; i++) {
            if (s[i]==s[i+1]) i++;
            cost++;
        }
        if (i==n-1) cost++;
        cout<<cost<<endl;
    }
    return 0;
}