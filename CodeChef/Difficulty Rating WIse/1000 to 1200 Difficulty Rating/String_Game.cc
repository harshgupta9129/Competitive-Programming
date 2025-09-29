// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ABSTRING

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (n%2) {
            cout<<"NO"<<endl;
            continue;
        }
        sort(s.begin(),s.end());
        bool flag = true;
        for (int i=0; i<n-1; i+=2) {
            if (s[i]!=s[i+1]) flag = false;
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}