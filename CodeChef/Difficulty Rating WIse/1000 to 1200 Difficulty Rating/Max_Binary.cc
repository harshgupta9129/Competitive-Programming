// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MAX_BIN

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if (s[0]=='0') {
            s[0]='1';
            cout<<s;
            for (int i=0; i<k-1; i++) cout<<0;
        }
        else {
            cout<<s;
            for (int i=0; i<k; i++) cout<<0;
        }
        cout<<endl;
    }
    return 0;
}