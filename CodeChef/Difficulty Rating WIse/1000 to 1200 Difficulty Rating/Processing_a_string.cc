// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/KOL15A

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
        int ans = 0;
        for (int i=0; i<(int)s.length(); i++) {
            if (s[i]>='0' && s[i]<='9') ans+=s[i]-'0';
        }
        cout<<ans<<endl;
    }
    return 0;
}