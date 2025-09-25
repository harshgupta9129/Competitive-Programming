// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTUD

#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        int ans= 0;
        for (int i=1; i<s.length(); i++) {
            if (s[i-1]=='<' && s[i]=='>') ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}