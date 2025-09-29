// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/SRTARR

#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        for (int i=0; i<n-1; i++) {
            if (s[i] == '1' && s[i+1] == '0') ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}