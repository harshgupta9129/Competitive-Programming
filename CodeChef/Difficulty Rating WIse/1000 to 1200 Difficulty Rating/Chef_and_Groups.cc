// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/GROUPS

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
            if (s[i]=='1' && s[i+1]=='0') ans++;
        }
        if (s[(int)s.length()-1]=='1') ans++;
        cout<<ans<<endl;
    }
    return 0;
}